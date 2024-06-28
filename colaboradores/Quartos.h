#ifndef QUARTOS_H
#define QUARTOS_H

#include <iostream>
#include "cadastroquartos.h"
#include <vector>
#include <sstream>
#include <QDialog>
#include <QtSql>

using namespace std;

class Quartos{
protected:
    string m_tipoQuarto;
    string m_tituloQuarto;
    string m_descricaoQuarto;
    QSqlQuery query;
public:
    Quartos(string tipo, string titulo, string descricao) : m_tipoQuarto(tipo), m_tituloQuarto(titulo), m_descricaoQuarto(descricao) {};
    ~Quartos() {};
    virtual void codigoQuery() = 0;
};

class QuartoSimples : public Quartos{
private:
    string m_wifi;
    string m_tv;

public:
    QuartoSimples(string tipo, string titulo, string descricao, string wifi, string tv) :
        Quartos(tipo, titulo,descricao), m_wifi(wifi), m_tv(tv) {};
    ~QuartoSimples() {};

    void codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, wifi, tv) values"
                      "(:tituloQuarto, :tituloQuarto, :descricaoQuarto, :wifi, :tv)");
        query.bindValue(":tipoQuarto", tipoQuarto);
        query.bindValue(":tituloQuarto", tituloQuarto);
        query.bindValue(":descricaoQuarto", descricaoQuarto);
        query.bindValue(":wifi", wifi);
        query.bindValue(":tv", tv);
        if(query.exec()){
            QMessageBox::information(this, "Sucesso", "Quarto cadastrado com sucesso.");
        } else {
            QMessageBox::warning(this, "Erro", query.lastError().text());
        }
    }
};

#endif // QUARTOS_H
