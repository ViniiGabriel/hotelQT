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

class QuartoSimples : public Quartos{
private:
    QString m_wifi;
    QString m_tv;

public:
    QuartoSimples(QString tipo, QString titulo, QString descricao, QString valor, QString wifi, QString tv) :
        Quartos(tipo, titulo,descricao, valor), m_wifi(wifi), m_tv(tv) {};
    ~QuartoSimples() {};

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, wifi, tv) values"
                      "(:tituloQuarto, :tituloQuarto, :descricaoQuarto, :wifi, :tv)");
        query.bindValue(":tipoQuarto", m_tipoQuarto);
        query.bindValue(":tituloQuarto", m_tituloQuarto);
        query.bindValue(":descricaoQuarto", m_descricaoQuarto);
        query.bindValue(":wifi", m_wifi);
        query.bindValue(":tv", m_tv);
        if(query.exec()){
            qDebug() << "Sucesso";
            return true;
        } else {
             qDebug() << "Falha";
            return false;
        }
    }
};

class QuartoComfort : public Quartos{
private:
    QString m_wifi;
    QString m_tv;
    QString m_sacada;
    QString m_banheira;
    QString m_roupao;
    QString m_higiene;

public:
    QuartoComfort(QString tipo, QString titulo, QString descricao, QString valor, QString wifi, QString tv, QString sacada,
    QString banheira, QString roupao, QString higiene) :
        Quartos(tipo, titulo,descricao, valor), m_wifi(wifi), m_tv(tv), m_sacada(sacada), m_banheira(banheira),
        m_roupao(roupao), m_higiene(higiene) {};
    ~QuartoComfort() {};

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, wifi, tv, sacada, banheira, roupao, higiene) values"
                      "(:tituloQuarto, :tituloQuarto, :descricaoQuarto, :wifi, :tv, :sacada, :banheira, :roupao, :higiene)");
        query.bindValue(":tipoQuarto", m_tipoQuarto);
        query.bindValue(":tituloQuarto", m_tituloQuarto);
        query.bindValue(":descricaoQuarto", m_descricaoQuarto);
        query.bindValue(":wifi", m_wifi);
        query.bindValue(":tv", m_tv);
        query.bindValue(":sacada", m_sacada);
        query.bindValue(":banheira", m_banheira);
        query.bindValue(":roupao", m_roupao);
        query.bindValue(":higiene", m_higiene);
        if(query.exec()){
            qDebug() << "Sucesso";
            return true;
        } else {
            qDebug() << "Falha";
            return false;
        }
    }};

#endif // QUARTOS_H
