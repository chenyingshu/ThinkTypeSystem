/********************************************************************************
** Form generated from reading UI file 'TrainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINWINDOW_H
#define UI_TRAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainWindow
{
public:
    QAction *actionMenu;
    QAction *actionTraining;
    QAction *actionLetter_Test;
    QAction *actionTest_Records;
    QAction *actionMessage;
    QAction *actionTrained_Record;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QPushButton *startTrainBtn;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuTrain;
    QMenu *menuTest;
    QMenu *menuMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TrainWindow)
    {
        if (TrainWindow->objectName().isEmpty())
            TrainWindow->setObjectName(QStringLiteral("TrainWindow"));
        TrainWindow->resize(800, 600);
        actionMenu = new QAction(TrainWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyIcon/Resources/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon);
        actionTraining = new QAction(TrainWindow);
        actionTraining->setObjectName(QStringLiteral("actionTraining"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MyIcon/Resources/images/brain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraining->setIcon(icon1);
        actionLetter_Test = new QAction(TrainWindow);
        actionLetter_Test->setObjectName(QStringLiteral("actionLetter_Test"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MyIcon/Resources/images/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLetter_Test->setIcon(icon2);
        actionTest_Records = new QAction(TrainWindow);
        actionTest_Records->setObjectName(QStringLiteral("actionTest_Records"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MyIcon/Resources/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTest_Records->setIcon(icon3);
        actionMessage = new QAction(TrainWindow);
        actionMessage->setObjectName(QStringLiteral("actionMessage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MyIcon/Resources/images/message.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessage->setIcon(icon4);
        actionTrained_Record = new QAction(TrainWindow);
        actionTrained_Record->setObjectName(QStringLiteral("actionTrained_Record"));
        actionTrained_Record->setIcon(icon3);
        centralWidget = new QWidget(TrainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 140, 391, 331));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: grey; \n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"font: 16pt}"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(228, 231, 2); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(248, 153, 20); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgb(255, 63, 25); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(0, 193, 145); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(60, 112, 255); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(193, 35, 255); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 29, 127);\n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(158, 255, 55);\n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 50, 574, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        radioButton_1 = new QRadioButton(layoutWidget1);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        sizePolicy.setHeightForWidth(radioButton_1->sizePolicy().hasHeightForWidth());
        radioButton_1->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(12);
        radioButton_1->setFont(font3);
        radioButton_1->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_1->setCheckable(true);

        horizontalLayout->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy);
        radioButton_2->setFont(font3);
        radioButton_2->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_2->setCheckable(false);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        sizePolicy.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy);
        radioButton_3->setFont(font3);
        radioButton_3->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_3->setCheckable(false);

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        sizePolicy.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy);
        radioButton_4->setFont(font3);
        radioButton_4->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_4->setCheckable(false);

        horizontalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget1);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        sizePolicy.setHeightForWidth(radioButton_5->sizePolicy().hasHeightForWidth());
        radioButton_5->setSizePolicy(sizePolicy);
        radioButton_5->setFont(font3);
        radioButton_5->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_5->setCheckable(false);

        horizontalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget1);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        sizePolicy.setHeightForWidth(radioButton_6->sizePolicy().hasHeightForWidth());
        radioButton_6->setSizePolicy(sizePolicy);
        radioButton_6->setFont(font3);
        radioButton_6->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_6->setCheckable(false);

        horizontalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(layoutWidget1);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        sizePolicy.setHeightForWidth(radioButton_7->sizePolicy().hasHeightForWidth());
        radioButton_7->setSizePolicy(sizePolicy);
        radioButton_7->setFont(font3);
        radioButton_7->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_7->setCheckable(false);

        horizontalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget1);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        sizePolicy.setHeightForWidth(radioButton_8->sizePolicy().hasHeightForWidth());
        radioButton_8->setSizePolicy(sizePolicy);
        radioButton_8->setFont(font3);
        radioButton_8->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_8->setCheckable(false);

        horizontalLayout->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(layoutWidget1);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        sizePolicy.setHeightForWidth(radioButton_9->sizePolicy().hasHeightForWidth());
        radioButton_9->setSizePolicy(sizePolicy);
        radioButton_9->setFont(font3);
        radioButton_9->setStyleSheet(QStringLiteral("color: rgb(128, 128, 128);"));
        radioButton_9->setCheckable(false);

        horizontalLayout->addWidget(radioButton_9);

        startTrainBtn = new QPushButton(layoutWidget1);
        startTrainBtn->setObjectName(QStringLiteral("startTrainBtn"));
        sizePolicy.setHeightForWidth(startTrainBtn->sizePolicy().hasHeightForWidth());
        startTrainBtn->setSizePolicy(sizePolicy);
        startTrainBtn->setFont(font3);

        horizontalLayout->addWidget(startTrainBtn);

        TrainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TrainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QStringLiteral("menuHome"));
        menuTrain = new QMenu(menuBar);
        menuTrain->setObjectName(QStringLiteral("menuTrain"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        menuMsg = new QMenu(menuBar);
        menuMsg->setObjectName(QStringLiteral("menuMsg"));
        TrainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TrainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TrainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TrainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TrainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuTrain->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menuMsg->menuAction());
        menuHome->addAction(actionMenu);
        menuTrain->addAction(actionTraining);
        menuTrain->addAction(actionTrained_Record);
        menuTest->addAction(actionLetter_Test);
        menuTest->addAction(actionTest_Records);
        menuMsg->addAction(actionMessage);
        mainToolBar->addAction(actionMenu);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTraining);
        mainToolBar->addAction(actionLetter_Test);
        mainToolBar->addAction(actionMessage);

        retranslateUi(TrainWindow);

        QMetaObject::connectSlotsByName(TrainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TrainWindow)
    {
        TrainWindow->setWindowTitle(QApplication::translate("TrainWindow", "Think-Type System", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("TrainWindow", "Menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("TrainWindow", "Go back to Menu", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTraining->setText(QApplication::translate("TrainWindow", "Training", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTraining->setToolTip(QApplication::translate("TrainWindow", "Training Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLetter_Test->setText(QApplication::translate("TrainWindow", "Letter Test", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLetter_Test->setToolTip(QApplication::translate("TrainWindow", "Test Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTest_Records->setText(QApplication::translate("TrainWindow", "Test Records", Q_NULLPTR));
        actionMessage->setText(QApplication::translate("TrainWindow", "Message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMessage->setToolTip(QApplication::translate("TrainWindow", "Message Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTrained_Record->setText(QApplication::translate("TrainWindow", "Trained Record", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("TrainWindow", "NEUTRAL", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TrainWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TrainWindow", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("TrainWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("TrainWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("TrainWindow", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("TrainWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("TrainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("TrainWindow", "9", Q_NULLPTR));
        label->setText(QApplication::translate("TrainWindow", "Pad#:", Q_NULLPTR));
        radioButton_1->setText(QApplication::translate("TrainWindow", "Neutral", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("TrainWindow", "2", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("TrainWindow", "3", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("TrainWindow", "4", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("TrainWindow", "5", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("TrainWindow", "6", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("TrainWindow", "7", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("TrainWindow", "8", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("TrainWindow", "9", Q_NULLPTR));
        startTrainBtn->setText(QApplication::translate("TrainWindow", "Start Training", Q_NULLPTR));
        menuHome->setTitle(QApplication::translate("TrainWindow", "Home", Q_NULLPTR));
        menuTrain->setTitle(QApplication::translate("TrainWindow", "Train", Q_NULLPTR));
        menuTest->setTitle(QApplication::translate("TrainWindow", "Test", Q_NULLPTR));
        menuMsg->setTitle(QApplication::translate("TrainWindow", "Msg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrainWindow: public Ui_TrainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINWINDOW_H
