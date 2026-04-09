#include "connection.h"
Connection::Connection()
{
}
bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Oracle");
    db.setUserName("ESER");
    db.setPassword("eserneji2004!");
    if (db.open())
        test=true;
    return test;
}
