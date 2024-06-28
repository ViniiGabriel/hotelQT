#ifndef QUARTOSIMPLES_H
#define QUARTOSIMPLES_H

#include "Quartos.h"

class QuartoSimples : public Quartos{
private:
    QString m_wifi;
    QString m_tv;

public:
    QuartoSimples(QString tipo, QString titulo, QString descricao, QString valor, QString wifi, QString tv) :
        Quartos(tipo, titulo,descricao, valor), m_wifi(wifi), m_tv(tv) {};
    ~QuartoSimples() {};

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, valor, wifi, tv) values"
                      "(:tipoQuarto, :tituloQuarto, :descricaoQuarto, :valor, :wifi, :tv)");
        query.bindValue(":tipoQuarto", m_tipoQuarto);
        query.bindValue(":tituloQuarto", m_tituloQuarto);
        query.bindValue(":descricaoQuarto", m_descricaoQuarto);
        query.bindValue(":valor", m_valor);
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

#endif // QUARTOSIMPLES_H
