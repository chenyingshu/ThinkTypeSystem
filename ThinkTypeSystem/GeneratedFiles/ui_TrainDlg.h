/********************************************************************************
** Form generated from reading UI file 'TrainDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINDLG_H
#define UI_TRAINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainDlg
{
public:
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
    QProgressBar *progressBar;
    QPushButton *startBtn;
    QFrame *frame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *animCheckBox;
    QCheckBox *colorCheckBox;
    QCheckBox *soundCheckBox;
    QLabel *infoLabel;

    void setupUi(QDialog *TrainDlg)
    {
        if (TrainDlg->objectName().isEmpty())
            TrainDlg->setObjectName(QStringLiteral("TrainDlg"));
        TrainDlg->resize(800, 600);
        layoutWidget = new QWidget(TrainDlg);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 80, 391, 331));
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

        progressBar = new QProgressBar(TrainDlg);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(290, 450, 461, 31));
        QFont font2;
        font2.setPointSize(12);
        progressBar->setFont(font2);
        progressBar->setMaximum(10000);
        progressBar->setValue(0);
        startBtn = new QPushButton(TrainDlg);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(450, 450, 91, 41));
        startBtn->setFont(font2);
        frame = new QFrame(TrainDlg);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 200, 121, 161));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"background-color: white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(7, 3, 111, 151));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        animCheckBox = new QCheckBox(layoutWidget1);
        animCheckBox->setObjectName(QStringLiteral("animCheckBox"));
        sizePolicy.setHeightForWidth(animCheckBox->sizePolicy().hasHeightForWidth());
        animCheckBox->setSizePolicy(sizePolicy);
        animCheckBox->setFont(font2);

        verticalLayout->addWidget(animCheckBox);

        colorCheckBox = new QCheckBox(layoutWidget1);
        colorCheckBox->setObjectName(QStringLiteral("colorCheckBox"));
        sizePolicy.setHeightForWidth(colorCheckBox->sizePolicy().hasHeightForWidth());
        colorCheckBox->setSizePolicy(sizePolicy);
        colorCheckBox->setFont(font2);
        colorCheckBox->setCheckable(true);
        colorCheckBox->setChecked(true);

        verticalLayout->addWidget(colorCheckBox);

        soundCheckBox = new QCheckBox(layoutWidget1);
        soundCheckBox->setObjectName(QStringLiteral("soundCheckBox"));
        sizePolicy.setHeightForWidth(soundCheckBox->sizePolicy().hasHeightForWidth());
        soundCheckBox->setSizePolicy(sizePolicy);
        soundCheckBox->setFont(font2);

        verticalLayout->addWidget(soundCheckBox);

        infoLabel = new QLabel(TrainDlg);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setGeometry(QRect(30, 140, 211, 51));
        infoLabel->setFont(font);
        infoLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(TrainDlg);

        QMetaObject::connectSlotsByName(TrainDlg);
    } // setupUi

    void retranslateUi(QDialog *TrainDlg)
    {
        TrainDlg->setWindowTitle(QApplication::translate("TrainDlg", "Think-Type System", Q_NULLPTR));
        pushButton_1->setText(QString());
        pushButton_2->setText(QApplication::translate("TrainDlg", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TrainDlg", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("TrainDlg", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("TrainDlg", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("TrainDlg", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("TrainDlg", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("TrainDlg", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("TrainDlg", "9", Q_NULLPTR));
        startBtn->setText(QApplication::translate("TrainDlg", "Start", Q_NULLPTR));
        label->setText(QApplication::translate("TrainDlg", "Factors:", Q_NULLPTR));
        animCheckBox->setText(QApplication::translate("TrainDlg", "Animation", Q_NULLPTR));
        colorCheckBox->setText(QApplication::translate("TrainDlg", "Color", Q_NULLPTR));
        soundCheckBox->setText(QApplication::translate("TrainDlg", "Sound", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("TrainDlg", "Training Pad #Neutral", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrainDlg: public Ui_TrainDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINDLG_H
