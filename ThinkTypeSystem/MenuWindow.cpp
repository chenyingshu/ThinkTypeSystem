#include "MenuWindow.h"
#include "LoginWindow.h"
#include "TestWindow.h"
#include "TrainWindow.h"
#include "MsgWindow.h"
#include <QMessageBox>
#include <QStatusBar>

//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving

MenuWindow::MenuWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	statusLabel = new QLabel(this);
	statusLabel->setText("User ID: " + profileID + "  ");
	ui.statusBar->addPermanentWidget(statusLabel);
}

MenuWindow::~MenuWindow()
{
}

void MenuWindow::on_trainBtn_clicked()
{
	TrainWindow *trainWindow = new TrainWindow();
	this->close();
	trainWindow->show();
}

void MenuWindow::on_actionTraining_triggered()
{
	on_trainBtn_clicked();
}

void MenuWindow::on_testBtn_clicked()
{
	TestWindow *testWindow = new TestWindow();
	testWindow->show();
	this->close();
}


void MenuWindow::on_actionLetter_Test_triggered()
{
	on_testBtn_clicked();
}

void MenuWindow::on_msgBtn_clicked()
{
	MsgWindow *msgWindow = new MsgWindow();
	msgWindow->show();
	this->close();
}

void MenuWindow::on_actionMessage_triggered()
{
	on_msgBtn_clicked();
}

void MenuWindow::openMainWin()
{
	LoginWindow *win = new LoginWindow();
	win->show();
	this->close();
}

void MenuWindow::on_logoutBtn_clicked()
{
	int logoutDlg = QMessageBox::information(NULL, "Log Out", "Are you sure to log out?", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
	if (QMessageBox::Yes == logoutDlg)
	{
		IEE_EngineDisconnect();
		openMainWin();
	}
}

void MenuWindow::on_actionMenu_triggered()
{}
