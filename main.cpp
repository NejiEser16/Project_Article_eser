#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QSqlQuery>
#include <QSqlError>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool connected = c.createconnect();
    if (connected) {
        QSqlQuery queryTest;
        if (!queryTest.exec("SELECT COUNT(*) FROM ESER.ARTICLES")) {
            QMessageBox::critical(nullptr, "Test DB", queryTest.lastError().text());
        }
    }
    MainWindow w;
    if (connected)
    {
        w.show();
        QMessageBox::information(nullptr, "S5 - Connexion", "Connexion réussie !");
    }
    else
    {
        QMessageBox::critical(nullptr, "S5 - Erreur",
                              "La connexion a échoué.\nVérifiez votre source ODBC.");
    }
    return a.exec();
}
