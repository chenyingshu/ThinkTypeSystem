#pragma once

#include <QMainWindow>
#include "ui_TrainWindow.h"
#include "TrainDlg.h"
#include <QLabel>
#include <QTimer>

extern int trainPad; //pad number to be trained
extern unsigned int userID; //Emotiv user ID

class TrainWindow : public QMainWindow
{
	Q_OBJECT

public:
	TrainWindow(QWidget *parent = Q_NULLPTR);
	~TrainWindow();

private:
	Ui::TrainWindow ui;
	QLabel *statusLabel;
	TrainDlg * trainDlg;
	QTimer *timer;

	int checkRecords();
	int LocalSavingLoading(int headsetID, bool save);
	void SavingLoadingFunction(int userCloudID, bool save);
	void showTrainedActions(int userID);
	void setActiveActions(int userID);
	

public slots:
	void handleTimeout();

private slots:

	void on_startTrainBtn_clicked();
	
	//void on_refreshBtn_clicked();

	void on_actionMenu_triggered();

	void on_actionTraining_triggered();

	void on_actionLetter_Test_triggered();

	void on_actionMessage_triggered();

};
