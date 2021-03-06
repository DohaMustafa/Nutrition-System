#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include <tcpsocket.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SubmitPushButton_clicked()
{
    QString PatientName= ui->NameEdit->toPlainText();
    std::string PatientNameS = PatientName.toUtf8().constData();
    //const char *PatientNameC = PatientNameS.c_str();
    TCPSocket Client;
    //Client.Init(PatientNameS);
    QString PatientWeight= ui->WeightEdit->toPlainText();
    std::string PatientWeightS = PatientWeight.toUtf8().constData();
    //Client.Init(PatientWeightS);
    QString PatientHeight= ui->HeightEdit->toPlainText();
    std::string PatientHeightS = PatientHeight.toUtf8().constData();
    //Client.Init(PatientHeightS);
    QString PatientGender= ui->GenderComboBox->currentText();
    std::string PatientGenderS = PatientGender.toUtf8().constData();
    QString PatientBloodType= ui->BloodTypeComboBox->currentText();
    std::string PatientBloodTypeS = PatientBloodType.toUtf8().constData();
   // Client.Init(PatientBloodTypeS);
    QString PatientDisease= ui->DiseasesComboBox->currentText();
    std::string PatientDiseaseS = PatientDisease.toUtf8().constData();
    //Client.Init(PatientDiseaseS);
    QString PatientPressure= ui->PressureEdit->toPlainText();
    std::string PatientPressureS = PatientPressure.toUtf8().constData();
    //Client.Init(PatientPressureS);
    QDate PatientDOB= ui->AgeEdit->date();
    QDate CurrentDate= QDate::currentDate();
    int CurrentAge = CurrentDate.year() -  PatientDOB.year();
    if ((PatientDOB.month() > CurrentDate.month() || (PatientDOB.month()==CurrentDate.month() && PatientDOB.day()>CurrentDate.day())))
    {
    CurrentAge--;
    }
    QString PatientAge = (QString::number(CurrentAge));
    std::string PatientAgeS = PatientAge.toUtf8().constData();
    //Client.Init(PatientAgeS);
    QString EcerciseDays= ui->ExerciseDaysComboBox->currentText();
    std::string EcerciseDaysS = EcerciseDays.toUtf8().constData();
    std::string Info= PatientNameS+","+PatientAgeS+","+PatientGenderS+","+PatientHeightS+","+PatientWeightS+","+"1.5"+","+EcerciseDaysS;
    Client.Init(Info);

}
