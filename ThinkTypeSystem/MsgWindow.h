#pragma once

#include <QMainWindow>
#include "ui_MsgWindow.h"
#include <QLabel>
//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving

class MsgWindow : public QMainWindow
{
	Q_OBJECT

public:
	MsgWindow(QWidget *parent = Q_NULLPTR);
	~MsgWindow();

private:
	Ui::MsgWindow ui;
	QLabel *statusLabel;
	QTimer *timer;
	int numOfPads;
	int minActionPower;
	int blinkNum;
	bool flag;
	void checkEmoState();
	void setPadLayout(int numOfPads);
	void handleFacialExpression(EmoStateHandle eState);
	void MentalCommandAnimation(EmoStateHandle eState);
	void t9Init();
	int padLayout[10];
	int padType[10];
	bool readIf;

	int cycleNum;

	QString grayStyle = "background-color: grey; border-radius: 10px;border: 1px solid black; font: 16pt";
	QString twoStyle = "background-color:rgb(228, 231, 2); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString threeStyle = "background-color:rgb(248, 153, 20); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString fourStyle = "background-color: rgb(255, 63, 25); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString fiveStyle = "background-color:rgb(0, 193, 145); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString sixStyle = "background-color:rgb(60, 112, 255); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString sevenStyle = "background-color:rgb(193, 35, 255); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString eightStyle = "background-color:rgb(255, 29, 127); border-radius: 10px; border: 3px solid black; font: 20pt";
	QString nineStyle = "background-color:rgb(158, 255, 55); border-radius: 10px; border: 3px solid black; font: 20pt";

public slots:
	void handleTimeout();

private slots:
	void on_cycleBtn_clicked();

	void on_sendBtn_clicked();

	void on_setParaBtn_clicked();

	void on_actionMenu_triggered();

	void on_actionTraining_triggered();

	void on_actionLetter_Test_triggered();

	void on_actionMessage_triggered();

	void on_actionHelp_triggered();
};
