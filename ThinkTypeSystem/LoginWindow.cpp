#include "LoginWindow.h"
#include "TrainWindow.h"
#include <QMessageBox>

//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving


//Emotiv Username and Password (used for cloud profiles saving)
const std::string userName = "chenyingshu";
const std::string password = "Yingshu19931018";

//save profile in local
std::string profileFileLocation = "";

LoginWindow::LoginWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	userID = 0;//not connected yet
}


/*
* Start up Emotiv Driver and
* Connect to Emotiv cloud (Please keep Internet connected)
*/
int LoginWindow::CheckConnection()
{
	IEE_EngineDisconnect();
	//Start up Emotiv Driver
	if (IEE_EngineConnect() != EDK_OK) {	
		int warningDlg = QMessageBox::information(NULL, "Driver Disconnection", "Emotiv Driver start-up failed.", QMessageBox::Ok);
		return -1;
	}
	
	
	//connect to cloud
	if (connectCloud)
	{
		if (EC_Connect() != EDK_OK)
		{
			int warningDlg = QMessageBox::information(NULL, "Cloud Disconnection", "Cannot connect to Emotiv Cloud.", QMessageBox::Ok);
			return -2;
		}

		if (EC_Login(userName.c_str(), password.c_str()) != EDK_OK)
		{
			int warningDlg = QMessageBox::information(NULL, "Cloud Login Failure", "Your login attempt has failed. The username or password may be incorrect.", QMessageBox::Ok);
			return -3;
		}
	}
	
	return 0;
}

void LoginWindow::on_StartBtn_clicked()
{
	//record profile ID
	if (!(ui.UserIdLineEdit->text().isEmpty()))
	{
		profileID = ui.UserIdLineEdit->text();
	}
	else {
		profileID = "0";
	}

	//Check Driver and login Connection
	connectCloud = ui.cloudCheckBox->isChecked();
	if (CheckConnection()==0)
	{
		//open menu
		menuwin = new MenuWindow();
		this->close();
		menuwin->show();
	}
}
