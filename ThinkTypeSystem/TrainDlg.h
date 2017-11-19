#pragma once

#include <QDialog>
#include <QSound>
#include <QTimer>
#include <QPropertyAnimation>
#include "ui_TrainDlg.h"


//Emotiv headers
#include "Iedk.h" //Iedk APIs
#include "IedkErrorCode.h" //Iedk error codes
#include "IEmoStateDLL.h" //EmoState
#include "EmotivCloudClient.h" //cloud profile loading and saving

class TrainDlg : public QDialog
{
	Q_OBJECT

public:
	TrainDlg(QWidget *parent = Q_NULLPTR);
	~TrainDlg();

private:
	Ui::TrainDlg ui;
	void handleMentalCommandEvent(EmoEngineEventHandle MentalCommandEvent);
	void trainMentalCommandActions(int headsetID);
	void setMentalCommandActions(int headsetID, IEE_MentalCommandAction_t action);
	void PadAnimation();
	void SavingToCloud();
	QSound *sound;
	QTimer *timer;
	QPropertyAnimation *animation;

public slots:
	void handleTimeout();

private slots:
	void on_startBtn_clicked();

	void on_acceptBtn_clicked();
	
	void on_rejectBtn_clicked();
};
