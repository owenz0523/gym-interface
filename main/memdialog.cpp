#include "mainwindow.h"
#include "memdialog.h"
#include "ui_memdialog.h"
#include <QApplication>
#include <QProcess>
#include <QDateTime>
#include <QPixmap>
#include <QMessageBox>


MemDialog::MemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemDialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(myfunction()));
    timer->start(1000);
    QPixmap pix(":/resources/assets/gymLogo.png");
    ui->logoLabel->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
    ui->welcomeLabel->setText("Welcome " + currentUserName + "!");
    QPixmap pix2(":/assets/face.png");
    ui->faceLabel->setPixmap(pix2.scaled(100,100, Qt::KeepAspectRatio));
}

MemDialog::~MemDialog()
{
    delete ui;
}

void MemDialog::myfunction() {
    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeString = dateTime.toString("yyyy-MM-dd  hh:mm:ss");
    ui->currentDateTime->setText(dateTimeString);

    ui->numLabel->setText(QString::number(memberStats[currentUserName][0]) + " workouts.");
    ui->balanceLabel->setText(QString::number(memberStats[currentUserName][1]) + " balance.");
    ui->enduranceLabel->setText(QString::number(memberStats[currentUserName][2]) + " endurance.");
    ui->flexibilityLabel->setText(QString::number(memberStats[currentUserName][3]) + " flexibility.");
    ui->strengthLabel->setText(QString::number(memberStats[currentUserName][4]) +  " strength.");
}

void MemDialog::on_quitButton_clicked()
{
    this->close();
}


void MemDialog::on_restartButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void MemDialog::on_planPushButton_clicked()
{
    QString program = ui->programComboBox->currentText();
    memberPlan[currentUserName] = program;
    QMessageBox::information(this, "Program", "Program successfully changed");
}


void MemDialog::on_membershipPushButton_clicked()
{
    QString membership = ui->membershipComboBox->currentText();
    memberInformation[currentUserName] = membership;
    QMessageBox::information(this, "Membership", "Membership successfully changed");
}


void MemDialog::on_workoutPushButton_clicked()
{
    int amountAdded = 1;
    if (memberPlan[currentUserName] == "None Selected" || memberInformation[currentUserName] == "None Selected") {
        QMessageBox::warning(this, "Workout", "Program or membership not selected");
    } else {
        memberStats[currentUserName][0] += 1;
        if (memberInformation[currentUserName] == "Silver") {
            amountAdded *= 2;
        } else if (memberInformation[currentUserName] == "Gold") {
            amountAdded *= 3;
        }

        if (memberPlan[currentUserName] == "Balance") {
            memberStats[currentUserName][1] += amountAdded;
        } else if (memberPlan[currentUserName] == "Endurance") {
            memberStats[currentUserName][2] += amountAdded;
        } else if (memberPlan[currentUserName] == "Flexibility") {
            memberStats[currentUserName][3] += amountAdded;
        } else if (memberPlan[currentUserName] == "Strength") {
            memberStats[currentUserName][4] += amountAdded;
        }
    }
}

