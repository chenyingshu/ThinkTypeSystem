#pragma once

#include <QMainWindow>
#include "ui_MenuWindow.h"
#include <QLabel>

class MenuWindow : public QMainWindow
{
	Q_OBJECT

public:
	MenuWindow(QWidget *parent = Q_NULLPTR);
	~MenuWindow();

private:
	Ui::MenuWindow ui;
	QLabel *statusLabel;

private slots:
	void on_trainBtn_clicked();

	void on_testBtn_clicked();

	void on_msgBtn_clicked();

	void on_logoutBtn_clicked();

	void openMainWin();

	void on_actionMenu_triggered();

	void on_actionTraining_triggered();

	void on_actionLetter_Test_triggered();

	void on_actionMessage_triggered();
};
