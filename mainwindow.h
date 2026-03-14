#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "article.h"
#include <QStringList>
#include <QDate>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshTable(const QString &titreFilter = "",
                      const QString &statutFilter = "Tous",
                      const QDate &dateFrom = QDate(2000,1,1),
                      const QDate &dateTo   = QDate::currentDate());
    void loadChercheurs();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
    Article tmp_article;
    QStringList chercheurs;
    QMap<int, QString> chercheurMap;
};
#endif // MAINWINDOW_H
