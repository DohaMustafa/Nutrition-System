#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent) : QObject(parent)
{
    Server= new QTcpServer(this);
    connect(Server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    if(!Server->listen(QHostAddress::Any,2021)){
        qDebug()<<"Server Failed To Start";
    }else
    {
        qDebug()<< "Server Started";
    }
}

void TCPServer::newConnection()
{
    Socket= Server->nextPendingConnection();
    connect(Socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    Socket-> write("DataFromServerToClient\r\n");
    Socket->flush();
}

void TCPServer::readyRead()
{
    qDebug()<< "Reading Server";
    QString s= Socket->readAll();
    qDebug()<< s;
    Socket-> write("DataFromServerToClient2\r\n");
    Socket->flush();
    Socket->waitForBytesWritten(3000);
    Socket->close();
}


