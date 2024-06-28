#ifndef QUARTOMASTER_H
#define QUARTOMASTER_H

#include "Quartos.h"

class QuartoMaster : public Quartos{
private:
    QString m_wifi = "true";
    QString m_tv = "true";
    QString m_ar = "true";
    QString m_sacada = "true";
    QString m_banheira = "true";
    QString m_roupao = "true";
    QString m_higiene = "true";
    QString m_cafe = "true";
    QString m_servicoQuarto = "true";
    QString m_cofre = "true";
    QString m_bar = "true";


public:
    QuartoMaster(QString tipo, QString titulo, QString descricao, QString valor) :
        Quartos(tipo, titulo, descricao, valor) {};
    ~QuartoMaster() {};

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, valor, wifi, tv, ar, sacada, banheira, roupao, higiene, cafe, servicoQuarto, cofre, minibar) values"
                      "(:tipoQuarto, :tituloQuarto, :descricaoQuarto, :valor, :wifi, :tv, :ar, :sacada, :banheira, :roupao, :higiene, :cafe, :servicoQuarto, :cofre, :bar)");
        query.bindValue(":tipoQuarto", m_tipoQuarto);
        query.bindValue(":tituloQuarto", m_tituloQuarto);
        query.bindValue(":descricaoQuarto", m_descricaoQuarto);
        query.bindValue(":valor", m_valor);
        query.bindValue(":wifi", m_wifi);
        query.bindValue(":tv", m_tv);
        query.bindValue(":ar", m_ar);
        query.bindValue(":sacada", m_sacada);
        query.bindValue(":banheira", m_banheira);
        query.bindValue(":roupao", m_roupao);
        query.bindValue(":higiene", m_higiene);
        query.bindValue(":cafe", m_cafe);
        query.bindValue(":servicoQuarto", m_servicoQuarto);
        query.bindValue(":cofre", m_cofre);
        query.bindValue(":bar", m_bar);
        if(query.exec()){
            qDebug() << "Sucesso";
            return true;
        } else {
            qDebug() << "Falha";
            return false;
        }
    }
};
#endif // QUARTOMASTER_H
