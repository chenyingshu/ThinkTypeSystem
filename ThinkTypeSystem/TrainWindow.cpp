#include "TrainWindow.h"
#include "MenuWindow.h"
#include "LoginWindow.h"
#include "TestWindow.h"
#include "TrainWindow.h"
#include "MsgWindow.h"
#include <QMessageBox>
#include <QCoreApplication>

#include <windows.h>

//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving


int userCloudID = -1; //Emotiv Cloud User ID
int getNumberProfile = -1; //number of profiles
std::string profileName = ("Profile_" + profileID).toStdString(); //profile name
int profileNum = -1; //profile ID number 
ulong listAction = 0; //list Action

TrainWindow::TrainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	statusLabel = new QLabel(this);
	statusLabel->setText("User ID: " + profileID + "  ");
	ui.statusBar->addPermanentWidget(statusLabel);	

	ui.radioButton_1->setCheckable(false);
	ui.radioButton_2->setCheckable(false);
	ui.radioButton_3->setCheckable(false);
	ui.radioButton_4->setCheckable(false);
	ui.radioButton_5->setCheckable(false);
	ui.radioButton_6->setCheckable(false);
	ui.radioButton_7->setCheckable(false);
	ui.radioButton_8->setCheckable(false);
	ui.radioButton_9->setCheckable(false);

	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
	timer->start(1000);
}

TrainWindow::~TrainWindow()
{
}

/*
* Load the profile or create a new profile
*/
int TrainWindow::checkRecords()
{
	/*Cloud Saving and Loading--SLOW :<*/
	if (connectCloud)
	{
		//get user cloud ID
		if (EC_GetUserDetail(&userCloudID) != EDK_OK) {
			int warningDlg = QMessageBox::information(NULL, "Cloud Disconnection", "Error: Cannot get detail info", QMessageBox::Ok);
			return -1;
		}

		getNumberProfile = EC_GetAllProfileName(userCloudID);

		int profileOK = false; //whether the profile has exixted
		int profileNum = -1;
		EC_GetProfileId(userCloudID, profileName.c_str(), &profileNum);
		int warningDlg = QMessageBox::information(NULL, "Profile ID Number", "profile #." + QString::number(profileNum) + "; user #." + QString::number(userID) + "; cloud #." + QString::number(userCloudID), QMessageBox::Ok);
		if (profileNum >= 0) {
			//profilefile existed
			if (EC_LoadUserProfile(userCloudID, userID, profileNum) == EDK_OK) {
				profileOK = true;
				int warningDlg = QMessageBox::information(NULL, "Profile Loaded", "Succeeded to load the profile.", QMessageBox::Ok);

				return 0;
			}
		}

		//create a new profile
		if (profileOK == false) {
			if (EC_SaveUserProfile(userCloudID, userID, profileName.c_str(), TRAINING) == EDK_OK)
			{
				int warningDlg = QMessageBox::information(NULL, "Profile Creation Succeeded", "Succeeded to create a new profile.", QMessageBox::Ok);
				return 0;
			}
			else {
				int warningDlg = QMessageBox::information(NULL, "Profile Creation Failed", "Error: Cannot create a new profile.", QMessageBox::Ok);
				return -1;
			}
		}
	}
	else {
		/*Local Saving and Loading*/
		if (LocalSavingLoading(userID, false) == 0)
		{
			return 0;
		}
		else
		{
			if (LocalSavingLoading(userID, true) == 0)
			{
				return 0;
			}
		}
	}
	return -1;
}


int TrainWindow::LocalSavingLoading(int headsetID, bool save = true)
{	
	std::string profileNameForLoading = ("C:/1/Profile_" + QString::number(userID) + "_" + profileID + ".emu").toStdString();
	std::string profileNameForSaving = ("C:/1/Profile_" + QString::number(userID)+"_"+profileID + ".emu").toStdString();
	//int warningDlg = QMessageBox::information(NULL, "Profile ID Number", "profile #." + profileID + "; user #." + QString::number(userID), QMessageBox::Ok);
	if (save) {
		if (IEE_SaveUserProfile(headsetID, profileNameForSaving.c_str()) == EDK_OK)
		{
			int warningDlg = QMessageBox::information(NULL, "Profile Saved", "Succeeded to save the profile.", QMessageBox::Ok);
		}
		else {
			//int warningDlg = QMessageBox::information(NULL, "Profile unsaved", "Failed to save the profile.", QMessageBox::Ok);
			return -1;
		}	
	}
	else {
		if (IEE_LoadUserProfile(userID, profileNameForLoading.c_str()) == EDK_OK)
		{
			int warningDlg = QMessageBox::information(NULL, "Profile Loaded", "Succeeded to load the profile.", QMessageBox::Ok);
		}
		else {
			int warningDlg = QMessageBox::information(NULL, "Cannot Load Profile", "Failed to load the profile.", QMessageBox::Ok);		
			return -1;
		}
	}
	return 0;
}

void TrainWindow::SavingLoadingFunction(int userCloudID, bool save = true)
{
	int getNumberProfile = EC_GetAllProfileName(userCloudID);

	if (save) {    // Save profile to cloud
		int profileNum = -1;
		EC_GetProfileId(userCloudID, profileName.c_str(), &profileNum);

		if (profileNum >= 0) {
			//std::cout << "Profile with " << profileName << " is existed." << std::endl;
			if (EC_UpdateUserProfile(userCloudID, userID, profileNum) == EDK_OK) {
				//std::cout << "Updating finished" << std::endl;
			}
			else {
				//std::cout << "Updating failed" << std::endl;
			}
		}
		else if (EC_SaveUserProfile(userCloudID, userID, profileName.c_str(), TRAINING) == EDK_OK)
		{
			//std::cout << "Saving finished" << std::endl;
		}
		else { //std::cout << "Saving failed" << std::endl; }
			return;
		}
	} else {
		// Load profile from cloud
		if (getNumberProfile > 0) {
			if (EC_LoadUserProfile(userCloudID, userID, EC_ProfileIDAtIndex(userCloudID, 0)) == EDK_OK)
			{
				//std::cout << "Loading finished" << std::endl;
			}
			else {
				//std::cout << "Loading failed" << std::endl;
			}
		}
		return;
	}

}

