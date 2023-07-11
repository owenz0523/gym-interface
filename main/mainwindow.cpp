#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDateTime>
#include <QPixmap>
#include <QApplication>
#include <QProcess>

QString currentUserName;
QMap<QString, QString> memberInformation;
QMap<QString, QString> memberPlan;
QMap<QString, QList<int>> memberStats;
QList<int> gymEquipment;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    employeeCredentials.insert("employee", "password123");
    memberCredentials.insert("member1", "password456");
    memberCredentials.insert("member2", "password789");
    memberInformation.insert("member1", "None Selected");
    memberPlan.insert("member1", "None Selected");
    memberStats.insert("member1", {0,0,0,0,0});
    memberInformation.insert("member2", "Bronze");
    memberPlan.insert("member2", "Strength");
    memberStats.insert("member2", {3,0,0,0,0});
    gymEquipment = {0,0,0,0};
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(myfunction()));
    timer->start(1000);
    QPixmap pix(":/resources/assets/gymLogo.png");
    ui->logoLabel->setPixmap(pix.scaled(200,200, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeString = dateTime.toString("yyyy-MM-dd  hh:mm:ss");
    ui->currentDateTime->setText(dateTimeString);
}

void MainWindow::on_createPushButton_clicked()
{
    QString newUsername = ui->usernameLineEdit->text();
    QString newPassword = ui->passwordLineEdit->text();
    QString choice = ui->sideChoiceComboBox->currentText();

    if (choice == "Member") {
        if (memberCredentials.contains(newUsername)) {
            QMessageBox::warning(this, "Create Account", "Username already exists");
        } else {
            QMessageBox::information(this, "Create Account", "Account Created");
            memberCredentials.insert(newUsername, newPassword);
            currentUserName = newUsername;
            memberInformation.insert(newUsername, "None Selected");
            memberPlan.insert(newUsername, "None Selected");
            memberStats.insert(newUsername, {0,0,0,0,0});
            hide();
            memDialog = new MemDialog(this);
            memDialog->show();
        }
    } else if (choice == "Employee") {
        if (employeeCredentials.contains(newUsername)) {
            QMessageBox::warning(this, "Create Account", "Username already exists");
        } else {
            QMessageBox::information(this, "Create Account", "Account Created");
            employeeCredentials.insert(newUsername, newPassword);
            currentUserName = newUsername;
            hide();
            empDialog = new EmpDialog(this);
            empDialog->show();
        }
    }

}



void MainWindow::on_loginPushButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString choice = ui->sideChoiceComboBox->currentText();

    if (choice == "Member") {
        if (memberCredentials.contains(username)) {
            if (memberCredentials.value(username) == password) {
                QMessageBox::information(this, "Log In", "Successfully logged in");
                currentUserName = username;
                hide();
                memDialog = new MemDialog(this);
                memDialog->show();
            } else {
                QMessageBox::warning(this, "Log in", "Username or password incorrect");
            }
        }
    } else if (choice == "Employee") {
        if (employeeCredentials.contains(username)) {
            if (employeeCredentials.value(username) == password) {
                QMessageBox::information(this, "Log In", "Successfully logged in");
                currentUserName = username;
                hide();
                empDialog = new EmpDialog(this);
                empDialog->show();
            } else {
                QMessageBox::warning(this, "Log in", "Username or password incorrect");
            }
        }
    }
}


void MainWindow::on_quitButton_clicked()
{
    this->close();
}


void MainWindow::on_restartButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

