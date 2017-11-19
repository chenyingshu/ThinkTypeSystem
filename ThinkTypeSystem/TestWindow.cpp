#include "TestWindow.h"
#include "MenuWindow.h"
#include "LoginWindow.h"
#include "TestWindow.h"
#include "TrainWindow.h"
#include "MsgWindow.h"
#include <windows.h>
#include <iostream> 
#include <fstream> 
#include <string> 
#include <QMessageBox>
#include <QCoreApplication>

#define TIMER_TIMEOUT (20*1000)

QString grayStyle = "background-color: grey; border-radius: 10px;border: 1px solid black; font: 16pt";
QString twoStyle = "background-color:rgb(228, 231, 2); border-radius: 10px; border: 3px solid black; font: 16pt";
QString threeStyle = "background-color:rgb(248, 153, 20); border-radius: 10px; border: 3px solid black; font: 16pt";
QString fourStyle = "background-color: rgb(255, 63, 25); border-radius: 10px; border: 3px solid black; font: 16pt";
QString fiveStyle = "background-color:rgb(0, 193, 145); border-radius: 10px; border: 3px solid black; font: 16pt";
QString sixStyle = "background-color:rgb(60, 112, 255); border-radius: 10px; border: 3px solid black; font: 16pt";
QString sevenStyle = "background-color:rgb(193, 35, 255); border-radius: 10px; border: 3px solid black; font: 16pt";
QString eightStyle = "background-color:rgb(255, 29, 127); border-radius: 10px; border: 3px solid black; font: 16pt";
QString nineStyle = "background-color:rgb(158, 255, 55); border-radius: 10px; border: 3px solid black; font: 16pt";

QString sampleLetter = "A";
QString typeLetter = "";
int numOfPads = 1;
int activePad = 0;
bool readIf = false;

QString letters[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
					 "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
int padLayout[10] = {0};
int padType[10] = { 0 };

std::string filename = "C:/1/TestLogger.csv";


TestWindow::TestWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	statusLabel = new QLabel(this);
	statusLabel->setText("User ID: " + profileID + "  ");
	ui.statusBar->addPermanentWidget(statusLabel);
	timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
	
	ui.stateLineEdit->hide();
}

TestWindow::~TestWindow()
{
}

void TestWindow::handleTimeout()
{
	on_typePad_clicked();
}

void TestWindow::MentalCommandAnimation(EmoStateHandle eState) {

	if (IS_FacialExpressionIsBlink(eState)) {
		blinkNum++;
		if (blinkNum > 1) {
			blinkNum = 0;
			on_typePad_clicked();
			return;
		}
	}

	IEE_MentalCommandAction_t actionType =IS_MentalCommandGetCurrentAction(eState);
	float actionPower = IS_MentalCommandGetCurrentActionPower(eState);
	switch (actionType) {
		case MC_PUSH:
			activePad = 2;
			ui.typePad->setStyleSheet(twoStyle);
			break;
		case MC_PULL:
			activePad = 3;
			ui.typePad->setStyleSheet(threeStyle);
			break;
		case MC_LIFT:
			activePad = 4;
			ui.typePad->setStyleSheet(fourStyle);
			break;
		case MC_DROP:
			activePad = 5;
			ui.typePad->setStyleSheet(fiveStyle);
			break;
		case MC_LEFT:
			activePad = 6;
			ui.typePad->setStyleSheet(sixStyle);
			break;
		case MC_RIGHT:
			activePad = 7;
			ui.typePad->setStyleSheet(sevenStyle);
			break;
		case MC_ROTATE_LEFT:
			activePad = 8;
			ui.typePad->setStyleSheet(eightStyle);
			break;
		case MC_ROTATE_RIGHT:
			activePad = 9;
			ui.typePad->setStyleSheet(nineStyle);
			break;
		default:
			break;
	}

	if (actionPower * 100 >= ui.minPowerBox->value()) {
		if (typeLetter == "") {
			padType[activePad] = padLayout[activePad - 1] + 1;
			typeLetter = letters[padType[activePad]];
		}
		else {
			padType[activePad]++;
			if (padType[activePad] > padLayout[activePad]) {
				padType[activePad] = padLayout[activePad - 1] + 1;
			}

			typeLetter = letters[padType[activePad]];
		}
		ui.typeLineEdit->setText(typeLetter);
	}
	else {
		ui.typePad->setStyleSheet(grayStyle);
	}

	ui.powerBar->setValue(actionPower * 100);

#ifdef _WIN32
	Sleep(100);
#endif
	//int warningDlg = QMessageBox::information(NULL, "Letter #", "Letter# = " + QString::number(padType[activePad]), QMessageBox::Ok);

	//os << static_cast<int>(actionType) << ","
		//<< static_cast<int>(actionPower*100.0f);
}


void TestWindow::handleFacialExpression(EmoStateHandle eState)
{

}

