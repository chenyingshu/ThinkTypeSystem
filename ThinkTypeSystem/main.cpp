/*
* Title: ThinkType System
* Author: Yingshu Chen
* Date: newest update 5-Nov-2017
*
* **************************************************************************
* This system is a "typing" system via Brainwave Control using the Emotiv heaset.
* The system includes 4 parts:
* 1) Login with user ID first
* 2) Training mode section for training typing pads
* 3) Test Mode section for testing trained pads
* 4) Message Mode for T9 typing experience via Brainwave Control
* ***************************************************************************
*
* 5 Windows:
* 1) Login Page (LoginWindow)
* 2) Menu Page (MenuWin)
* 3) Training Window (TrainWin> with a dialog TrainDlg)
* 4) Test Windown (TestWin)
* 5) Message Window (MsgWin)
*
*/

#include "LoginWindow.h"
#include <QtWidgets/QApplication>

QString profileID = "0"; //default profile id
int trainPad = 1;
unsigned int userID = 0;
bool connectCloud = false;

int main(int argc, char *argv[])
{    
	QApplication a(argc, argv);
	LoginWindow w;
	w.show();
	return a.exec();
}
