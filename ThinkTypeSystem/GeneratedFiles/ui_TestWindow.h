/********************************************************************************
** Form generated from reading UI file 'TestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestWindow
{
public:
    QAction *actionMenu;
    QAction *actionTraining;
    QAction *actionLetter_Test;
    QAction *actionTest_Records;
    QAction *actionMessage;
    QWidget *centralWidget;
    QLabel *titleLabel;
    QFrame *frame;
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
    QLabel *powerLabel;
    QProgressBar *powerBar;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *startBtn;
    QPushButton *typePad;
    QLineEdit *typeLineEdit;
    QLineEdit *sampleLineEdit;
    QLabel *testLabel;
    QLabel *typeLabel;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QSpinBox *numBox;
    QSpinBox *minPowerBox;
    QLineEdit *stateLineEdit;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuTrain;
    QMenu *menuTest;
    QMenu *menuMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QStringLiteral("TestWindow"));
        TestWindow->resize(800, 600);
        actionMenu = new QAction(TestWindow);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyIcon/Resources/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon);
        actionTraining = new QAction(TestWindow);
        actionTraining->setObjectName(QStringLiteral("actionTraining"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MyIcon/Resources/images/brain.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTraining->setIcon(icon1);
        actionLetter_Test = new QAction(TestWindow);
        actionLetter_Test->setObjectName(QStringLiteral("actionLetter_Test"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MyIcon/Resources/images/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLetter_Test->setIcon(icon2);
        actionTest_Records = new QAction(TestWindow);
        actionTest_Records->setObjectName(QStringLiteral("actionTest_Records"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MyIcon/Resources/images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTest_Records->setIcon(icon3);
        actionMessage = new QAction(TestWindow);
        actionMessage->setObjectName(QStringLiteral("actionMessage"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MyIcon/Resources/images/message.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMessage->setIcon(icon4);
        centralWidget = new QWidget(TestWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        titleLabel = new QLabel(centralWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(310, 20, 151, 21));
        QFont font;
        font.setPointSize(16);
        titleLabel->setFont(font);
        titleLabel->setLayoutDirection(Qt::LeftToRight);
        titleLabel->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 781, 431));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color:rgb(223, 223, 223);\n"
"border-radius: 8px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 30, 421, 331));
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

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(350, 380, 371, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        powerLabel = new QLabel(layoutWidget1);
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

        powerBar = new QProgressBar(layoutWidget1);
        powerBar->setObjectName(QStringLiteral("powerBar"));
        sizePolicy.setHeightForWidth(powerBar->sizePolicy().hasHeightForWidth());
        powerBar->setSizePolicy(sizePolicy);
        powerBar->setValue(0);

        horizontalLayout->addWidget(powerBar);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 110, 295, 241));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        startBtn = new QPushButton(layoutWidget2);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        sizePolicy.setHeightForWidth(startBtn->sizePolicy().hasHeightForWidth());
        startBtn->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(12);
        startBtn->setFont(font3);
        startBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgb(212, 214, 255);\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"font: 12pt}"));
        startBtn->setCheckable(true);
        startBtn->setAutoDefault(true);

        gridLayout_2->addWidget(startBtn, 0, 2, 1, 1);

        typePad = new QPushButton(layoutWidget2);
        typePad->setObjectName(QStringLiteral("typePad"));
        sizePolicy.setHeightForWidth(typePad->sizePolicy().hasHeightForWidth());
        typePad->setSizePolicy(sizePolicy);
        typePad->setMinimumSize(QSize(125, 106));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        typePad->setFont(font4);
        typePad->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: grey; \n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"font: 12pt}"));
        typePad->setCheckable(true);
        typePad->setAutoDefault(true);

        gridLayout_2->addWidget(typePad, 2, 2, 1, 1);

        typeLineEdit = new QLineEdit(layoutWidget2);
        typeLineEdit->setObjectName(QStringLiteral("typeLineEdit"));
        sizePolicy.setHeightForWidth(typeLineEdit->sizePolicy().hasHeightForWidth());
        typeLineEdit->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(24);
        typeLineEdit->setFont(font5);
        typeLineEdit->setStyleSheet(QLatin1String("QLineEdit{\n"
"color: blue;\n"
"}"));
        typeLineEdit->setMaxLength(1);
        typeLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeLineEdit, 2, 1, 1, 1);

        sampleLineEdit = new QLineEdit(layoutWidget2);
        sampleLineEdit->setObjectName(QStringLiteral("sampleLineEdit"));
        sizePolicy.setHeightForWidth(sampleLineEdit->sizePolicy().hasHeightForWidth());
        sampleLineEdit->setSizePolicy(sizePolicy);
        sampleLineEdit->setFont(font5);
        sampleLineEdit->setMaxLength(1);
        sampleLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(sampleLineEdit, 0, 1, 1, 1);

        testLabel = new QLabel(layoutWidget2);
        testLabel->setObjectName(QStringLiteral("testLabel"));
        testLabel->setFont(font3);

        gridLayout_2->addWidget(testLabel, 0, 0, 1, 1);

        typeLabel = new QLabel(layoutWidget2);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setFont(font3);

        gridLayout_2->addWidget(typeLabel, 2, 0, 1, 1);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(50, 20, 181, 71));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        numBox = new QSpinBox(layoutWidget3);
        numBox->setObjectName(QStringLiteral("numBox"));
        sizePolicy.setHeightForWidth(numBox->sizePolicy().hasHeightForWidth());
        numBox->setSizePolicy(sizePolicy);
        numBox->setFont(font3);
        numBox->setAlignment(Qt::AlignCenter);
        numBox->setMinimum(1);
        numBox->setMaximum(8);
        numBox->setSingleStep(1);
        numBox->setValue(8);

        verticalLayout->addWidget(numBox);

        minPowerBox = new QSpinBox(layoutWidget3);
        minPowerBox->setObjectName(QStringLiteral("minPowerBox"));
        sizePolicy.setHeightForWidth(minPowerBox->sizePolicy().hasHeightForWidth());
        minPowerBox->setSizePolicy(sizePolicy);
        minPowerBox->setFont(font3);
        minPowerBox->setMinimum(1);
        minPowerBox->setValue(10);

        verticalLayout->addWidget(minPowerBox);

        stateLineEdit = new QLineEdit(frame);
        stateLineEdit->setObjectName(QStringLiteral("stateLineEdit"));
        stateLineEdit->setGeometry(QRect(60, 380, 201, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        stateLineEdit->setFont(font6);
        stateLineEdit->setStyleSheet(QLatin1String("color: rgb(85, 85, 255);\n"
"border-color: rgb(223, 223, 223);\n"
"background-color: rgb(223, 223, 223);\n"
"gridline-color: rgb(221, 221, 221);\n"
"\n"
""));
        stateLineEdit->setReadOnly(true);
        TestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestWindow);
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
        TestWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestWindow->setStatusBar(statusBar);

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

        retranslateUi(TestWindow);

        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestWindow)
    {
        TestWindow->setWindowTitle(QApplication::translate("TestWindow", "Think-Type System", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("TestWindow", "Menu", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("TestWindow", "Go back to Menu", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTraining->setText(QApplication::translate("TestWindow", "Training", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTraining->setToolTip(QApplication::translate("TestWindow", "Training Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLetter_Test->setText(QApplication::translate("TestWindow", "Letter Test", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLetter_Test->setToolTip(QApplication::translate("TestWindow", "Test Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTest_Records->setText(QApplication::translate("TestWindow", "Test Records", Q_NULLPTR));
        actionMessage->setText(QApplication::translate("TestWindow", "Message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMessage->setToolTip(QApplication::translate("TestWindow", "Message Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        titleLabel->setText(QApplication::translate("TestWindow", "Letter Test", Q_NULLPTR));
        pushButton_1->setText(QString());
        pushButton_2->setText(QApplication::translate("TestWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TestWindow", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("TestWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("TestWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("TestWindow", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("TestWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("TestWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("TestWindow", "9", Q_NULLPTR));
        powerLabel->setText(QApplication::translate("TestWindow", "Action Power:", Q_NULLPTR));
        startBtn->setText(QApplication::translate("TestWindow", "Start Test", Q_NULLPTR));
        typePad->setText(QApplication::translate("TestWindow", "Stop", Q_NULLPTR));
        typeLineEdit->setText(QString());
        sampleLineEdit->setText(QApplication::translate("TestWindow", "A", Q_NULLPTR));
        sampleLineEdit->setPlaceholderText(QApplication::translate("TestWindow", "A", Q_NULLPTR));
        testLabel->setText(QApplication::translate("TestWindow", "Letter:", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("TestWindow", "Type:  ", Q_NULLPTR));
        numBox->setPrefix(QApplication::translate("TestWindow", "# Of Pads:   ", Q_NULLPTR));
        minPowerBox->setPrefix(QApplication::translate("TestWindow", "Min Active Power: ", Q_NULLPTR));
        stateLineEdit->setText(QApplication::translate("TestWindow", "Reading Your Mind......", Q_NULLPTR));
        menuHome->setTitle(QApplication::translate("TestWindow", "Home", Q_NULLPTR));
        menuTrain->setTitle(QApplication::translate("TestWindow", "Train", Q_NULLPTR));
        menuTest->setTitle(QApplication::translate("TestWindow", "Test", Q_NULLPTR));
        menuMsg->setTitle(QApplication::translate("TestWindow", "Msg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
