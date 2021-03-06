/********************************************************************************
** Form generated from reading UI file 'serverresponse.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERRESPONSE_H
#define UI_SERVERRESPONSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ServerResponse
{
public:
    QTextEdit *DietPlanEdit;
    QComboBox *ExperienceComboBox;
    QLabel *label;
    QPushButton *DonePushButton;

    void setupUi(QDialog *ServerResponse)
    {
        if (ServerResponse->objectName().isEmpty())
            ServerResponse->setObjectName(QStringLiteral("ServerResponse"));
        ServerResponse->resize(515, 474);
        DietPlanEdit = new QTextEdit(ServerResponse);
        DietPlanEdit->setObjectName(QStringLiteral("DietPlanEdit"));
        DietPlanEdit->setGeometry(QRect(0, 0, 521, 411));
        ExperienceComboBox = new QComboBox(ServerResponse);
        ExperienceComboBox->setObjectName(QStringLiteral("ExperienceComboBox"));
        ExperienceComboBox->setGeometry(QRect(210, 420, 111, 25));
        label = new QLabel(ServerResponse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 420, 201, 25));
        DonePushButton = new QPushButton(ServerResponse);
        DonePushButton->setObjectName(QStringLiteral("DonePushButton"));
        DonePushButton->setGeometry(QRect(410, 440, 100, 25));

        retranslateUi(ServerResponse);
        QObject::connect(DonePushButton, SIGNAL(clicked()), ServerResponse, SLOT(close()));

        QMetaObject::connectSlotsByName(ServerResponse);
    } // setupUi

    void retranslateUi(QDialog *ServerResponse)
    {
        ServerResponse->setWindowTitle(QApplication::translate("ServerResponse", "Dialog", 0));
        ExperienceComboBox->clear();
        ExperienceComboBox->insertItems(0, QStringList()
         << QApplication::translate("ServerResponse", "1 (Bad)", 0)
         << QApplication::translate("ServerResponse", "2 (Fair)", 0)
         << QApplication::translate("ServerResponse", "3 (Good)", 0)
         << QApplication::translate("ServerResponse", "4 (Very Good)", 0)
         << QApplication::translate("ServerResponse", "5 (Excellent)", 0)
        );
        label->setText(QApplication::translate("ServerResponse", "Please Rate Your Experience", 0));
        DonePushButton->setText(QApplication::translate("ServerResponse", "Done", 0));
    } // retranslateUi

};

namespace Ui {
    class ServerResponse: public Ui_ServerResponse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERRESPONSE_H
