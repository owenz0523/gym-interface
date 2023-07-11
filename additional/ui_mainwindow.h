/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *logInBox;
    QComboBox *sideChoiceComboBox;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *sideChoiceLabel;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QPushButton *createPushButton;
    QPushButton *loginPushButton;
    QPushButton *restartButton;
    QPushButton *quitButton;
    QLabel *currentDateTime;
    QLabel *logoLabel;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuLog_In;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 593);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget  {background-color: rgb(245,255,250)}\n"
"#logInBox\n"
"{\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"QLabel { color: black; }\n"
"QLineEdit { border-radius: 3px}\n"
"\n"
"QPushButton\n"
"{\n"
"	color: black;\n"
"	font: 12pt \"Segoe UI\" bold;\n"
"	background-color: rgb(255,255,240);\n"
"	border-width: 2px;\n"
"    border-radius:3px;\n"
"}\n"
"\n"
"QPushButton:hover {background-color: rgb(255,222,173)}\n"
" "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        logInBox = new QGroupBox(centralwidget);
        logInBox->setObjectName(QString::fromUtf8("logInBox"));
        logInBox->setGeometry(QRect(210, 230, 331, 301));
        sideChoiceComboBox = new QComboBox(logInBox);
        sideChoiceComboBox->addItem(QString());
        sideChoiceComboBox->addItem(QString());
        sideChoiceComboBox->setObjectName(QString::fromUtf8("sideChoiceComboBox"));
        sideChoiceComboBox->setGeometry(QRect(120, 70, 181, 31));
        usernameLineEdit = new QLineEdit(logInBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(120, 120, 181, 31));
        usernameLineEdit->setMaxLength(20);
        passwordLineEdit = new QLineEdit(logInBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(120, 170, 181, 31));
        passwordLineEdit->setInputMask(QString::fromUtf8(""));
        passwordLineEdit->setMaxLength(20);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        sideChoiceLabel = new QLabel(logInBox);
        sideChoiceLabel->setObjectName(QString::fromUtf8("sideChoiceLabel"));
        sideChoiceLabel->setGeometry(QRect(20, 70, 81, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        sideChoiceLabel->setFont(font);
        usernameLabel = new QLabel(logInBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(20, 120, 91, 21));
        usernameLabel->setFont(font);
        passwordLabel = new QLabel(logInBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(20, 170, 81, 31));
        passwordLabel->setFont(font);
        createPushButton = new QPushButton(logInBox);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));
        createPushButton->setGeometry(QRect(20, 230, 141, 51));
        loginPushButton = new QPushButton(logInBox);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(170, 230, 131, 51));
        restartButton = new QPushButton(centralwidget);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(630, 10, 71, 71));
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(720, 10, 71, 71));
        currentDateTime = new QLabel(centralwidget);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));
        currentDateTime->setGeometry(QRect(10, -10, 249, 49));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(12);
        font1.setBold(true);
        currentDateTime->setFont(font1);
        logoLabel = new QLabel(centralwidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(270, 40, 271, 181));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 121, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 22));
        menuLog_In = new QMenu(menubar);
        menuLog_In->setObjectName(QString::fromUtf8("menuLog_In"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLog_In->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logInBox->setTitle(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        sideChoiceComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Member", nullptr));
        sideChoiceComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Employee", nullptr));

        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QString());
        passwordLineEdit->setPlaceholderText(QString());
        sideChoiceLabel->setText(QCoreApplication::translate("MainWindow", "Side", nullptr));
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        createPushButton->setText(QCoreApplication::translate("MainWindow", "Create Account", nullptr));
        loginPushButton->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        restartButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        currentDateTime->setText(QString());
        logoLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Thinnox Gym", nullptr));
        menuLog_In->setTitle(QCoreApplication::translate("MainWindow", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
