#include "telaquarto.h"
#include "ui_telaquarto.h"
#include <QtSql>
#include <QPixmap>
#include "reservas/reservas.h"
#include <QMessageBox>

telaQuarto::telaQuarto(QWidget *parent, int id, int idCliente)
    : QDialog(parent)
    , ui(new Ui::telaQuarto)
    ,m_id(id)
    ,m_idCliente(idCliente)
{
    tela = new pagamentoTela(this);
    ui->setupUi(this);
    ui->txt_diaInicial->setFocus();
    QSqlQuery query;
    query.prepare("select * from tb_quartos where id="+QString::number(m_id));
    query.exec();
    query.first();
    ui->txt_titulo->setText(query.value(2).toString());
    ui->txt_decricao->setText(query.value(3).toString());
    ui->txt_decricao->setWordWrap(true);
    ui->txt_avisoData->setVisible(false);
    QPixmap pixmap(query.value(16).toString());
    ui->foto_pixmap->setPixmap(pixmap);
}

telaQuarto::~telaQuarto()
{
    delete ui;
    delete tela;
}



void telaQuarto::on_btn_reserva_clicked()
{
    QString dInicial = ui->txt_diaInicial->text();
    QString mInicial = ui->txt_mesInicial->text();
    QString yInicial = ui->txt_anoInicial->text();

    QString dFinal = ui->txt_diaFinal->text();
    QString mFinal = ui->txt_mesFinal->text();
    QString yFinal = ui->txt_anoFinal->text();
    if(!dInicial.isEmpty() && !mInicial.isEmpty() && !yInicial.isEmpty() && !dFinal.isEmpty() && !mFinal.isEmpty() && !yFinal.isEmpty()){
    Reservas reserva(m_id, dInicial.toInt(), mInicial.toInt(), yInicial.toInt(), dFinal.toInt(), mFinal.toInt(), yFinal.toInt());
    qDebug() << reserva.verifConflito();

    if(reserva.verifConflito() == 1){
        ui->txt_avisoData->setVisible(true);
        ui->txt_avisoData->setText("Data indisponivel");
    } else {
        tela->setModal(true);
        tela->exec();
        if(tela->getVerifPagamento()){
        QSqlQuery query;
        query.prepare("insert into tb_reservas (idQuarto, diaInicial, mesInicial, anoInicial, diaFinal,"
                      "mesFinal, anoFinal, idCliente) values (:idQuarto, :diaInicial, :mesInicial,"
                      ":anoInicial, :diaFinal, :mesFinal, :anoFinal, :idCliente)");
        query.bindValue(":idQuarto", m_id);
        query.bindValue(":diaInicial", dInicial);
        query.bindValue(":mesInicial", mInicial);
        query.bindValue(":anoInicial", yInicial);
        query.bindValue(":diaFinal", dFinal);
        query.bindValue(":mesFinal", mFinal);
        query.bindValue(":anoFinal", yFinal);
        query.bindValue(":idCliente", m_idCliente);
        if(query.exec()){
            QMessageBox::information(this,"Sucesso","Reservado com sucesso!");
            ui->txt_avisoData->setVisible(false);
            ui->txt_diaInicial->clear();
            ui->txt_mesInicial->clear();
            ui->txt_anoInicial->clear();
            ui->txt_diaFinal->clear();
            ui->txt_mesFinal->clear();
            ui->txt_anoFinal->clear();
        } else {
            QMessageBox::warning(this,"Falha","Falha ao inserir no banco de dados");
            qDebug() << query.lastError().text();
            ui->txt_avisoData->setVisible(false);
        }
        } else {
            QMessageBox::warning(this,"Falha","Falha no pagamento");
        }

    }
    } else {
        QMessageBox::warning(this,"Erro","Preencha todos os campos.");
    }
}


void telaQuarto::on_btn_voltar_clicked()
{
    this->close();
}