void TestWindow::setPadLayout(int numOfPads)
{
	ui.pushButton_1->setStyleSheet(grayStyle);
	ui.pushButton_2->setStyleSheet(grayStyle);
	ui.pushButton_3->setStyleSheet(grayStyle);
	ui.pushButton_4->setStyleSheet(grayStyle);
	ui.pushButton_5->setStyleSheet(grayStyle);
	ui.pushButton_6->setStyleSheet(grayStyle);
	ui.pushButton_7->setStyleSheet(grayStyle);
	ui.pushButton_8->setStyleSheet(grayStyle);
	ui.pushButton_9->setStyleSheet(grayStyle);
	ui.pushButton_2->setText("2");
	ui.pushButton_3->setText("3");
	ui.pushButton_4->setText("4");
	ui.pushButton_5->setText("5");
	ui.pushButton_6->setText("6");
	ui.pushButton_7->setText("7");
	ui.pushButton_8->setText("8");
	ui.pushButton_9->setText("9");

	switch (numOfPads) {
		case 1:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_2->setText("2\nA-Z");
			padLayout[1] = -1;//1 for none
			padLayout[2] = 25;//2: A to Z
			break;
		case 2:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_2->setText("2\nA-M");
			ui.pushButton_3->setText("3\nN-Z");
			padLayout[1] = -1;
			padLayout[2] = 12;
			padLayout[3] = 25;
			break;
		case 3:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_2->setText("2\nABCDEFGH");
			ui.pushButton_3->setText("3\nIJKLMNOPQ");
			ui.pushButton_4->setText("4\nRSTUVWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 7;
			padLayout[3] = 16;
			padLayout[4] = 25;
			break;
		case 4:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_5->setStyleSheet(fiveStyle);
			ui.pushButton_2->setText("2\nABCDEF");
			ui.pushButton_3->setText("3\nGHIJKL");
			ui.pushButton_4->setText("4\nMNOPQRS");
			ui.pushButton_5->setText("5\nTUVWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 5;
			padLayout[3] = 11;
			padLayout[4] = 18;
			padLayout[5] = 25;
			break;
		case 5:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_5->setStyleSheet(fiveStyle);
			ui.pushButton_6->setStyleSheet(sixStyle);
			ui.pushButton_2->setText("2\nABCDE");
			ui.pushButton_3->setText("3\nFGHIJ");
			ui.pushButton_4->setText("4\nKLMNO");
			ui.pushButton_5->setText("5\nPQRST");
			ui.pushButton_6->setText("6\nUVWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 5;
			padLayout[3] = 11;
			padLayout[4] = 18;
			padLayout[5] = 25;
			break;
		case 6:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_5->setStyleSheet(fiveStyle);
			ui.pushButton_6->setStyleSheet(sixStyle);
			ui.pushButton_7->setStyleSheet(sevenStyle);
			ui.pushButton_2->setText("2\nABCD");
			ui.pushButton_3->setText("3\nEFGH");
			ui.pushButton_4->setText("4\nIJKL");
			ui.pushButton_5->setText("5\nMOPQ");
			ui.pushButton_6->setText("6\nRSTU");
			ui.pushButton_7->setText("7\nVWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 3;
			padLayout[3] = 7;
			padLayout[4] = 11;
			padLayout[5] = 16;
			padLayout[6] = 20;
			padLayout[7] = 25;
			break;
		case 7:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_5->setStyleSheet(fiveStyle);
			ui.pushButton_6->setStyleSheet(sixStyle);
			ui.pushButton_7->setStyleSheet(sevenStyle);
			ui.pushButton_8->setStyleSheet(eightStyle);
			ui.pushButton_2->setText("2\nABC");
			ui.pushButton_3->setText("3\nDEF");
			ui.pushButton_4->setText("4\nGHIJ");
			ui.pushButton_5->setText("5\nKLMN");
			ui.pushButton_6->setText("6\nOPQR");
			ui.pushButton_7->setText("7\nSTUV");
			ui.pushButton_8->setText("8\nWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 2;
			padLayout[3] = 5;
			padLayout[4] = 9;
			padLayout[5] = 13;
			padLayout[6] = 17;
			padLayout[7] = 21;
			padLayout[8] = 25;
			break;
		case 8:
			ui.pushButton_2->setStyleSheet(twoStyle);
			ui.pushButton_3->setStyleSheet(threeStyle);
			ui.pushButton_4->setStyleSheet(fourStyle);
			ui.pushButton_5->setStyleSheet(fiveStyle);
			ui.pushButton_6->setStyleSheet(sixStyle);
			ui.pushButton_7->setStyleSheet(sevenStyle);
			ui.pushButton_8->setStyleSheet(eightStyle);
			ui.pushButton_9->setStyleSheet(nineStyle);
			ui.pushButton_2->setText("2\nABC");
			ui.pushButton_3->setText("3\nDEF");
			ui.pushButton_4->setText("4\nGHI");
			ui.pushButton_5->setText("5\nJKL");
			ui.pushButton_6->setText("6\nMNO");
			ui.pushButton_7->setText("7\nPQRS");
			ui.pushButton_8->setText("8\nTUV");
			ui.pushButton_9->setText("9\nWXYZ");
			padLayout[1] = -1;
			padLayout[2] = 2;
			padLayout[3] = 5;
			padLayout[4] = 8;
			padLayout[5] = 11;
			padLayout[6] = 14;
			padLayout[7] = 18;
			padLayout[8] = 21;
			padLayout[9] = 25;
			break;
		default:
			break;
	}
}

void TestWindow::on_startBtn_clicked()
{
	readIf = true;
	ui.stateLineEdit->setVisible(true);

	sampleLetter = ui.sampleLineEdit->text();
	numOfPads = ui.numBox->value();
	//int warningDlg = QMessageBox::information(NULL, "#Pad", "# Of Pads = "+QString::number(numOfPads), QMessageBox::Ok);
	setPadLayout(numOfPads);
	timer->start(TIMER_TIMEOUT);

	for (int i = 0; i < 10; i++) padType[i] = 0;

	EmoEngineEventHandle eEvent = IEE_EmoEngineEventCreate();
	EmoStateHandle eState = IEE_EmoStateCreate();
	unsigned int userID = 0;
	flag = true;

	while (flag) {
		QCoreApplication::processEvents();
		//if (!readIf) break;

		blinkNum = 0;
				
		int state = IEE_EngineGetNextEvent(eEvent);

		// New event needs to be handled
		if (state == EDK_OK) {

			IEE_Event_t eventType = IEE_EmoEngineEventGetType(eEvent);
			IEE_EmoEngineEventGetUserId(eEvent, &userID);

			switch (eventType) {

			// New headset connected
			case IEE_UserAdded:
			{
				ui.powerBar->setValue(0);
				break;
			}
			// Headset disconnected, remove the existing socket
			case IEE_UserRemoved:
			{
				ui.powerBar->setValue(0);
				break;
			}

			// Send the MentalCommand animation if EmoState has been updated
			case IEE_EmoStateUpdated:
			{
				//if (!readIf) break;
				IEE_EmoEngineEventGetEmoState(eEvent, eState);
				MentalCommandAnimation(eState);					
				break;
			}

			// Handle MentalCommand training related event
			case IEE_MentalCommandEvent:
			{
				ui.powerBar->setValue(0);
				break;
			}
			case IEE_FacialExpressionEvent:
				IEE_EmoEngineEventGetEmoState(eEvent, eState);				
				handleFacialExpression(eState);
				break;
			default:
				ui.powerBar->setValue(0);
				break;
			}
		}
		else if (state != EDK_NO_EVENT) {
			//std::cout << "Internal error in Emotiv Engine!" << std::endl;
			break;
		}

#ifdef _WIN32
		Sleep(1000);
#endif
	}

	IEE_EmoStateFree(eState);
	IEE_EmoEngineEventFree(eEvent);
}

void TestWindow::on_typePad_clicked()
{	
	readIf = false;
	ui.stateLineEdit->hide();
	int duration = TIMER_TIMEOUT;
	if (timer->isActive())
	{
		duration -= timer->remainingTime();
		timer->stop();
	}

	flag = false;
	
	SYSTEMTIME systime;
	GetLocalTime(&systime);

	std::ofstream ofs(filename.c_str(), std::ios::app);
	ofs << profileID.toStdString() << ",";
	ofs << sampleLetter.toStdString() << ",";

	typeLetter = ui.typeLineEdit->text();
	if (sampleLetter == typeLetter) {
		ofs << 1 << ",";

		int warningDlg = QMessageBox::information(NULL, "Correct", "Typed the correct letter! ", QMessageBox::Ok);
	}
	else {
		ofs << 0 << ",";
		int warningDlg = QMessageBox::information(NULL, "Incorrect", "Typed the wrong letter! ", QMessageBox::Ok);
	}

	ofs << duration << ",";
	ofs << systime.wYear << "/" << systime.wMonth << "/" << systime.wDay << " " << systime.wHour << ":" << systime.wMinute << ":" << systime.wSecond;
	ofs << std::endl;
	ofs.close();

	ui.typeLineEdit->setText("");
	ui.typePad->setStyleSheet(grayStyle);
}

void TestWindow::on_actionMenu_triggered()
{
	MenuWindow *win = new MenuWindow();
	this->close();
	win->show();
}

void TestWindow::on_actionTraining_triggered()
{
	TrainWindow *win = new TrainWindow();
	this->close();
	win->show();
}

void TestWindow::on_actionLetter_Test_triggered()
{}

void TestWindow::on_actionMessage_triggered()
{
	MsgWindow *win = new MsgWindow();
	this->close();
	win->show();
}
