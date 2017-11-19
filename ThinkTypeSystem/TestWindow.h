#pragma once

#include <QMainWindow>
#include "ui_TestWindow.h"
#include <QLabel>
#include <QTimer>
//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving

class TestWindow : public QMainWindow
{
	Q_OBJECT

public:
	TestWindow(QWidget *parent = Q_NULLPTR);
	~TestWindow();

private:
	Ui::TestWindow ui;
	QLabel *statusLabel;
	QTimer *timer;
	void setPadLayout(int numOfPads);
	bool flag;
	void MentalCommandAnimation(EmoStateHandle eState);
	void handleFacialExpression(EmoStateHandle eState);
	int blinkNum;
	int minActionPower;

public slots:
	void handleTimeout();

private slots:
	void on_typePad_clicked();

	void on_startBtn_clicked();

	void on_actionMenu_triggered();

	void on_actionTraining_triggered();

	void on_actionLetter_Test_triggered();

	void on_actionMessage_triggered();
};
