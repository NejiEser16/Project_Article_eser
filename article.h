#ifndef ARTICLE_H

#define ARTICLE_H



#include <QString>

#include <QDate>



class Article

{

public:

    Article();

    Article(int id, QString t, QString r, QDate d, QString s, int id_c);



    // Getters

    int getIdArticle();

    QString getTitre();

    QString getResume();

    QDate getDateCreation();

    QString getStatutPublication();

    int getIdChercheur();



    // Setters

    void setIdArticle(int id);

    void setTitre(QString t);

    void setResume(QString r);

    void setDateCreation(QDate d);

    void setStatutPublication(QString s);

    void setIdChercheur(int id);



    // CRUD

    bool ajouter();         // create

    bool modifier();        // update

    bool supprimer(int id); // delete

    bool exists(QString t, QString r); // check duplicate by title+resume



private:

    int id_article;

    QString titre;

    QString resume;

    QDate date_creation;

    QString statut_publication;

    int id_chercheur;

};



#endif // ARTICLE_H
