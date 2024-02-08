#include <QCoreApplication>
#include <QtSql/QSqlQuery>
#include <QtNetwork/QNetworkRequest>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject obj;
    QNetworkRequest req;
    QSqlQuery qry;
    return a.exec();
}
