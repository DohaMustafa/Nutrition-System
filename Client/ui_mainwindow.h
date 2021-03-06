/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Tab;
    QWidget *PersonalInfoTab;
    QLabel *NameLabel;
    QLabel *AgeLabel;
    QLabel *GenderLabel;
    QComboBox *GenderComboBox;
    QTextEdit *NameEdit;
    QDateEdit *AgeEdit;
    QWidget *HealthInfoTab;
    QLabel *WeightLabel;
    QLabel *HeightLabel;
    QTextEdit *WeightEdit;
    QTextEdit *HeightEdit;
    QLabel *MeasuringUnitLabel1;
    QLabel *MeasuringUnitLabel2;
    QLabel *DiseasesLabel;
    QComboBox *DiseasesComboBox;
    QLabel *PressureLabel;
    QLabel *BloodType;
    QComboBox *BloodTypeComboBox;
    QTextEdit *PressureEdit;
    QLabel *ExerciseLabel;
    QComboBox *ExerciseDaysComboBox;
    QPushButton *SubmitPushButton;
    QPushButton *CancelPushButton;
    QMenuBar *menubar;
    QMenu *menuPatient_Information_System;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Tab = new QTabWidget(centralwidget);
        Tab->setObjectName(QStringLiteral("Tab"));
        Tab->setGeometry(QRect(10, 0, 601, 511));
        PersonalInfoTab = new QWidget();
        PersonalInfoTab->setObjectName(QStringLiteral("PersonalInfoTab"));
        NameLabel = new QLabel(PersonalInfoTab);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(10, 10, 50, 25));
        AgeLabel = new QLabel(PersonalInfoTab);
        AgeLabel->setObjectName(QStringLiteral("AgeLabel"));
        AgeLabel->setGeometry(QRect(10, 60, 120, 25));
        GenderLabel = new QLabel(PersonalInfoTab);
        GenderLabel->setObjectName(QStringLiteral("GenderLabel"));
        GenderLabel->setGeometry(QRect(10, 110, 50, 25));
        GenderComboBox = new QComboBox(PersonalInfoTab);
        GenderComboBox->setObjectName(QStringLiteral("GenderComboBox"));
        GenderComboBox->setGeometry(QRect(110, 110, 100, 25));
        NameEdit = new QTextEdit(PersonalInfoTab);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(110, 10, 200, 25));
        NameEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        NameEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        NameEdit->setAcceptRichText(false);
        AgeEdit = new QDateEdit(PersonalInfoTab);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setGeometry(QRect(110, 60, 111, 25));
        Tab->addTab(PersonalInfoTab, QString());
        HealthInfoTab = new QWidget();
        HealthInfoTab->setObjectName(QStringLiteral("HealthInfoTab"));
        WeightLabel = new QLabel(HealthInfoTab);
        WeightLabel->setObjectName(QStringLiteral("WeightLabel"));
        WeightLabel->setGeometry(QRect(10, 10, 50, 25));
        HeightLabel = new QLabel(HealthInfoTab);
        HeightLabel->setObjectName(QStringLiteral("HeightLabel"));
        HeightLabel->setGeometry(QRect(10, 60, 50, 25));
        WeightEdit = new QTextEdit(HealthInfoTab);
        WeightEdit->setObjectName(QStringLiteral("WeightEdit"));
        WeightEdit->setGeometry(QRect(130, 10, 75, 25));
        WeightEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        WeightEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HeightEdit = new QTextEdit(HealthInfoTab);
        HeightEdit->setObjectName(QStringLiteral("HeightEdit"));
        HeightEdit->setGeometry(QRect(130, 60, 75, 25));
        HeightEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        HeightEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MeasuringUnitLabel1 = new QLabel(HealthInfoTab);
        MeasuringUnitLabel1->setObjectName(QStringLiteral("MeasuringUnitLabel1"));
        MeasuringUnitLabel1->setGeometry(QRect(210, 10, 50, 25));
        MeasuringUnitLabel2 = new QLabel(HealthInfoTab);
        MeasuringUnitLabel2->setObjectName(QStringLiteral("MeasuringUnitLabel2"));
        MeasuringUnitLabel2->setGeometry(QRect(210, 60, 50, 25));
        DiseasesLabel = new QLabel(HealthInfoTab);
        DiseasesLabel->setObjectName(QStringLiteral("DiseasesLabel"));
        DiseasesLabel->setGeometry(QRect(10, 110, 60, 25));
        DiseasesComboBox = new QComboBox(HealthInfoTab);
        DiseasesComboBox->setObjectName(QStringLiteral("DiseasesComboBox"));
        DiseasesComboBox->setGeometry(QRect(130, 110, 150, 25));
        PressureLabel = new QLabel(HealthInfoTab);
        PressureLabel->setObjectName(QStringLiteral("PressureLabel"));
        PressureLabel->setGeometry(QRect(10, 160, 120, 25));
        BloodType = new QLabel(HealthInfoTab);
        BloodType->setObjectName(QStringLiteral("BloodType"));
        BloodType->setGeometry(QRect(10, 210, 100, 25));
        BloodTypeComboBox = new QComboBox(HealthInfoTab);
        BloodTypeComboBox->setObjectName(QStringLiteral("BloodTypeComboBox"));
        BloodTypeComboBox->setGeometry(QRect(130, 210, 100, 25));
        PressureEdit = new QTextEdit(HealthInfoTab);
        PressureEdit->setObjectName(QStringLiteral("PressureEdit"));
        PressureEdit->setGeometry(QRect(130, 160, 75, 25));
        PressureEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        PressureEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ExerciseLabel = new QLabel(HealthInfoTab);
        ExerciseLabel->setObjectName(QStringLiteral("ExerciseLabel"));
        ExerciseLabel->setGeometry(QRect(10, 260, 100, 25));
        ExerciseDaysComboBox = new QComboBox(HealthInfoTab);
        ExerciseDaysComboBox->setObjectName(QStringLiteral("ExerciseDaysComboBox"));
        ExerciseDaysComboBox->setGeometry(QRect(130, 260, 100, 25));
        Tab->addTab(HealthInfoTab, QString());
        SubmitPushButton = new QPushButton(centralwidget);
        SubmitPushButton->setObjectName(QStringLiteral("SubmitPushButton"));
        SubmitPushButton->setGeometry(QRect(400, 520, 100, 30));
        CancelPushButton = new QPushButton(centralwidget);
        CancelPushButton->setObjectName(QStringLiteral("CancelPushButton"));
        CancelPushButton->setGeometry(QRect(510, 520, 100, 30));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 620, 22));
        menuPatient_Information_System = new QMenu(menubar);
        menuPatient_Information_System->setObjectName(QStringLiteral("menuPatient_Information_System"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPatient_Information_System->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(CancelPushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        Tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        NameLabel->setText(QApplication::translate("MainWindow", "Name", 0));
        AgeLabel->setText(QApplication::translate("MainWindow", "Date Of Birth", 0));
        GenderLabel->setText(QApplication::translate("MainWindow", "Gender", 0));
        GenderComboBox->clear();
        GenderComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Female", 0)
         << QApplication::translate("MainWindow", "Male", 0)
        );
        NameEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">User</p></body></html>", 0));
        Tab->setTabText(Tab->indexOf(PersonalInfoTab), QApplication::translate("MainWindow", "Personal Info", 0));
        WeightLabel->setText(QApplication::translate("MainWindow", "Weight", 0));
        HeightLabel->setText(QApplication::translate("MainWindow", "Height", 0));
        WeightEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">80</p></body></html>", 0));
        HeightEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">180</p></body></html>", 0));
        MeasuringUnitLabel1->setText(QApplication::translate("MainWindow", "Kg", 0));
        MeasuringUnitLabel2->setText(QApplication::translate("MainWindow", "cm", 0));
        DiseasesLabel->setText(QApplication::translate("MainWindow", "Disease", 0));
        DiseasesComboBox->clear();
        DiseasesComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0)
         << QApplication::translate("MainWindow", "Diabetes", 0)
         << QApplication::translate("MainWindow", "Tooth Decay", 0)
         << QApplication::translate("MainWindow", "Ulcer", 0)
         << QApplication::translate("MainWindow", "Food Allergies", 0)
         << QApplication::translate("MainWindow", "Cardiac Diseases", 0)
         << QApplication::translate("MainWindow", "Anemia", 0)
         << QApplication::translate("MainWindow", "Inflammatory Bowel Disease", 0)
         << QApplication::translate("MainWindow", "Irritable Bowel Syndrome", 0)
         << QApplication::translate("MainWindow", "Other", 0)
        );
        PressureLabel->setText(QApplication::translate("MainWindow", "Blood Pressure", 0));
        BloodType->setText(QApplication::translate("MainWindow", "Blood Type", 0));
        BloodTypeComboBox->clear();
        BloodTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "A+", 0)
         << QApplication::translate("MainWindow", "A-", 0)
         << QApplication::translate("MainWindow", "B+", 0)
         << QApplication::translate("MainWindow", "B-", 0)
         << QApplication::translate("MainWindow", "O+", 0)
         << QApplication::translate("MainWindow", "O-", 0)
         << QApplication::translate("MainWindow", "AB+", 0)
         << QApplication::translate("MainWindow", "AB-", 0)
         << QString()
        );
        PressureEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">120/80</p></body></html>", 0));
        ExerciseLabel->setText(QApplication::translate("MainWindow", "Exercise days", 0));
        ExerciseDaysComboBox->clear();
        ExerciseDaysComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
        );
        Tab->setTabText(Tab->indexOf(HealthInfoTab), QApplication::translate("MainWindow", "Health Info", 0));
        SubmitPushButton->setText(QApplication::translate("MainWindow", "Submit", 0));
        CancelPushButton->setText(QApplication::translate("MainWindow", "Cancel", 0));
        menuPatient_Information_System->setTitle(QApplication::translate("MainWindow", "Nutrition System", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
