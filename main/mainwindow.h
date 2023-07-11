#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QTimer>
#include "memdialog.h"
#include "empdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

extern QString currentUserName;
extern QMap<QString, QString> memberInformation;
extern QMap<QString, QString> memberPlan;
extern QMap<QString, QList<int>> memberStats;
extern QList<int> gymEquipment;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();   

public slots:
    void myfunction();

private slots:
    void on_createPushButton_clicked();

    void on_loginPushButton_clicked();

    void on_quitButton_clicked();

    void on_restartButton_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, QString> employeeCredentials;
    QMap<QString, QString> memberCredentials;
    QTimer *timer;
    MemDialog *memDialog;
    EmpDialog *empDialog;
};

#endif // MAINWINDOW_H
