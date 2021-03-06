#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include "serverresponse.h"
class TCPSocket : public QObject
{
    Q_OBJECT
public:
    explicit TCPSocket(QObject *parent = nullptr);
    void Test();
    void Init(std::string Input);

signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
    void readChannelFinished();

private:
    QTcpSocket *socket;
    QTcpSocket *ClientSocket;
    ServerResponse *Response;

};

#endif // TCPSOCKET_H
