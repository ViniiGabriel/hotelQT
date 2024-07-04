#include "telaquarto.h"
#include "ui_telaquarto.h"
#include <QtSql>
#include <QPixmap>
#include "reservas/reservas.h"

telaQuarto::telaQuarto(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaQuarto)
    ,m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_quartos where id="+QString::number(m_id));
    query.exec();
    query.first();
    ui->txt_titulo->setText(query.value(2).toString());
    ui->txt_decricao->setText(query.value(3).toString());
    ui->txt_decricao->setWordWrap(true);
    QPixmap pixmap(query.value(16).toString());
    ui->foto_pixmap->setPixmap(pixmap);
}

telaQuarto::~telaQuarto()
{
    delete ui;
}



void telaQuarto::on_btn_reserva_clicked()
{
    int verif = 3;
    QString dInicial = ui->txt_diaInicial->text();
    QString mInicial = ui->txt_mesInicial->text();
    QString yInicial = ui->txt_anoInicial->text();

    QString dFinal = ui->txt_diaFinal->text();
    QString mFinal = ui->txt_mesFinal->text();
    QString yFinal = ui->txt_anoFinal->text();

    Reservas reserva(m_id, dInicial, mInicial, yInicial, dFinal, mFinal, yFinal);
    qDebug() << reserva.verifConflito();

    if(reserva.verifConflito() == 1){
        ui->txt_avisoData->setText("Data indisponivel");
    } else {
        ui->txt_avisoData->setText("vapo");
    }


}

