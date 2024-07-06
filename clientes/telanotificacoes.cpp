#include "telanotificacoes.h"
#include "ui_telanotificacoes.h"
#include <QtSql>

telaNotificacoes::telaNotificacoes(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaNotificacoes)
    , m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_notificacoesCliente where idCliente=:id order by idNotif desc");
    query.bindValue(":id", m_id);
    if(!query.exec()){
        qDebug() << "Falha" << query.lastError().text();
    } else {
        int linha=0;
        ui->tb_notificacoes->setColumnCount(1);
        while(query.next())
        {
            ui->tb_notificacoes->insertRow(linha);
            ui->tb_notificacoes->setItem(linha, 0, new QTableWidgetItem(query.value(1).toString()));
            linha++;
        }

        ui->tb_notificacoes->setRowHeight(linha, 20);
        ui->tb_notificacoes->setColumnWidth(0,500);

        ui->tb_notificacoes->horizontalHeader()->setVisible(false);
        ui->tb_notificacoes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_notificacoes->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_notificacoes->verticalHeader()->setVisible(false);
        ui->tb_notificacoes->setStyleSheet("QTableView {selection-background-color:blue}");
    }



}

telaNotificacoes::~telaNotificacoes()
{
    delete ui;
}

void telaNotificacoes::on_btn_voltar_clicked()
{
    this->close();
}

