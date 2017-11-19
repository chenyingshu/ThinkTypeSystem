/********************************************************************************
** Form generated from reading UI file 'MenuWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
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
    QVBoxLayout *verticalLayout;
    QPushButton *trainBtn;
    QPushButton *testBtn;
    QPushButton *msgBtn;
    QPushButton *logoutBtn;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuTRain;
    QMenu *menuTest;
    QMenu *menuMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(800, 600);
        actionMenu = new QAction(MenuWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyIcon/Resources/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon);
        actionTraining = new QAction(MenuWindow);
        actionTraining->setObjectName(QStringLiteral("actionTraining"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MyIcon/Resources/images/brain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraining->setIcon(icon1);
        actionLetter_Test = new QAction(MenuWindow);
        actionLetter_Test->setObjectName(QStringLiteral("actionLetter_Test"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MyIcon/Resources/images/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLetter_Test->setIcon(icon2);
        actionTest_Records = new QAction(MenuWindow);
        actionTest_Records->setObjectName(QStringLiteral("actionTest_Records"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MyIcon/Resources/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTest_Records->setIcon(icon3);
        actionMessage = new QAction(MenuWindow);
        actionMessage->setObjectName(QStringLiteral("actionMessage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MyIcon/Resources/images/message.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessage->setIcon(icon4);
        actionTrained_Record = new QAction(MenuWindow);
        actionTrained_Record->setObjectName(QStringLiteral("actionTrained_Record"));
        actionTrained_Record->setIcon(icon3);
        centralWidget = new QWidget(MenuWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 120, 331, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        trainBtn = new QPushButton(layoutWidget);
        trainBtn->setObjectName(QStringLiteral("trainBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trainBtn->sizePolicy().hasHeightForWidth());
        trainBtn->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        trainBtn->setFont(font);
        trainBtn->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(trainBtn);

        testBtn = new QPushButton(layoutWidget);
        testBtn->setObjectName(QStringLiteral("testBtn"));
        sizePolicy.setHeightForWidth(testBtn->sizePolicy().hasHeightForWidth());
        testBtn->setSizePolicy(sizePolicy);
        testBtn->setFont(font);

        verticalLayout->addWidget(testBtn);

        msgBtn = new QPushButton(layoutWidget);
        msgBtn->setObjectName(QStringLiteral("msgBtn"));
        sizePolicy.setHeightForWidth(msgBtn->sizePolicy().hasHeightForWidth());
        msgBtn->setSizePolicy(sizePolicy);
        msgBtn->setFont(font);

        verticalLayout->addWidget(msgBtn);

        logoutBtn = new QPushButton(layoutWidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        sizePolicy.setHeightForWidth(logoutBtn->sizePolicy().hasHeightForWidth());
        logoutBtn->setSizePolicy(sizePolicy);
        logoutBtn->setFont(font);
        logoutBtn->setCheckable(false);

        verticalLayout->addWidget(logoutBtn);

        MenuWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MenuWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QStringLiteral("menuHome"));
        menuTRain = new QMenu(menuBar);
        menuTRain->setObjectName(QStringLiteral("menuTRain"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        menuMsg = new QMenu(menuBar);
        menuMsg->setObjectName(QStringLiteral("menuMsg"));
        MenuWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MenuWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MenuWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MenuWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MenuWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuTRain->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menuMsg->menuAction());
        menuHome->addAction(actionMenu);
        menuTRain->addAction(actionTraining);
        menuTRain->addAction(actionTrained_Record);
        menuTest->addAction(actionLetter_Test);
        menuTest->addAction(actionTest_Records);
        menuMsg->addAction(actionMessage);
        mainToolBar->addAction(actionMenu);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTraining);
        mainToolBar->addAction(actionLetter_Test);
        mainToolBar->addAction(actionMessage);

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Think-Type System", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("MenuWindow", "Menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("MenuWindow", "Go back to Menu", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTraining->setText(QApplication::translate("MenuWindow", "Training", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTraining->setToolTip(QApplication::translate("MenuWindow", "Training Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLetter_Test->setText(QApplication::translate("MenuWindow", "Letter Test", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLetter_Test->setToolTip(QApplication::translate("MenuWindow", "Test Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTest_Records->setText(QApplication::translate("MenuWindow", "Test Records", Q_NULLPTR));
        actionMessage->setText(QApplication::translate("MenuWindow", "Message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMessage->setToolTip(QApplication::translate("MenuWindow", "Message Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTrained_Record->setText(QApplication::translate("MenuWindow", "Trained Records", Q_NULLPTR));
        trainBtn->setText(QApplication::translate("MenuWindow", "Train", Q_NULLPTR));
        testBtn->setText(QApplication::translate("MenuWindow", "Test", Q_NULLPTR));
        msgBtn->setText(QApplication::translate("MenuWindow", "Message", Q_NULLPTR));
        logoutBtn->setText(QApplication::translate("MenuWindow", "Log out", Q_NULLPTR));
        menuHome->setTitle(QApplication::translate("MenuWindow", "Home", Q_NULLPTR));
        menuTRain->setTitle(QApplication::translate("MenuWindow", "Train", Q_NULLPTR));
        menuTest->setTitle(QApplication::translate("MenuWindow", "Test", Q_NULLPTR));
        menuMsg->setTitle(QApplication::translate("MenuWindow", "Msg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
