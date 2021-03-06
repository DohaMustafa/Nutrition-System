#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <map>
class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    std::map<std::string, int> carb;
    std::map<std::string, int> protein;
    std::map<std::string, int> Fiber;

signals:

public slots:
    void newConnection();
    void readyRead();

private:
    QTcpServer *server;
    QTcpSocket *ServerSocket;
};

#endif // SERVER_H
