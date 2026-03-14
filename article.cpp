#include "article.h"

#include <QSqlQuery>

#include <QSqlError>

#include <QDebug>

#include <QDate>



Article::Article() {

    id_article = 0; titre = ""; resume = ""; statut_publication = ""; id_chercheur = 0;

    date_creation = QDate::currentDate();

}



Article::Article(int id, QString t, QString r, QDate d, QString s, int id_c) {

    id_article = id; titre = t; resume = r; date_creation = d;

    statut_publication = s; id_chercheur = id_c;

}



// Getters

int Article::getIdArticle() { return id_article; }

QString Article::getTitre() { return titre; }

QString Article::getResume() { return resume; }

QDate Article::getDateCreation() { return date_creation; }

QString Article::getStatutPublication() { return statut_publication; }

int Article::getIdChercheur() { return id_chercheur; }



// Setters

void Article::setIdArticle(int id) { id_article = id; }

void Article::setTitre(QString t) { titre = t; }

void Article::setResume(QString r) { resume = r; }

void Article::setDateCreation(QDate d) { date_creation = d; }

void Article::setStatutPublication(QString s) { statut_publication = s; }

void Article::setIdChercheur(int id) { id_chercheur = id; }



// Check if article with same title+resume exists

bool Article::exists(QString t, QString r) {

    QSqlQuery query;

    query.prepare("SELECT COUNT(*) FROM SYSTEM.ARTICLES WHERE TITRE = :titre AND RESUME = :res");

    query.bindValue(":titre", t);

    query.bindValue(":res", r);

    if(!query.exec()) { qDebug() << query.lastError().text(); return false; }

    if(query.next() && query.value(0).toInt() > 0) return true;

    return false;

}



// Add article

bool Article::ajouter() {

    if(exists(titre, resume)) return false; // no duplicates



    QSqlQuery query;

    query.prepare("INSERT INTO SYSTEM.ARTICLES "

                  "(ID, TITRE, STATUT, RESUME, CHERCHEUR_ASSOCIE, DATE_CREATION, DATE_MODIFICATION) "

                  "VALUES (SYSTEM.ARTICLES_SEQ.NEXTVAL, :titre, :statut, :res, :ch, SYSDATE, SYSDATE)");

    query.bindValue(":titre", titre);

    query.bindValue(":statut", statut_publication);

    query.bindValue(":res", resume);

    query.bindValue(":ch", id_chercheur);



    if(!query.exec()) {

        qDebug() << "Erreur ajout Article:" << query.lastError().text();

        return false;

    }

    return true;

}



// Modify article

bool Article::modifier() {

    QSqlQuery query;

    query.prepare("UPDATE SYSTEM.ARTICLES SET TITRE=:titre, RESUME=:res, STATUT=:statut, DATE_MODIFICATION=SYSDATE WHERE ID=:id");

    query.bindValue(":titre", titre);

    query.bindValue(":res", resume);

    query.bindValue(":statut", statut_publication);

    query.bindValue(":id", id_article);



    if(!query.exec()) {

        qDebug() << "Erreur modification Article:" << query.lastError().text();

        return false;

    }

    return true;

}



// Delete article by ID

bool Article::supprimer(int id) {

    QSqlQuery query;

    query.prepare("DELETE FROM SYSTEM.ARTICLES WHERE ID=:id");

    query.bindValue(":id", id);



    if(!query.exec()) {

        qDebug() << "Erreur suppression Article:" << query.lastError().text();

        return false;

    }

    return true;

}
