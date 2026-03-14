#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // 1. Enter the name for the Windows bridge
    db.setDatabaseName("Source_Oracle");

    // 2. Enter your Oracle User
    db.setUserName("ESER");

    // 3. Enter your Oracle Password
    db.setPassword("eserneji2004!");

    if (db.open())
        test=true;

    return test;
}
