/********************************************************************************
** Form generated from reading UI file 'memdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMDIALOG_H
#define UI_MEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MemDialog
{
public:
    QLabel *welcomeLabel;
    QPushButton *restartButton;
    QPushButton *quitButton;
    QLabel *logoLabel;
    QLabel *currentDateTime;
    QGroupBox *membershipBox;
    QLabel *membershipLabel;
    QComboBox *membershipComboBox;
    QPushButton *membershipPushButton;
    QGroupBox *programBox;
    QComboBox *programComboBox;
    QLabel *programLabel;
    QPushButton *planPushButton;
    QGroupBox *profileBox;
    QPushButton *workoutPushButton;
    QLabel *strengthLabel;
    QLabel *flexibilityLabel;
    QLabel *enduranceLabel;
    QLabel *balanceLabel;
    QLabel *faceLabel;
    QLabel *numLabel;

    void setupUi(QDialog *MemDialog)
    {
        if (MemDialog->objectName().isEmpty())
            MemDialog->setObjectName(QString::fromUtf8("MemDialog"));
        MemDialog->resize(755, 570);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MemDialog->sizePolicy().hasHeightForWidth());
        MemDialog->setSizePolicy(sizePolicy);
        MemDialog->setStyleSheet(QString::fromUtf8("#MemDialog  {background-color: rgb(245,255,250)}\n"
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
"\n"
"QLabel\n"
"{\n"
"	font: 12pt \"Segoe UI\" bold;\n"
"}\n"
"\n"
"#membershipBox {\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"#profileBox {\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"#programBox {\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
" "));
        welcomeLabel = new QLabel(MemDialog);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(230, 90, 251, 31));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        restartButton = new QPushButton(MemDialog);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(560, 10, 71, 71));
        quitButton = new QPushButton(MemDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(670, 10, 71, 71));
        logoLabel = new QLabel(MemDialog);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(300, 0, 191, 101));
        currentDateTime = new QLabel(MemDialog);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));
        currentDateTime->setGeometry(QRect(10, 20, 241, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI 13")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        currentDateTime->setFont(font);
        membershipBox = new QGroupBox(MemDialog);
        membershipBox->setObjectName(QString::fromUtf8("membershipBox"));
        membershipBox->setGeometry(QRect(20, 130, 361, 191));
        membershipLabel = new QLabel(membershipBox);
        membershipLabel->setObjectName(QString::fromUtf8("membershipLabel"));
        membershipLabel->setGeometry(QRect(130, 30, 91, 21));
        membershipLabel->setFont(font);
        membershipComboBox = new QComboBox(membershipBox);
        membershipComboBox->addItem(QString());
        membershipComboBox->addItem(QString());
        membershipComboBox->addItem(QString());
        membershipComboBox->addItem(QString());
        membershipComboBox->setObjectName(QString::fromUtf8("membershipComboBox"));
        membershipComboBox->setGeometry(QRect(30, 70, 291, 31));
        membershipPushButton = new QPushButton(membershipBox);
        membershipPushButton->setObjectName(QString::fromUtf8("membershipPushButton"));
        membershipPushButton->setGeometry(QRect(120, 120, 91, 31));
        programBox = new QGroupBox(MemDialog);
        programBox->setObjectName(QString::fromUtf8("programBox"));
        programBox->setGeometry(QRect(20, 340, 361, 191));
        programComboBox = new QComboBox(programBox);
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->addItem(QString());
        programComboBox->setObjectName(QString::fromUtf8("programComboBox"));
        programComboBox->setGeometry(QRect(30, 70, 291, 31));
        programLabel = new QLabel(programBox);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        programLabel->setGeometry(QRect(140, 30, 91, 21));
        programLabel->setFont(font);
        planPushButton = new QPushButton(programBox);
        planPushButton->setObjectName(QString::fromUtf8("planPushButton"));
        planPushButton->setGeometry(QRect(120, 120, 91, 31));
        profileBox = new QGroupBox(MemDialog);
        profileBox->setObjectName(QString::fromUtf8("profileBox"));
        profileBox->setGeometry(QRect(410, 130, 311, 401));
        workoutPushButton = new QPushButton(profileBox);
        workoutPushButton->setObjectName(QString::fromUtf8("workoutPushButton"));
        workoutPushButton->setGeometry(QRect(120, 350, 75, 24));
        strengthLabel = new QLabel(profileBox);
        strengthLabel->setObjectName(QString::fromUtf8("strengthLabel"));
        strengthLabel->setGeometry(QRect(50, 310, 221, 16));
        flexibilityLabel = new QLabel(profileBox);
        flexibilityLabel->setObjectName(QString::fromUtf8("flexibilityLabel"));
        flexibilityLabel->setGeometry(QRect(50, 270, 221, 16));
        enduranceLabel = new QLabel(profileBox);
        enduranceLabel->setObjectName(QString::fromUtf8("enduranceLabel"));
        enduranceLabel->setGeometry(QRect(50, 230, 221, 16));
        balanceLabel = new QLabel(profileBox);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));
        balanceLabel->setGeometry(QRect(50, 190, 221, 16));
        faceLabel = new QLabel(profileBox);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        faceLabel->setGeometry(QRect(130, 30, 121, 121));
        numLabel = new QLabel(profileBox);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));
        numLabel->setGeometry(QRect(50, 160, 221, 16));

        retranslateUi(MemDialog);

        QMetaObject::connectSlotsByName(MemDialog);
    } // setupUi

    void retranslateUi(QDialog *MemDialog)
    {
        MemDialog->setWindowTitle(QCoreApplication::translate("MemDialog", "Dialog", nullptr));
        welcomeLabel->setText(QString());
        restartButton->setText(QCoreApplication::translate("MemDialog", "Restart", nullptr));
        quitButton->setText(QCoreApplication::translate("MemDialog", "Quit", nullptr));
        logoLabel->setText(QString());
        currentDateTime->setText(QString());
        membershipBox->setTitle(QCoreApplication::translate("MemDialog", "Membership", nullptr));
        membershipLabel->setText(QCoreApplication::translate("MemDialog", "Membership", nullptr));
        membershipComboBox->setItemText(0, QCoreApplication::translate("MemDialog", "None Selected", nullptr));
        membershipComboBox->setItemText(1, QCoreApplication::translate("MemDialog", "Bronze", nullptr));
        membershipComboBox->setItemText(2, QCoreApplication::translate("MemDialog", "Silver", nullptr));
        membershipComboBox->setItemText(3, QCoreApplication::translate("MemDialog", "Gold", nullptr));

        membershipPushButton->setText(QCoreApplication::translate("MemDialog", "Save", nullptr));
        programBox->setTitle(QCoreApplication::translate("MemDialog", "Programs", nullptr));
        programComboBox->setItemText(0, QCoreApplication::translate("MemDialog", "None Selected", nullptr));
        programComboBox->setItemText(1, QCoreApplication::translate("MemDialog", "Balance", nullptr));
        programComboBox->setItemText(2, QCoreApplication::translate("MemDialog", "Endurance", nullptr));
        programComboBox->setItemText(3, QCoreApplication::translate("MemDialog", "Flexibility", nullptr));
        programComboBox->setItemText(4, QCoreApplication::translate("MemDialog", "Strength", nullptr));

        programLabel->setText(QCoreApplication::translate("MemDialog", "Programs", nullptr));
        planPushButton->setText(QCoreApplication::translate("MemDialog", "Save", nullptr));
        profileBox->setTitle(QCoreApplication::translate("MemDialog", "Profile", nullptr));
        workoutPushButton->setText(QCoreApplication::translate("MemDialog", "Workout", nullptr));
        strengthLabel->setText(QString());
        flexibilityLabel->setText(QString());
        enduranceLabel->setText(QString());
        balanceLabel->setText(QString());
        faceLabel->setText(QString());
        numLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MemDialog: public Ui_MemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMDIALOG_H
