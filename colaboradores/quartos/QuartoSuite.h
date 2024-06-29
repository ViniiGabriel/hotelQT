#ifndef QUARTOSUITE_H
#define QUARTOSUITE_H

#include "Quartos.h"

class QuartoSuite : public Quartos{
private:
    QString m_wifi;
    QString m_tv;
    QString m_ar;
    QString m_sacada;
    QString m_banheira;
    QString m_roupao;
    QString m_higiene;
    QString m_cafe;
    QString m_servicoQuarto;

public:
    QuartoSuite(QString tipo, QString titulo, QString descricao, QString valor, QString path, QString wifi, QString tv, QString ar, QString sacada,
                  QString banheira, QString roupao, QString higiene, QString cafe, QString servico) :
        Quartos(tipo, titulo, descricao, valor, path), m_wifi(wifi), m_tv(tv), m_ar(ar), m_sacada(sacada), m_banheira(banheira),
        m_roupao(roupao), m_higiene(higiene), m_cafe(cafe), m_servicoQuarto(servico) {};
    ~QuartoSuite() {};

    bool codigoQuery(){
        query.prepare("insert into tb_quartos (tipoQuarto, tituloQuarto, descricaoQuarto, valor, wifi, tv, ar, sacada, banheira, roupao, higiene, cafe, servicoQuarto, caminhoImagem) values"
                      "(:tipoQuarto, :tituloQuarto, :descricaoQuarto, :valor, :wifi, :tv, :ar, :sacada, :banheira, :roupao, :higiene, :cafe, :servicoQuarto, :path)");
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
        query.bindValue(":path", m_imagemPath);

        query.bindValue(":servicoQuarto", m_servicoQuarto);
        if(query.exec()){
            qDebug() << "Sucesso";
            return true;
        } else {
            qDebug() << "Falha";
            return false;
        }
    }
};
#endif // QUARTOSUITE_H
