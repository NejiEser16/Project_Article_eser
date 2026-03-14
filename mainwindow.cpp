#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include <QPrinter>
#include <QTextDocument>
#include <QFileDialog>
#include <QInputDialog>
#include <QDialog>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QLineEdit>
#include <QComboBox>
#include <QPlainTextEdit>

void MainWindow::loadChercheurs()
{
    ui->comboBox_3->clear();
    chercheurs.clear();
    chercheurMap.clear();

    QSqlQuery query("SELECT IDCHERCHEUR, NOM FROM NEYMAR.CHERCHEUR WHERE STATUT = 'actif'");
    while (query.next()) {
        int id = query.value("IDCHERCHEUR").toInt();
        QString nom = query.value("NOM").toString();
        chercheurMap[id] = nom;
        chercheurs.append(nom);
        ui->comboBox_3->addItem(nom, id);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loadChercheurs();

    ui->dateEdit_3->setDate(QDate(2000,1,1));
    ui->dateEdit_4->setDate(QDate::currentDate());

    refreshTable();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::refreshTable(const QString &titreFilter,
                              const QString &statutFilter,
                              const QDate &dateFrom,
                              const QDate &dateTo)
{
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    QString sql = "SELECT ID, TITRE, STATUT, RESUME, CHERCHEUR_ASSOCIE, DATE_CREATION, DATE_MODIFICATION "
                  "FROM SYSTEM.ARTICLES WHERE 1=1";

    if(!titreFilter.isEmpty())
        sql += " AND TITRE LIKE :titre";
    if(statutFilter != "Tous")
        sql += " AND STATUT = :statut";
    sql += " AND DATE_CREATION BETWEEN :dateFrom AND :dateTo";

    query.prepare(sql);
    if(!titreFilter.isEmpty())
        query.bindValue(":titre", "%" + titreFilter + "%");
    if(statutFilter != "Tous")
        query.bindValue(":statut", statutFilter);
    query.bindValue(":dateFrom", dateFrom);
    query.bindValue(":dateTo", dateTo);

    if(!query.exec()) {
        QMessageBox::critical(this, "Erreur Oracle", query.lastError().text());
        return;
    }

    for(int row=0; query.next(); ++row) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("ID").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("TITRE").toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("STATUT").toString()));
        int idC = query.value("CHERCHEUR_ASSOCIE").toInt();
        QString name = chercheurMap.contains(idC) ? chercheurMap[idC] : "Inconnu";
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(name));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value("RESUME").toString()));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(query.value("DATE_CREATION").toDate().toString("yyyy-MM-dd")));
        ui->tableWidget->setItem(row, 6, new QTableWidgetItem(query.value("DATE_MODIFICATION").toDate().toString("yyyy-MM-dd")));
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    int id_chercheur = ui->comboBox_3->currentData().toInt();
    QString titre = ui->lineEdit_2->text().trimmed();
    QString resume = ui->plainTextEdit->toPlainText().trimmed();
    QString statut = ui->comboBox->currentText();

    if(titre.isEmpty() || resume.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Titre et Résumé obligatoires !");
        return;
    }

    Article A(0, titre, resume, QDate::currentDate(), statut, id_chercheur);

    if(A.ajouter()) {
        QMessageBox::information(this, "Succès", "Article créé !");
        refreshTable();
    } else {
        QMessageBox::critical(this, "Erreur", "Impossible d'ajouter l'article. Vérifiez le titre.");
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString titre = ui->lineEdit_3->text().trimmed();
    QString statut = ui->comboBox_2->currentText();
    QDate dateFrom = ui->dateEdit_3->date();
    QDate dateTo   = ui->dateEdit_4->date();
    refreshTable(titre, statut, dateFrom, dateTo);
}

