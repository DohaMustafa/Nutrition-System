#include "tcpsocket.h"
#include <QHostAddress>
#include <string>
#include <serverresponse.h>
TCPSocket::TCPSocket(QObject *parent) : QObject(parent)
{

}

void TCPSocket::Test(){
    ClientSocket= new QTcpSocket(this);

    connect(ClientSocket,SIGNAL(connected()),this,SLOT(connected()));
    connect(ClientSocket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(ClientSocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(ClientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));

    qDebug() << "Connecting";
    ClientSocket->connectToHost(QHostAddress::LocalHost,2021);

    if(!ClientSocket->waitForConnected(1000)){
        qDebug()<<"Error"<<ClientSocket->errorString();
    }
    else{
            ClientSocket->write("ToServer");
            ClientSocket->flush();
    }

}

void TCPSocket::Init(std::string Input){
    ClientSocket= new QTcpSocket(this);
    connect(ClientSocket,SIGNAL(connected()),this,SLOT(connected()));
    connect(ClientSocket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(ClientSocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(ClientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));

    qDebug() << "Connecting";
    ClientSocket->connectToHost(QHostAddress::LocalHost,2020);
    if(!ClientSocket->waitForConnected(1000)){
        qDebug()<<"Error"<<ClientSocket->errorString();
    }
    else{
        //ClientSocket->setReadBufferSize(8092);
        //qDebug() << "Buffer size: " << ClientSocket->readBufferSize();
        ClientSocket->write(Input.c_str());
        ClientSocket->flush();
        qDebug()<<"Connected and Wrote"<<Input.c_str();
    }

    if (ClientSocket->waitForReadyRead())
        {
            //QByteArray message = ClientSocket->readAll(); // Read message
            //qDebug() << "Message:" << QString(message);
        }
}

void TCPSocket::connected(){
    qDebug()<<"Connected";
    ClientSocket->waitForBytesWritten(20000);
    //ClientSocket->write("HEAD / HTTP/1.1 \r\n\r\n\r\n\r\n");
   // ClientSocket->flush();
    //qDebug()<<"WroteHead";
    //socket->write("Written from client");
    //socket->write("Too many written");

}

void TCPSocket::disconnected(){
    qDebug()<<"Disconnected";
}

void TCPSocket::bytesWritten(qint64 bytes){
    qDebug()<<"Wrote"<< bytes;
}

void TCPSocket::readyRead(){
    //ClientSocket->flush();
    qDebug()<<"Reading Client";
    QString Diet = ClientSocket->readAll();
    qDebug()<< Diet;
    ServerResponse T;
    T.setModal(true);
    T.ShowText(Diet);
    T.exec();

}


void TCPSocket::readChannelFinished(){
    qDebug()<<"Reading Client After";
    QString DietPlan =ClientSocket->readAll();
    qDebug()<< DietPlan;
    //Response->show();

}
