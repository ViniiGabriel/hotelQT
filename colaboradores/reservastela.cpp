#include "reservastela.h"
#include "ui_reservastela.h"
#include <QtSql>
#include <QMessageBox>



reservasTela::reservasTela(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reservasTela)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_reservas order by case estado when 'ocupado' then 1 when 'pendente' then 2 else 3 end");
    if(!query.exec()) {QMessageBox::warning(this, "Erro", "Falha ao acessar o banco de dados");}
    else {
        int linha=0;
        ui->tb_reservas->setColumnCount(6);
        while(query.next())
        {

            int dI = query.value(1).toInt();
            int mI = query.value(2).toInt();
            QString aI = query.value(3).toString();
            int dF = query.value(4).toInt();
            int mF = query.value(5).toInt();
            QString aF = query.value(6).toString();

            QString diaI, mesI, diaF, mesF;

            if(dI <= 9){
                diaI = "0"+QString::number(dI);
            }
            if(mI <= 9){
                mesI = "0"+QString::number(mI) ;
            }
            if(dF <= 9){
                diaF = "0"+QString::number(dF);
            }
            if(mF <= 9){
                mesF = "0"+QString::number(mF);
            }


            QString dataCheckin = diaI + "/" + mesI + "/" + aI;
            QString dataCheckout = diaF + "/" + mesF + "/" + aF;

            ui->tb_reservas->insertRow(linha);
            ui->tb_reservas->setItem(linha, 0, new QTableWidgetItem(query.value(7).toString()));
            ui->tb_reservas->setItem(linha, 1, new QTableWidgetItem(query.value(0).toString()));
            ui->tb_reservas->setItem(linha, 2, new QTableWidgetItem(dataCheckin));
            ui->tb_reservas->setItem(linha, 3, new QTableWidgetItem(dataCheckout));
            ui->tb_reservas->setItem(linha, 4, new QTableWidgetItem(query.value(9).toString()));
            ui->tb_reservas->setItem(linha, 5, new QTableWidgetItem(query.value(10).toString()));

            ui->tb_reservas->setRowHeight(linha, 20);
            linha++;
        }
        ui->tb_reservas->setColumnWidth(0, 100);
        ui->tb_reservas->setColumnWidth(1, 200);
        ui->tb_reservas->setColumnWidth(2, 100);
        ui->tb_reservas->setColumnWidth(3, 100);
        ui->tb_reservas->setColumnWidth(4, 100);
        ui->tb_reservas->setColumnWidth(5, 0);


        QStringList cabecalho = {"ID Cliente", "Quarto","Check-in","Check-out","Estado"};
        ui->tb_reservas->setHorizontalHeaderLabels(cabecalho);
        ui->tb_reservas->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_reservas->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_reservas->selectRow(0);
        ui->tb_reservas->verticalHeader()->setVisible(false);
        ui->tb_reservas->setStyleSheet("QTableView {selection-background-color:blue}");
    }

    query.prepare("select * from tb_quartos");
    if(query.exec()){
        while(query.next()){
            for(int i=0; i < ui->tb_reservas->rowCount(); i++){
                if(query.value(0) == ui->tb_reservas->item(i, 1)->text())
                {
                    ui->tb_reservas->setItem(i, 1, new QTableWidgetItem(query.value(2).toString()));
                }
            }
        }

    }
}

reservasTela::~reservasTela()
{
    delete ui;
}

void reservasTela::on_btn_checkin_clicked()
{
    int linha = ui->tb_reservas->currentRow();
    m_id = ui->tb_reservas->item(linha, 5)->text();
    QSqlQuery query;
    query.prepare("update tb_reservas set estado = :estado where idReserva = :id");
    query.bindValue(":id", m_id);
    query.bindValue(":estado", "ocupado");
    query.exec();

    query.prepare("select * from tb_reservas where idReserva = :id");
    query.bindValue(":id", m_id);
    query.exec();
    query.first();
    ui->tb_reservas->setItem(linha, 4, new QTableWidgetItem(query.value(9).toString()));
    QString m_idCliente = query.value(7).toString();

    query.prepare("insert into tb_notificacoesCliente (idCliente, notificacao) values (:id,:notif)");
    query.bindValue(":id", m_idCliente);
    query.bindValue(":notif", "Seu check-in foi processado. Aproveite a estadia!");
    query.exec();
}

void reservasTela::on_btn_checkout_clicked()
{

    int linha = ui->tb_reservas->currentRow();
    m_id = ui->tb_reservas->item(linha, 5)->text();
    QSqlQuery query;
    query.prepare("update tb_reservas set estado = :estado, avaliado = :avaliacao where idReserva = :id");
    query.bindValue(":id", m_id);
    query.bindValue(":avaliacao", "nao");
    query.bindValue(":estado", "concluido");
    query.exec();

    query.prepare("select * from tb_reservas where idReserva = :id");
    query.bindValue(":id", m_id);
    query.exec();
    query.first();
    ui->tb_reservas->setItem(linha, 4, new QTableWidgetItem(query.value(9).toString()));
    QString m_idCliente = query.value(7).toString();

    query.prepare("insert into tb_notificacoesCliente (idCliente, notificacao) values (:id,:notif)");
    query.bindValue(":id", m_idCliente);
    query.bindValue(":notif", "Obrigado pela preferência, volte sempre!");
    query.exec();
}


void reservasTela::on_btn_voltar_clicked()
{
    this->close();
}


void reservasTela::on_btn_cancelar_clicked()
{
    int linha=ui->tb_reservas->currentRow();
    int id=ui->tb_reservas->item(linha, 5)->text().toInt();

    QSqlQuery query;
    query.prepare("delete from tb_reservas where idReserva="+QString::number(id));
    if(query.exec())
    {
        ui->tb_reservas->removeRow(linha);
        QMessageBox::information(this,"SUCESSO","Reserva excluida com sucesso");
    } else {
        QMessageBox::warning(this, "ERRO", "Erro ao excluir reserva");
    }
}

