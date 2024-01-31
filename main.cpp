#include <QtPlugin>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QApplication>
#include <QtGui>
#include <QtSql>

#include "mainwindow.h"
Q_IMPORT_PLUGIN(qsqloci);

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
    db.setDatabaseName("******");
    db.setUserName("******");
    db.setPassword("******");

    QSqlDatabase db2 = QSqlDatabase::addDatabase("QOCI", "xxxx");
    db2.setDatabaseName("******");
    db2.setUserName("******");
    db2.setPassword("******");

   /* QSqlDatabase db3 = QSqlDatabase::addDatabase("QODBC", "msaccess");
    db3.setDatabaseName("MyMSACCESS");

*/
    QSqlDatabase db3 = QSqlDatabase::addDatabase("QOCI", "xxxxx");
    db3.setDatabaseName("******");
    db3.setUserName("******");
    db3.setPassword("******");

    if (!db.open()) {
        qDebug() << "Cannot open database:" << db.lastError();
        return false; 
    }


    return true;
}

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainWindow w;
    if (!createConnection()) {
        return -1;
    }
 //   QSqlQuery query("xxxx");
  /*  QSqlQuery query("xxxx");
    query.exec();
    if (query.next()) {*/
       /* QByteArray ba = query.value(0).toByteArray();

        QFile file("c:/in.txt");
        if (!file.open(QIODevice::WriteOnly))
            return 1;
        QTextStream out(&file);
        out << ba;
        out << endl;
        out << query.value(0).toString();

        QTextCodec *codec = QTextCodec::codecForName("ISO 8859-15");
        QString str = codec->toUnicode(ba);

        QMessageBox msgBox;
        msgBox.setText(query.value(0).toString());
        msgBox.exec();*/

     /*   QTextCodec *c1251 = QTextCodec::codecForName("CP1251");
        QTextCodec *c1252 = QTextCodec::codecForName("CP1252");
        QString qstr = query.value(0).toString();*/

      /*QFile file("c:/in.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return 1;
        QTextStream out(&file);
        out.setCodec(c1252);
        out << qstr;*/

      /*  QByteArray es = c1252->fromUnicode(qstr);
        QString str = c1251->toUnicode(es);

        QMessageBox msgBox;
        msgBox.setText(str);
        msgBox.exec();
    }*/
    w.show();
 //   return app.exec();

    /*    QTableView     view;
    QSqlQueryModel model;
 //   model.setQuery("xxxxxx
//
  //                 );

 //     model.setQuery("xxxx"
//
 //                    );
        model.setQuery("xxxxx"

                       );

    if (model.lastError().isValid()) {
        qDebug() << model.lastError();
    }
      
    view.setModel(&model);
    view.show();*/

    return app.exec();

}


