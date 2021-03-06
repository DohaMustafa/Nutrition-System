#ifndef SERVERRESPONSE_H
#define SERVERRESPONSE_H

#include <QDialog>

namespace Ui {
class ServerResponse;
}

class ServerResponse : public QDialog
{
    Q_OBJECT
private:
    Ui::ServerResponse *ui;

public:
    explicit ServerResponse(QWidget *parent = nullptr);
    ~ServerResponse();
    void ShowText(QString text);

private slots:
    void on_DonePushButton_clicked();
};

#endif // SERVERRESPONSE_H