void MainWindow::on_pushButton_5_clicked()
{
    int row = ui->tableWidget->currentRow();
    if(row < 0) {
        QMessageBox::warning(this, "Erreur", "Sélectionnez un article !");
        return;
    }
    int id = ui->tableWidget->item(row,0)->text().toInt();
    if(QMessageBox::question(this, "Supprimer", "Voulez-vous vraiment supprimer ?",
                              QMessageBox::Yes|QMessageBox::No) == QMessageBox::Yes) {
        if(tmp_article.supprimer(id)) {
            QMessageBox::information(this, "Succès", "Article supprimé !");
            refreshTable();
        } else {
            QMessageBox::critical(this, "Erreur", "Impossible de supprimer !");
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit_2->clear();
    ui->plainTextEdit->clear();
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox_3->setCurrentIndex(0);
}

void MainWindow::on_pushButton_4_clicked()
{
    QSqlQuery query("SELECT * FROM SYSTEM.ARTICLES ORDER BY ID");
    if(!query.next()) {
        QMessageBox::information(this, "Exporter", "Aucun article à exporter.");
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this,"Exporter PDF","","*.pdf");
    if(fileName.isEmpty()) return;
    if(!fileName.endsWith(".pdf")) fileName += ".pdf";

    QTextDocument doc;
    QString html;
    html += "<h2>Liste des Articles</h2>";
    html += "<table border='1'><tr><th>ID</th><th>Titre</th><th>Statut</th><th>Résumé</th><th>Chercheur</th><th>Date Création</th><th>Date Modification</th></tr>";
    do {
        int idC = query.value("CHERCHEUR_ASSOCIE").toInt();
        QString name = chercheurMap.contains(idC) ? chercheurMap[idC] : "Inconnu";
        html += "<tr>"
                "<td>" + query.value("ID").toString() + "</td>"
                                                 "<td>" + query.value("TITRE").toString() + "</td>"
                                                    "<td>" + query.value("STATUT").toString() + "</td>"
                                                     "<td>" + query.value("RESUME").toString() + "</td>"
                                                     "<td>" + name + "</td>"
                         "<td>" + query.value("DATE_CREATION").toDate().toString("yyyy-MM-dd") + "</td>"
                                                                                 "<td>" + query.value("DATE_MODIFICATION").toDate().toString("yyyy-MM-dd") + "</td>"
                                                                                     "</tr>";
    } while(query.next());
    html += "</table>";
    doc.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    doc.print(&printer);

    QMessageBox::information(this,"Exporter","Export terminé !");
}

void MainWindow::on_pushButton_11_clicked()
{
    QString oldTitle = ui->lineEdit->text().trimmed();
    if(oldTitle.isEmpty()) {
        QMessageBox::warning(this,"Modifier","Entrez le titre à modifier !");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM SYSTEM.ARTICLES WHERE TITRE = :titre");
    query.bindValue(":titre", oldTitle);

    if(!query.exec() || !query.next()) {
        QMessageBox::warning(this,"Modifier","Aucun article trouvé !");
        return;
    }

    int idArticle = query.value("ID").toInt();
    QString oldResume = query.value("RESUME").toString();
    QString oldStatut = query.value("STATUT").toString();
    int oldChercheurId = query.value("CHERCHEUR_ASSOCIE").toInt();

    QDialog dialog(this);
    dialog.setWindowTitle("Modifier Article");
    QFormLayout form(&dialog);

    QLineEdit *newTitleEdit = new QLineEdit(oldTitle, &dialog);
    form.addRow("Titre:", newTitleEdit);

    QPlainTextEdit *newResumeEdit = new QPlainTextEdit(oldResume, &dialog);
    form.addRow("Résumé:", newResumeEdit);

    QComboBox *newStatutCombo = new QComboBox(&dialog);
    newStatutCombo->addItems({"Brouillon","Publié","Archivé"});
    int sIndex = newStatutCombo->findText(oldStatut);
    newStatutCombo->setCurrentIndex(sIndex >= 0 ? sIndex : 0);
    form.addRow("Statut:", newStatutCombo);

    QComboBox *newChercheurCombo = new QComboBox(&dialog);
    for (auto it = chercheurMap.begin(); it != chercheurMap.end(); ++it)
        newChercheurCombo->addItem(it.value(), it.key());
    int idx = newChercheurCombo->findData(oldChercheurId);
    newChercheurCombo->setCurrentIndex(idx >= 0 ? idx : 0);
    form.addRow("Chercheur:", newChercheurCombo);

    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &dialog);
    form.addRow(&buttonBox);
    QObject::connect(&buttonBox, &QDialogButtonBox::accepted, &dialog, &QDialog::accept);
    QObject::connect(&buttonBox, &QDialogButtonBox::rejected, &dialog, &QDialog::reject);

    if(dialog.exec() == QDialog::Accepted) {
        QString newTitle = newTitleEdit->text().trimmed();
        QString newResume = newResumeEdit->toPlainText().trimmed();
        QString newStatut = newStatutCombo->currentText();
        int newChercheurId = newChercheurCombo->currentData().toInt();

        if(newTitle.isEmpty() || newResume.isEmpty()) {
            QMessageBox::warning(this,"Modifier","Titre et Résumé obligatoires !");
            return;
        }

        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE SYSTEM.ARTICLES SET TITRE = :titre, RESUME = :res, "
                            "STATUT = :statut, CHERCHEUR_ASSOCIE = :ch, DATE_MODIFICATION = SYSDATE "
                            "WHERE ID = :id");
        updateQuery.bindValue(":titre", newTitle);
        updateQuery.bindValue(":res", newResume);
        updateQuery.bindValue(":statut", newStatut);
        updateQuery.bindValue(":ch", newChercheurId);
        updateQuery.bindValue(":id", idArticle);

        if(updateQuery.exec()) {
            QMessageBox::information(this,"Modifier","Article modifié !");
            refreshTable();
        } else {
            QMessageBox::critical(this,"Modifier","Erreur: "+updateQuery.lastError().text());
        }
    }
}
