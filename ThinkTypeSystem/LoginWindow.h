#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LoginWindow.h"
#include "MenuWindow.h"

extern QString profileID; // default user profile ID
extern bool connectCloud;  //whether connect to cloud profiles

class LoginWindow : public QMainWindow
{
	Q_OBJECT

public:
	LoginWindow(QWidget *parent = Q_NULLPTR);
	int CheckConnection();

private:
	Ui::LoginWindowClass ui;
	MenuWindow *menuwin;

private slots:
	void on_StartBtn_clicked();

};
