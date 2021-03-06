#include "mainwindow.h"
#include <tcpsocket.h>
#include "tcpserver.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //TCPServer Server;
    MainWindow w;
    w.show();
    //TCPSocket cTest;
    //cTest.Test();
    return a.exec();
}


