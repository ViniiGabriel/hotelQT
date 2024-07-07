#ifndef QUARTOCOMFORT_H
#define QUARTOCOMFORT_H

#include "Quartos.h"

class QuartoComfort : public Quartos{
private:
    QString m_wifi;
    QString m_tv;
    QString m_ar;
    QString m_sacada;
    QString m_banheira;
    QString m_roupao;
    QString m_higiene;

public:
    QuartoComfort(QString tipo, QString titulo, QString descricao, QString valor, QString path, QString wifi, QString tv, QString ar, QString sacada,
                  QString banheira, QString roupao, QString higiene) :
        Quartos(tipo, titulo,descricao, valor, path), m_wifi(wifi), m_tv(tv), m_ar(ar), m_sacada(sacada), m_banheira(banheira),
        m_roupao(roupao), m_higiene(higiene) {}
    ~QuartoComfort() {}

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, valor, wifi, tv, ar, sacada, banheira, roupao, higiene, caminhoImagem) values"
                      "(:tipoQuarto, :tituloQuarto, :descricaoQuarto, :valor, :wifi, :tv, :ar, :sacada, :banheira, :roupao, :higiene, :path)");
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
        query.bindValue(":path", m_imagemPath);

        if(query.exec()){
            qDebug() << "Sucesso";
            return true;
        } else {
            qDebug() << "Falha";
            return false;
        }
    }
};


#endif // QUARTOCOMFORT_H
