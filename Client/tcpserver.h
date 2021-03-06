#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class TCPServer : public QObject
{
    Q_OBJECT
public:
    explicit TCPServer(QObject *parent = nullptr);

signals:

public slots:
    void newConnection();
    void readyRead();

private:
    QTcpServer *Server;
    QTcpSocket *Socket;
};

#endif // TCPSERVER_H

