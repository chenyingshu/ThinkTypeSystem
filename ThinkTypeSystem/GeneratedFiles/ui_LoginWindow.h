/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindowClass
{
public:
    QAction *actionMenu;
    QWidget *centralWidget;
    QPushButton *StartBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *TitleLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLineEdit *pwdLineEdit;
    QLabel *IdLabel;
    QLabel *pwdLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *UserIdLineEdit;
    QLabel *nameLabel;
    QCheckBox *cloudCheckBox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWindowClass)
    {
        if (LoginWindowClass->objectName().isEmpty())
            LoginWindowClass->setObjectName(QStringLiteral("LoginWindowClass"));
        LoginWindowClass->resize(800, 600);
        actionMenu = new QAction(LoginWindowClass);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));
        centralWidget = new QWidget(LoginWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StartBtn = new QPushButton(centralWidget);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));
        StartBtn->setGeometry(QRect(220, 390, 339, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StartBtn->sizePolicy().hasHeightForWidth());
        StartBtn->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        StartBtn->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 120, 369, 70));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleLabel = new QLabel(layoutWidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        TitleLabel->setFont(font1);
        TitleLabel->setAlignment(Qt::AlignCenter);
        TitleLabel->setWordWrap(true);

        verticalLayout->addWidget(TitleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 230, 412, 141));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pwdLineEdit = new QLineEdit(layoutWidget1);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        sizePolicy.setHeightForWidth(pwdLineEdit->sizePolicy().hasHeightForWidth());
        pwdLineEdit->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        pwdLineEdit->setFont(font2);
        pwdLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        pwdLineEdit->setReadOnly(true);

        gridLayout->addWidget(pwdLineEdit, 1, 1, 1, 1);

        IdLabel = new QLabel(layoutWidget1);
        IdLabel->setObjectName(QStringLiteral("IdLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(IdLabel->sizePolicy().hasHeightForWidth());
        IdLabel->setSizePolicy(sizePolicy1);
        IdLabel->setFont(font);

        gridLayout->addWidget(IdLabel, 4, 0, 1, 1);

        pwdLabel = new QLabel(layoutWidget1);
        pwdLabel->setObjectName(QStringLiteral("pwdLabel"));
        sizePolicy.setHeightForWidth(pwdLabel->sizePolicy().hasHeightForWidth());
        pwdLabel->setSizePolicy(sizePolicy);
        pwdLabel->setFont(font);

        gridLayout->addWidget(pwdLabel, 1, 0, 1, 1);

        nameLineEdit = new QLineEdit(layoutWidget1);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        sizePolicy.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy);
        nameLineEdit->setFont(font2);
        nameLineEdit->setReadOnly(true);

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        UserIdLineEdit = new QLineEdit(layoutWidget1);
        UserIdLineEdit->setObjectName(QStringLiteral("UserIdLineEdit"));
        sizePolicy.setHeightForWidth(UserIdLineEdit->sizePolicy().hasHeightForWidth());
        UserIdLineEdit->setSizePolicy(sizePolicy);
        UserIdLineEdit->setFont(font2);

        gridLayout->addWidget(UserIdLineEdit, 4, 1, 1, 1);

        nameLabel = new QLabel(layoutWidget1);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setFont(font);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        cloudCheckBox = new QCheckBox(layoutWidget1);
        cloudCheckBox->setObjectName(QStringLiteral("cloudCheckBox"));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Black"));
        font3.setPointSize(12);
        cloudCheckBox->setFont(font3);
        cloudCheckBox->setLayoutDirection(Qt::LeftToRight);
        cloudCheckBox->setAutoFillBackground(false);

        gridLayout->addWidget(cloudCheckBox, 2, 1, 1, 1);

        LoginWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LoginWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginWindowClass->setStatusBar(statusBar);

        retranslateUi(LoginWindowClass);

        QMetaObject::connectSlotsByName(LoginWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindowClass)
    {
        LoginWindowClass->setWindowTitle(QApplication::translate("LoginWindowClass", "Think-Type System", Q_NULLPTR));
        actionMenu->setText(QApplication::translate("LoginWindowClass", "Menu", Q_NULLPTR));
        StartBtn->setText(QApplication::translate("LoginWindowClass", "Start", Q_NULLPTR));
        TitleLabel->setText(QApplication::translate("LoginWindowClass", "Think-Type System", Q_NULLPTR));
        pwdLineEdit->setText(QApplication::translate("LoginWindowClass", "**********", Q_NULLPTR));
        pwdLineEdit->setPlaceholderText(QApplication::translate("LoginWindowClass", "Yingshu19931018", Q_NULLPTR));
        IdLabel->setText(QApplication::translate("LoginWindowClass", "User Profile ID:", Q_NULLPTR));
        pwdLabel->setText(QApplication::translate("LoginWindowClass", "Cloud Password:", Q_NULLPTR));
        nameLineEdit->setPlaceholderText(QApplication::translate("LoginWindowClass", "chenyingshu", Q_NULLPTR));
        UserIdLineEdit->setPlaceholderText(QApplication::translate("LoginWindowClass", "0", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("LoginWindowClass", "Cloud Username:", Q_NULLPTR));
        cloudCheckBox->setText(QApplication::translate("LoginWindowClass", "Connect to Emotiv Cloud Profiles", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindowClass: public Ui_LoginWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
