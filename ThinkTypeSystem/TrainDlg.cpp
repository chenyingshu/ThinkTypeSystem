#include "TrainDlg.h"
#include "TrainWindow.h"
#include "LoginWindow.h"
#include <QMessageBox>
#include <QCoreApplication>

#include <windows.h>

#define SOUND_LOOP 100
#define TRAIN_TIME_LIMIT 20*1000

bool flag;


TrainDlg::TrainDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.progressBar->setVisible(false);
	if (trainPad>1)	ui.infoLabel->setText("Training Pad #"+QString::number(trainPad));

	//sound effect
	switch (trainPad)
	{	
	case 2:
		sound = new QSound("./Resources/sound/two.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 3:
		sound = new QSound("./Resources/sound/three.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 4:
		sound = new QSound("./Resources/sound/four.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 5:
		sound = new QSound("./Resources/sound/five.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 6:
		sound = new QSound("./Resources/sound/six.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 7:
		sound = new QSound("./Resources/sound/seven.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 8:
		sound = new QSound("./Resources/sound/eight.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	case 9:
		sound = new QSound("./Resources/sound/nine.wav", this);
		sound->setLoops(SOUND_LOOP);
		break;
	default:
		break;
	};		

	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));	
}

TrainDlg::~TrainDlg()
{
}

void TrainDlg::handleTimeout()
{
	if (timer->isActive())
	{
		timer->stop();
	}
	if (flag) {
		flag = false;
		ui.progressBar->setValue(10000);
		if ((trainPad>1) && (ui.soundCheckBox->isChecked()) && (!sound->isFinished())) sound->stop();
		if ((trainPad > 1) && (ui.animCheckBox->isChecked()) && (!(animation->state() == QPropertyAnimation::Stopped))) animation->stop();
		int warningDlg = QMessageBox::information(NULL, "Training Failed", "Failed to train the command.", QMessageBox::Ok);
		this->accept();
	}
}

void TrainDlg::handleMentalCommandEvent(EmoEngineEventHandle MentalCommandEvent) {

	unsigned int userID = 0;
	IEE_EmoEngineEventGetUserId(MentalCommandEvent, &userID);
	IEE_MentalCommandEvent_t eventType = IEE_MentalCommandEventGetType(MentalCommandEvent);


	switch (eventType) {

		case IEE_MentalCommandTrainingStarted:
		{
			ui.progressBar->setValue(0);			
			break;
		}

		case IEE_MentalCommandTrainingSucceeded:
		{			
			if ((trainPad>1) && (ui.soundCheckBox->isChecked()) && (!sound->isFinished())) sound->stop();
			ui.progressBar->setValue(10000);				
			int warningDlg = QMessageBox::information(NULL, "Training Succeeded", "Succeeded to train the command.", QMessageBox::Ok);
			IEE_MentalCommandSetTrainingControl(userID, MC_ACCEPT);
			if (timer->isActive()) timer->stop();
			break;
		}

		case IEE_MentalCommandTrainingFailed:
		{
			if ((trainPad>1) && (ui.soundCheckBox->isChecked()) && (!sound->isFinished())) sound->stop();
			if ((trainPad > 1) && (ui.animCheckBox->isChecked()) && (!(animation->state() == QPropertyAnimation::Stopped))) animation->stop();
			ui.progressBar->setValue(10000);
			int warningDlg = QMessageBox::information(NULL, "Training Failed", "Failed to train the command.", QMessageBox::Ok);			
			flag = false;
			this->accept();
			break;
		}

		case IEE_MentalCommandTrainingCompleted:
		{
			flag = false;
			trainMentalCommandActions(userID);	
			//save to profile
			this->accept();
			break;
		}

		case IEE_MentalCommandTrainingRejected:
		{
			ui.progressBar->setValue(10000);
			if ((trainPad>1) && (ui.soundCheckBox->isChecked()) && (!sound->isFinished())) sound->stop();
			if ((trainPad > 1) && (ui.animCheckBox->isChecked()) && (!(animation->state() == QPropertyAnimation::Stopped))) animation->stop();
			int warningDlg = QMessageBox::information(NULL, "Training Failed", "Failed to train the command.", QMessageBox::Ok);
			flag = false;
			this->accept();
			break;
		}
		case IEE_MentalCommandTrainingReset:
		{
			flag = false;
			this->accept();
			break;
		}
		case IEE_MentalCommandNoEvent:
			break;

		default:
		{		
			break;
		}
	}
}

/*
* Save the training data to profile
*/
void TrainDlg::trainMentalCommandActions(int headsetID)
{
	if (connectCloud) {
		SavingToCloud();
	}
	else {
		std::string profileNameForSaving = ("C:/1/Profile_" + QString::number(userID) + "_" + profileID + ".emu").toStdString();
		if (IEE_SaveUserProfile(headsetID, profileNameForSaving.c_str()) == EDK_OK)
		{
			//int warningDlg = QMessageBox::information(NULL, "Training Saved", "Succeeded to save the training data.", QMessageBox::Ok);
		}
		else {
			int warningDlg = QMessageBox::information(NULL, "Profile unsaved", "Failed to save the profile.", QMessageBox::Ok);
		}
	}
}

// Save profile to cloud
void TrainDlg::SavingToCloud()
{
	std::string profileName = ("Profile_" + profileID).toStdString(); //profile name	

	int userCloudID;
	//get user cloud ID
	if (EC_GetUserDetail(&userCloudID) != EDK_OK) {
		int warningDlg = QMessageBox::information(NULL, "Cloud Disconnection", "Error: Cannot get detail info", QMessageBox::Ok);
		return;
	}

	int profileNum = -1;
	EC_GetProfileId(userCloudID, profileName.c_str(), &profileNum);

	if (profileNum >= 0) {
		if (EC_UpdateUserProfile(userCloudID, userID, profileNum) == EDK_OK) {
			int warningDlg = QMessageBox::information(NULL, "Training Saved", "Succeeded to save the training data.", QMessageBox::Ok);
		}
		else {
			int warningDlg = QMessageBox::information(NULL, "Profile unsaved", "Failed to save the profile.", QMessageBox::Ok);
		}
	}
}

void TrainDlg::setMentalCommandActions(int headsetID, IEE_MentalCommandAction_t action)
{
	int errorCode = IEE_MentalCommandSetTrainingAction(headsetID, action);
	if (errorCode != EDK_OK) {
		int warningDlg = QMessageBox::information(NULL, "Set Action Failed", "Failed to set training action.", QMessageBox::Ok);
		this->accept();
	}
}

/*
* Pad animation
*/
void TrainDlg::PadAnimation()
{	
	QPoint location;
	switch (trainPad) {
	case 2:
		animation = new QPropertyAnimation(ui.pushButton_2, "geometry");
		location = QPoint(ui.pushButton_2->x(), ui.pushButton_2->y());
		break;

	case 3:
		animation = new QPropertyAnimation(ui.pushButton_3, "geometry");
		location = QPoint(ui.pushButton_3->x(), ui.pushButton_3->y());
		break;

	case 4:
		animation = new QPropertyAnimation(ui.pushButton_4, "geometry");
		location = QPoint(ui.pushButton_4->x(), ui.pushButton_4->y());
		break;

	case 5:
		animation = new QPropertyAnimation(ui.pushButton_5, "geometry");
		location = QPoint(ui.pushButton_5->x(), ui.pushButton_5->y());
		break;

	case 6:
		animation = new QPropertyAnimation(ui.pushButton_6, "geometry");
		location = QPoint(ui.pushButton_6->x(), ui.pushButton_6->y());
		break;

	case 7:
		animation = new QPropertyAnimation(ui.pushButton_7, "geometry");
		location = QPoint(ui.pushButton_7->x(), ui.pushButton_7->y());
		break;

	case 8:
		animation = new QPropertyAnimation(ui.pushButton_8, "geometry");
		location = QPoint(ui.pushButton_8->x(), ui.pushButton_8->y());
		break;

	case 9:
		animation = new QPropertyAnimation(ui.pushButton_9, "geometry");
		location = QPoint(ui.pushButton_9->x(), ui.pushButton_9->y());
		break;

	}
	animation->setDuration(5000);
	animation->setStartValue(QRect(location, QSize(63, 53)));
	animation->setEndValue(QRect(location, QSize(126, 106)));
	animation->setLoopCount(4);
	animation->start();
}

void TrainDlg::on_startBtn_clicked()
{
	ui.startBtn->setVisible(false);
	ui.progressBar->setValue(0);
	ui.progressBar->setVisible(true);
	
	QString grayStyle = "background-color: grey; border-radius: 10px;border: 1px solid black; font: 16pt";
	if (!ui.colorCheckBox->isChecked()) {
		ui.pushButton_2->setStyleSheet(grayStyle);
		ui.pushButton_3->setStyleSheet(grayStyle);
		ui.pushButton_4->setStyleSheet(grayStyle);
		ui.pushButton_5->setStyleSheet(grayStyle);
		ui.pushButton_6->setStyleSheet(grayStyle);
		ui.pushButton_7->setStyleSheet(grayStyle);
		ui.pushButton_8->setStyleSheet(grayStyle);
		ui.pushButton_9->setStyleSheet(grayStyle);
	}

	EmoEngineEventHandle eEvent = IEE_EmoEngineEventCreate();
	EmoStateHandle eState = IEE_EmoStateCreate();
	int state = 0;

	if (trainPad == 1) {
		setMentalCommandActions(userID, MC_NEUTRAL);
	}
	else if (trainPad == 2) {
		setMentalCommandActions(userID, MC_PUSH);
	}
	else if (trainPad == 3) {
		setMentalCommandActions(userID, MC_PULL);		
	}
	else if (trainPad == 4) {
		setMentalCommandActions(userID, MC_LIFT);
	}
	else if (trainPad == 5) {
		setMentalCommandActions(userID, MC_DROP);
	}
	else if (trainPad == 6) {
		setMentalCommandActions(userID, MC_LEFT);
	}
	else if (trainPad == 7) {
		setMentalCommandActions(userID, MC_RIGHT);
	}
	else if (trainPad == 8) {
		setMentalCommandActions(userID, MC_ROTATE_LEFT);
	}
	else if (trainPad == 9) {
		setMentalCommandActions(userID, MC_ROTATE_RIGHT);
	}
	IEE_MentalCommandSetTrainingControl(userID, MC_START);
	

	if (ui.animCheckBox->isChecked()) {
		PadAnimation();
	}
	if ((trainPad>1) && (ui.soundCheckBox->isChecked())) {
		sound->play();
	}

	if (timer->isActive())
	{
		timer->stop();
	}
	timer->start(TRAIN_TIME_LIMIT);

	flag = true;
	int bar = 0;
	while (flag) {

		QCoreApplication::processEvents();

		state = IEE_EngineGetNextEvent(eEvent);

		// New event needs to be handled
		if (state == EDK_OK) {

			IEE_Event_t eventType = IEE_EmoEngineEventGetType(eEvent);
			IEE_EmoEngineEventGetUserId(eEvent, &userID);

			switch (eventType) {
			case IEE_UserAdded:
			{
				break;
			}

			case IEE_UserRemoved:
			{
				break;
			}

			case IEE_EmoStateUpdated:
			{
				IEE_EmoEngineEventGetEmoState(eEvent, eState);
				break;
			}

			// Handle MentalCommand training related event
			case IEE_MentalCommandEvent:
			{
				handleMentalCommandEvent(eEvent);
				break;
			}
			default:
				break;
			}
		}
#ifdef _WIN32
		Sleep(5);
#endif
		if (ui.progressBar->isVisible()) {
			bar += 5;
			if (bar > 9900) {
				bar = 9900;
				IEE_MentalCommandSetTrainingControl(userID, MC_REJECT);
			}
			ui.progressBar->setValue(bar);
		}		
	}

	IEE_EmoStateFree(eState);
	IEE_EmoEngineEventFree(eEvent);
	
}

void TrainDlg::on_acceptBtn_clicked()
{
	IEE_MentalCommandSetTrainingControl(userID, MC_ACCEPT);
}

void TrainDlg::on_rejectBtn_clicked()
{
	IEE_MentalCommandSetTrainingControl(userID, MC_REJECT);
}