/*
* Show all trained and the next to be trained buttons
*/
void TrainWindow::showTrainedActions(int userID)
{
	unsigned long pTrainedActionsOut = 0;
	IEE_MentalCommandGetTrainedSignatureActions(userID, &pTrainedActionsOut);

	if (pTrainedActionsOut >= 0) {
		ui.radioButton_1->setCheckable(true);
		ui.radioButton_1->setChecked(true);
		ui.radioButton_1->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 0) {
		ui.radioButton_2->setCheckable(true);
		ui.radioButton_2->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 1) {
		ui.radioButton_3->setCheckable(true);
		ui.radioButton_3->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 3) {
		ui.radioButton_4->setCheckable(true);
		ui.radioButton_4->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 7) {
		ui.radioButton_5->setCheckable(true);
		ui.radioButton_5->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 15) {
		ui.radioButton_6->setCheckable(true);
		ui.radioButton_6->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 31) {
		ui.radioButton_7->setCheckable(true);
		ui.radioButton_7->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 63) {
		ui.radioButton_8->setCheckable(true);
		ui.radioButton_8->setStyleSheet("color:black;");
	}
	if (pTrainedActionsOut > 127) {
		ui.radioButton_9->setCheckable(true);
		ui.radioButton_9->setStyleSheet("color:black;");
	}
}

/*
* Initialization
* Load or create a profile
*/
void TrainWindow::handleTimeout()
{
	if (timer->isActive())
	{
		timer->stop();
	}

	EmoEngineEventHandle eEvent = IEE_EmoEngineEventCreate();
	EmoStateHandle eState = IEE_EmoStateCreate();
	int state = 0;
	bool flag = true;
	while (flag) {

		QCoreApplication::processEvents();
		int state = IEE_EngineGetNextEvent(eEvent);

		if (state == EDK_OK) {

			IEE_Event_t eventType = IEE_EmoEngineEventGetType(eEvent);
			IEE_EmoEngineEventGetUserId(eEvent, &userID);

			checkRecords();
			flag = false;
		}
		else if (state != EDK_NO_EVENT) {
			//std::cout << "Internal error in Emotiv Engine!" << std::endl;
			break;
		}

#ifdef _WIN32
		Sleep(5);
#endif
	}

	IEE_EmoStateFree(eState);
	IEE_EmoEngineEventFree(eEvent);
	
	showTrainedActions(userID);
}



void TrainWindow::setActiveActions(int userID)
{
	ulong action2 = (ulong)IEE_MentalCommandAction_t::MC_PUSH;
	ulong action3 = (ulong)IEE_MentalCommandAction_t::MC_PULL;
	ulong action4 = (ulong)IEE_MentalCommandAction_t::MC_LIFT;
	ulong action5 = (ulong)IEE_MentalCommandAction_t::MC_DROP;
	ulong action6 = (ulong)IEE_MentalCommandAction_t::MC_LEFT;
	ulong action7 = (ulong)IEE_MentalCommandAction_t::MC_RIGHT;
	ulong action8 = (ulong)IEE_MentalCommandAction_t::MC_ROTATE_LEFT;
	ulong action9 = (ulong)IEE_MentalCommandAction_t::MC_ROTATE_RIGHT;

	listAction = action2 | action3 | action4 | action5 | action6 | action7 | action8 | action9;

	int errorCode = EDK_OK;
	errorCode = IEE_MentalCommandSetActiveActions(userID, listAction);

	/*
	if (errorCode == EDK_OK)
	{
		//std::cout << "Setting MentalCommand active actions (MC_PUSH | MC_PULL) for user " << userID << std::endl;
	}
	else {}//std::cout << "Setting MentalCommand active actions error: " << errorCode; 
	*/
}



void TrainWindow::on_startTrainBtn_clicked()
{
	setActiveActions(userID);
	if (ui.radioButton_1->isChecked())
	{
		trainPad = 1;
	}
	else if (ui.radioButton_2->isChecked())
	{
		trainPad = 2;
	}
	else if (ui.radioButton_3->isChecked())
	{
		trainPad = 3;
	}
	else if (ui.radioButton_4->isChecked())
	{
		trainPad = 4;
	}
	else if (ui.radioButton_5->isChecked())
	{
		trainPad = 5;
	}
	else if (ui.radioButton_6->isChecked())
	{
		trainPad = 6;
	}
	else if (ui.radioButton_7->isChecked())
	{
		trainPad = 7;
	}
	else if (ui.radioButton_8->isChecked())
	{
		trainPad = 8;
	}
	else if (ui.radioButton_9->isChecked())
	{
		trainPad = 9;
	}

	trainDlg = new TrainDlg();
	if (trainDlg->exec() == TrainDlg::Accepted) {
		delete trainDlg;
		showTrainedActions(userID);
	}
}

void TrainWindow::on_actionMenu_triggered()
{
	MenuWindow *win = new MenuWindow();
	this->close();
	win->show();
}

void TrainWindow::on_actionTraining_triggered()
{}

void TrainWindow::on_actionLetter_Test_triggered()
{
	TestWindow *win = new TestWindow();
	this->close();
	win->show();
}

void TrainWindow::on_actionMessage_triggered()
{
	MsgWindow *win = new MsgWindow();
	this->close();
	win->show();
}