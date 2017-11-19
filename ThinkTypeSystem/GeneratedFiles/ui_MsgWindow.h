/********************************************************************************
** Form generated from reading UI file 'MsgWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSGWINDOW_H
#define UI_MSGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MsgWindow
{
public:
    QAction *actionMenu;
    QAction *actionTraining;
    QAction *actionLetter_Test;
    QAction *actionTest_Records;
    QAction *actionMessage;
    QAction *actionHelp;
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *powerLabel;
    QProgressBar *powerBar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *msgTextEdit;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLineEdit *inputLineEdit;
    QPushButton *sendBtn;
    QPushButton *cycleBtn;
    QLineEdit *predictWordLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpinBox *numBox;
    QSpinBox *minPowerBox;
    QPushButton *setParaBtn;
    QLabel *titleLabel;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuTrain;
    QMenu *menuTest;
    QMenu *menuMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MsgWindow)
    {
        if (MsgWindow->objectName().isEmpty())
            MsgWindow->setObjectName(QStringLiteral("MsgWindow"));
        MsgWindow->resize(800, 600);
        actionMenu = new QAction(MsgWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyIcon/Resources/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon);
        actionTraining = new QAction(MsgWindow);
        actionTraining->setObjectName(QStringLiteral("actionTraining"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MyIcon/Resources/images/brain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraining->setIcon(icon1);
        actionLetter_Test = new QAction(MsgWindow);
        actionLetter_Test->setObjectName(QStringLiteral("actionLetter_Test"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MyIcon/Resources/images/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLetter_Test->setIcon(icon2);
        actionTest_Records = new QAction(MsgWindow);
        actionTest_Records->setObjectName(QStringLiteral("actionTest_Records"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MyIcon/Resources/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTest_Records->setIcon(icon3);
        actionMessage = new QAction(MsgWindow);
        actionMessage->setObjectName(QStringLiteral("actionMessage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MyIcon/Resources/images/message.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessage->setIcon(icon4);
        actionHelp = new QAction(MsgWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MyIcon/Resources/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon5);
        centralWidget = new QWidget(MsgWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 781, 451));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:rgb(223, 223, 223);\n"
"border-radius: 8px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 30, 391, 331));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
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

        gridLayout_2->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(228, 231, 2); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(248, 153, 20); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

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

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(0, 193, 145); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(60, 112, 255); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(193, 35, 255); \n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_7, 2, 0, 1, 1);

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

        gridLayout_2->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(158, 255, 55);\n"
"border-radius: 10px;\n"
"border: 3px solid black;\n"
"font: 20pt}"));

        gridLayout_2->addWidget(pushButton_9, 2, 2, 1, 1);

        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(380, 370, 371, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        powerLabel = new QLabel(layoutWidget_2);
        powerLabel->setObjectName(QStringLiteral("powerLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(powerLabel->sizePolicy().hasHeightForWidth());
        powerLabel->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        powerLabel->setFont(font2);

        horizontalLayout->addWidget(powerLabel);

        powerBar = new QProgressBar(layoutWidget_2);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        sizePolicy.setHeightForWidth(powerBar->sizePolicy().hasHeightForWidth());
        powerBar->setSizePolicy(sizePolicy);
        powerBar->setValue(0);

        horizontalLayout->addWidget(powerBar);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 341, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 341, 271));
        msgTextEdit = new QTextEdit(scrollAreaWidgetContents);
        msgTextEdit->setObjectName(QStringLiteral("msgTextEdit"));
        msgTextEdit->setGeometry(QRect(0, 0, 341, 271));
        QFont font3;
        font3.setPointSize(14);
        msgTextEdit->setFont(font3);
        msgTextEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"background-color:rgb(245, 245, 245)\n"
"}"));
        msgTextEdit->setReadOnly(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 360, 341, 83));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        inputLineEdit = new QLineEdit(layoutWidget1);
        inputLineEdit->setObjectName(QStringLiteral("inputLineEdit"));
        sizePolicy.setHeightForWidth(inputLineEdit->sizePolicy().hasHeightForWidth());
        inputLineEdit->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(12);
        inputLineEdit->setFont(font4);
        inputLineEdit->setMaxLength(10);
        inputLineEdit->setReadOnly(false);

        gridLayout_3->addWidget(inputLineEdit, 2, 0, 1, 1);

        sendBtn = new QPushButton(layoutWidget1);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy2);
        sendBtn->setFont(font4);

        gridLayout_3->addWidget(sendBtn, 2, 2, 1, 1);

        cycleBtn = new QPushButton(layoutWidget1);
        cycleBtn->setObjectName(QStringLiteral("cycleBtn"));
        sizePolicy2.setHeightForWidth(cycleBtn->sizePolicy().hasHeightForWidth());
        cycleBtn->setSizePolicy(sizePolicy2);
        cycleBtn->setFont(font4);

        gridLayout_3->addWidget(cycleBtn, 1, 2, 1, 1);

        predictWordLineEdit = new QLineEdit(layoutWidget1);
        predictWordLineEdit->setObjectName(QStringLiteral("predictWordLineEdit"));
        sizePolicy.setHeightForWidth(predictWordLineEdit->sizePolicy().hasHeightForWidth());
        predictWordLineEdit->setSizePolicy(sizePolicy);
        predictWordLineEdit->setFont(font4);
        predictWordLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(predictWordLineEdit, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 10, 261, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        numBox = new QSpinBox(layoutWidget2);
        numBox->setObjectName(QStringLiteral("numBox"));
        sizePolicy.setHeightForWidth(numBox->sizePolicy().hasHeightForWidth());
        numBox->setSizePolicy(sizePolicy);
        numBox->setFont(font4);
        numBox->setAlignment(Qt::AlignCenter);
        numBox->setReadOnly(true);
        numBox->setMinimum(8);
        numBox->setMaximum(8);
        numBox->setSingleStep(1);
        numBox->setValue(8);

        verticalLayout->addWidget(numBox);

        minPowerBox = new QSpinBox(layoutWidget2);
        minPowerBox->setObjectName(QStringLiteral("minPowerBox"));
        sizePolicy.setHeightForWidth(minPowerBox->sizePolicy().hasHeightForWidth());
        minPowerBox->setSizePolicy(sizePolicy);
        minPowerBox->setFont(font4);
        minPowerBox->setMinimum(1);
        minPowerBox->setValue(80);

        verticalLayout->addWidget(minPowerBox);


        horizontalLayout_2->addLayout(verticalLayout);

        setParaBtn = new QPushButton(layoutWidget2);
        setParaBtn->setObjectName(QStringLiteral("setParaBtn"));
        sizePolicy2.setHeightForWidth(setParaBtn->sizePolicy().hasHeightForWidth());
        setParaBtn->setSizePolicy(sizePolicy2);
        setParaBtn->setFont(font);

        horizontalLayout_2->addWidget(setParaBtn);

        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(310, 10, 151, 31));
        titleLabel->setFont(font);
        titleLabel->setLayoutDirection(Qt::LeftToRight);
        titleLabel->setAlignment(Qt::AlignCenter);
        MsgWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MsgWindow);
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
        MsgWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MsgWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MsgWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MsgWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MsgWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuTrain->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menuMsg->menuAction());
        menuHome->addAction(actionMenu);
        menuTrain->addAction(actionTraining);
        menuTest->addAction(actionLetter_Test);
        menuTest->addAction(actionTest_Records);
        menuMsg->addAction(actionMessage);
        mainToolBar->addAction(actionMenu);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTraining);
        mainToolBar->addAction(actionLetter_Test);
        mainToolBar->addAction(actionMessage);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionHelp);

        retranslateUi(MsgWindow);

        QMetaObject::connectSlotsByName(MsgWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MsgWindow)
    {
        MsgWindow->setWindowTitle(QApplication::translate("MsgWindow", "Think-Type System", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("MsgWindow", "Menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("MsgWindow", "Go back to Menu", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTraining->setText(QApplication::translate("MsgWindow", "Training", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTraining->setToolTip(QApplication::translate("MsgWindow", "Training Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLetter_Test->setText(QApplication::translate("MsgWindow", "Letter Test", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLetter_Test->setToolTip(QApplication::translate("MsgWindow", "Test Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTest_Records->setText(QApplication::translate("MsgWindow", "Test Records", Q_NULLPTR));
        actionMessage->setText(QApplication::translate("MsgWindow", "Message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMessage->setToolTip(QApplication::translate("MsgWindow", "Message Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionHelp->setText(QApplication::translate("MsgWindow", "Help", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("MsgWindow", "Instruction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_1->setText(QString());
        pushButton_2->setText(QApplication::translate("MsgWindow", "2\n"
"A B C", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MsgWindow", "3\n"
"D E F", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MsgWindow", "4\n"
"G H I", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MsgWindow", "5\n"
"J K L", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MsgWindow", "6\n"
"M N O", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MsgWindow", "7\n"
"P Q R S", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MsgWindow", "8\n"
"T U V", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MsgWindow", "9\n"
"W X Y Z", Q_NULLPTR));
        powerLabel->setText(QApplication::translate("MsgWindow", "Action Power:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MsgWindow", "Send", Q_NULLPTR));
        cycleBtn->setText(QApplication::translate("MsgWindow", "Cycle", Q_NULLPTR));
        numBox->setPrefix(QApplication::translate("MsgWindow", "# Of Pads:   ", Q_NULLPTR));
        minPowerBox->setPrefix(QApplication::translate("MsgWindow", "Min Active Power: ", Q_NULLPTR));
        setParaBtn->setText(QApplication::translate("MsgWindow", "Set", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("MsgWindow", "Word Message", Q_NULLPTR));
        menuHome->setTitle(QApplication::translate("MsgWindow", "Home", Q_NULLPTR));
        menuTrain->setTitle(QApplication::translate("MsgWindow", "Train", Q_NULLPTR));
        menuTest->setTitle(QApplication::translate("MsgWindow", "Test", Q_NULLPTR));
        menuMsg->setTitle(QApplication::translate("MsgWindow", "Msg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MsgWindow: public Ui_MsgWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSGWINDOW_H
