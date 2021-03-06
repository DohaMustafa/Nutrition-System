#include "serverresponse.h"
#include "ui_serverresponse.h"

ServerResponse::ServerResponse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerResponse)
{
    ui->setupUi(this);
}

ServerResponse::~ServerResponse()
{
    delete ui;
}

void ServerResponse::on_DonePushButton_clicked()
{

}
void ServerResponse::ShowText(QString text){
    ui->DietPlanEdit->insertHtml(text);
}
