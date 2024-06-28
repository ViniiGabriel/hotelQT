#ifndef QUARTOS_H
#define QUARTOS_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

using namespace std;

class Quartos{
protected:
    QString m_tipoQuarto;
    QString m_tituloQuarto;
    QString m_descricaoQuarto;
    QString m_valor;
    QSqlQuery query;
public:
    Quartos(QString tipo, QString titulo, QString descricao, QString valor) : m_tipoQuarto(tipo), m_tituloQuarto(titulo), m_descricaoQuarto(descricao), m_valor(valor) {};
    ~Quartos() {};
    virtual bool codigoQuery() = 0;
};


#endif // QUARTOS_H
