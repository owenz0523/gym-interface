/********************************************************************************
** Form generated from reading UI file 'empdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPDIALOG_H
#define UI_EMPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmpDialog
{
public:
    QLabel *welcomeLabel;
    QLabel *currentDateTime;
    QPushButton *quitPushButton;
    QPushButton *restartPushButton;
    QLabel *logoLabel;
    QGroupBox *membershipBox;
    QLabel *memberLabel;
    QLabel *numLabel;
    QLabel *programLabel;
    QLabel *membershipLabel;
    QGroupBox *equipmentBox;
    QLabel *equipmentLabel;
    QLabel *balanceLabel;
    QLabel *treadmillLabel;
    QLabel *stretchingLabel;
    QLabel *benchpressLabel;
    QPushButton *buyBalancePushButton;
    QPushButton *sellBalancePushButton;
    QPushButton *buyTreadmillPushButton;
    QPushButton *buyStretchPushButton;
    QPushButton *buyBenchpressPushButton;
    QPushButton *sellTreadmillPushButton;
    QPushButton *sellStretchPushButton;
    QPushButton *sellBenchpressPushButton;

    void setupUi(QDialog *EmpDialog)
    {
        if (EmpDialog->objectName().isEmpty())
            EmpDialog->setObjectName(QString::fromUtf8("EmpDialog"));
        EmpDialog->resize(757, 552);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EmpDialog->sizePolicy().hasHeightForWidth());
        EmpDialog->setSizePolicy(sizePolicy);
        EmpDialog->setStyleSheet(QString::fromUtf8("#EmpDialog {background-color: rgb(245,255,250)}\n"
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
"#equipmentBox\n"
"{\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"#membershipBox\n"
"{\n"
"	background-color: rgb(255,250,250);\n"
"	border-radius: 8px;\n"
"}\n"
" "));
        welcomeLabel = new QLabel(EmpDialog);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(220, 90, 281, 31));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        currentDateTime = new QLabel(EmpDialog);
        currentDateTime->setObjectName(QString::fromUtf8("currentDateTime"));
        currentDateTime->setGeometry(QRect(10, 20, 241, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI 13")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        currentDateTime->setFont(font);
        quitPushButton = new QPushButton(EmpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(670, 10, 75, 71));
        restartPushButton = new QPushButton(EmpDialog);
        restartPushButton->setObjectName(QString::fromUtf8("restartPushButton"));
        restartPushButton->setGeometry(QRect(580, 10, 75, 71));
        logoLabel = new QLabel(EmpDialog);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(320, 10, 191, 101));
        membershipBox = new QGroupBox(EmpDialog);
        membershipBox->setObjectName(QString::fromUtf8("membershipBox"));
        membershipBox->setGeometry(QRect(20, 150, 341, 341));
        memberLabel = new QLabel(membershipBox);
        memberLabel->setObjectName(QString::fromUtf8("memberLabel"));
        memberLabel->setGeometry(QRect(130, 30, 71, 31));
        numLabel = new QLabel(membershipBox);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));
        numLabel->setGeometry(QRect(20, 190, 301, 21));
        programLabel = new QLabel(membershipBox);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        programLabel->setGeometry(QRect(20, 240, 301, 21));
        membershipLabel = new QLabel(membershipBox);
        membershipLabel->setObjectName(QString::fromUtf8("membershipLabel"));
        membershipLabel->setGeometry(QRect(20, 290, 301, 21));
        equipmentBox = new QGroupBox(EmpDialog);
        equipmentBox->setObjectName(QString::fromUtf8("equipmentBox"));
        equipmentBox->setGeometry(QRect(380, 150, 341, 341));
        equipmentLabel = new QLabel(equipmentBox);
        equipmentLabel->setObjectName(QString::fromUtf8("equipmentLabel"));
        equipmentLabel->setGeometry(QRect(120, 30, 121, 121));
        balanceLabel = new QLabel(equipmentBox);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));
        balanceLabel->setGeometry(QRect(20, 170, 201, 21));
        treadmillLabel = new QLabel(equipmentBox);
        treadmillLabel->setObjectName(QString::fromUtf8("treadmillLabel"));
        treadmillLabel->setGeometry(QRect(20, 215, 201, 21));
        stretchingLabel = new QLabel(equipmentBox);
        stretchingLabel->setObjectName(QString::fromUtf8("stretchingLabel"));
        stretchingLabel->setGeometry(QRect(20, 260, 201, 21));
        benchpressLabel = new QLabel(equipmentBox);
        benchpressLabel->setObjectName(QString::fromUtf8("benchpressLabel"));
        benchpressLabel->setGeometry(QRect(20, 300, 201, 21));
        buyBalancePushButton = new QPushButton(equipmentBox);
        buyBalancePushButton->setObjectName(QString::fromUtf8("buyBalancePushButton"));
        buyBalancePushButton->setGeometry(QRect(270, 170, 21, 24));
        sellBalancePushButton = new QPushButton(equipmentBox);
        sellBalancePushButton->setObjectName(QString::fromUtf8("sellBalancePushButton"));
        sellBalancePushButton->setGeometry(QRect(300, 170, 21, 24));
        buyTreadmillPushButton = new QPushButton(equipmentBox);
        buyTreadmillPushButton->setObjectName(QString::fromUtf8("buyTreadmillPushButton"));
        buyTreadmillPushButton->setGeometry(QRect(270, 210, 21, 24));
        buyStretchPushButton = new QPushButton(equipmentBox);
        buyStretchPushButton->setObjectName(QString::fromUtf8("buyStretchPushButton"));
        buyStretchPushButton->setGeometry(QRect(270, 250, 21, 24));
        buyBenchpressPushButton = new QPushButton(equipmentBox);
        buyBenchpressPushButton->setObjectName(QString::fromUtf8("buyBenchpressPushButton"));
        buyBenchpressPushButton->setGeometry(QRect(270, 300, 21, 24));
        sellTreadmillPushButton = new QPushButton(equipmentBox);
        sellTreadmillPushButton->setObjectName(QString::fromUtf8("sellTreadmillPushButton"));
        sellTreadmillPushButton->setGeometry(QRect(300, 210, 21, 24));
        sellStretchPushButton = new QPushButton(equipmentBox);
        sellStretchPushButton->setObjectName(QString::fromUtf8("sellStretchPushButton"));
        sellStretchPushButton->setGeometry(QRect(300, 250, 21, 24));
        sellBenchpressPushButton = new QPushButton(equipmentBox);
        sellBenchpressPushButton->setObjectName(QString::fromUtf8("sellBenchpressPushButton"));
        sellBenchpressPushButton->setGeometry(QRect(300, 300, 21, 24));

        retranslateUi(EmpDialog);

        QMetaObject::connectSlotsByName(EmpDialog);
    } // setupUi

    void retranslateUi(QDialog *EmpDialog)
    {
        EmpDialog->setWindowTitle(QCoreApplication::translate("EmpDialog", "Dialog", nullptr));
        welcomeLabel->setText(QString());
        currentDateTime->setText(QString());
        quitPushButton->setText(QCoreApplication::translate("EmpDialog", "Quit", nullptr));
        restartPushButton->setText(QCoreApplication::translate("EmpDialog", "Restart", nullptr));
        logoLabel->setText(QString());
        membershipBox->setTitle(QCoreApplication::translate("EmpDialog", "Membership", nullptr));
        memberLabel->setText(QCoreApplication::translate("EmpDialog", "Members", nullptr));
        numLabel->setText(QString());
        programLabel->setText(QString());
        membershipLabel->setText(QString());
        equipmentBox->setTitle(QCoreApplication::translate("EmpDialog", "Equipment", nullptr));
        equipmentLabel->setText(QString());
        balanceLabel->setText(QString());
        treadmillLabel->setText(QString());
        stretchingLabel->setText(QString());
        benchpressLabel->setText(QString());
        buyBalancePushButton->setText(QCoreApplication::translate("EmpDialog", "+", nullptr));
        sellBalancePushButton->setText(QCoreApplication::translate("EmpDialog", "-", nullptr));
        buyTreadmillPushButton->setText(QCoreApplication::translate("EmpDialog", "+", nullptr));
        buyStretchPushButton->setText(QCoreApplication::translate("EmpDialog", "+", nullptr));
        buyBenchpressPushButton->setText(QCoreApplication::translate("EmpDialog", "+", nullptr));
        sellTreadmillPushButton->setText(QCoreApplication::translate("EmpDialog", "-", nullptr));
        sellStretchPushButton->setText(QCoreApplication::translate("EmpDialog", "-", nullptr));
        sellBenchpressPushButton->setText(QCoreApplication::translate("EmpDialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmpDialog: public Ui_EmpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPDIALOG_H
