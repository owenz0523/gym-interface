#include "mainwindow.h"
#include "empdialog.h"
#include "ui_empdialog.h"
#include <QApplication>
#include <QProcess>
#include <QDateTime>
#include <QPixmap>
#include <QMessageBox>
#include <QComboBox>

EmpDialog::EmpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmpDialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(myfunction()));
    timer->start(1000);
    QPixmap pix(":/resources/assets/gymLogo.png");
    ui->logoLabel->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
    ui->welcomeLabel->setText("Welcome " + currentUserName + "!");
    QPixmap pix2(":/assets/equipment.png");
    ui->equipmentLabel->setPixmap(pix2.scaled(100,100, Qt::KeepAspectRatio));
    membersComboBox = new QComboBox(this);

    connect(membersComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),this, &EmpDialog::usernameSelection);

    fillComboBox();
}

EmpDialog::~EmpDialog()
{
    delete ui;
}

void EmpDialog::on_quitPushButton_clicked()
{
    this->close();
}


void EmpDialog::on_restartPushButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void EmpDialog::myfunction()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeString = dateTime.toString("yyyy-MM-dd  hh:mm:ss");
    ui->currentDateTime->setText(dateTimeString);

    ui->balanceLabel->setText(QString::number(gymEquipment[0]) + " balance machines.");
    ui->treadmillLabel->setText(QString::number(gymEquipment[1]) + " treadmills.");
    ui->stretchingLabel->setText(QString::number(gymEquipment[2]) + " stretching machines.");
    ui->benchpressLabel->setText(QString::number(gymEquipment[3]) + " bench presses.");

    ui->numLabel->setText(QString::number(memberStats[currentUserName][0]) + " workouts.");
    ui->membershipLabel->setText(memberInformation[currentUserName] + " membership.");
    ui->programLabel->setText(memberPlan[currentUserName] + " plan.");
}

void EmpDialog::fillComboBox()
{
    membersComboBox->clear();
    for (const QString& key : memberInformation.keys()) {
        membersComboBox->addItem(key);
    }
    membersComboBox->move(40, 230);
    membersComboBox->resize(301, 31);
}



void EmpDialog::on_buyBalancePushButton_clicked()
{
    gymEquipment[0] += 1;
    QMessageBox::information(this, "Equipment", "Successfully purchased");
}


void EmpDialog::on_sellBalancePushButton_clicked()
{
    if (gymEquipment[0] == 0) {
        QMessageBox::warning(this, "Equipment", "Nothing to sell");
    } else {
        gymEquipment[0] -= 1;
        QMessageBox::information(this, "Equipment", "Successfully sold");
    }
}


void EmpDialog::on_buyTreadmillPushButton_clicked()
{
    gymEquipment[1] += 1;
    QMessageBox::information(this, "Equipment", "Successfully purchased");
}


void EmpDialog::on_sellTreadmillPushButton_clicked()
{
    if (gymEquipment[1] == 0) {
        QMessageBox::warning(this, "Equipment", "Nothing to sell");
    } else {
        gymEquipment[1] -= 1;
        QMessageBox::information(this, "Equipment", "Successfully sold");
    }
}


void EmpDialog::on_buyStretchPushButton_clicked()
{
    gymEquipment[2] += 1;
    QMessageBox::information(this, "Equipment", "Successfully purchased");
}


void EmpDialog::on_sellStretchPushButton_clicked()
{
    if (gymEquipment[2] == 0) {
        QMessageBox::warning(this, "Equipment", "Nothing to sell");
    } else {
        gymEquipment[2] -= 1;
        QMessageBox::information(this, "Equipment", "Successfully sold");
    }
}


void EmpDialog::on_buyBenchpressPushButton_clicked()
{
    gymEquipment[3] += 1;
    QMessageBox::information(this, "Equipment", "Successfully purchased");
}


void EmpDialog::on_sellBenchpressPushButton_clicked()
{
    if (gymEquipment[3] == 0) {
        QMessageBox::warning(this, "Equipment", "Nothing to sell");
    } else {
        gymEquipment[3] -= 1;
        QMessageBox::information(this, "Equipment", "Successfully sold");
    }
}


void EmpDialog::usernameSelection(int index)
{
    currentUserName = membersComboBox->itemText(index);
}



