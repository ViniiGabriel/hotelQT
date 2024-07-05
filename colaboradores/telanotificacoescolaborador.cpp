#include "telanotificacoescolaborador.h"
#include "ui_telanotificacoescolaborador.h"
#include <QtSql>

telaNotificacoesColaborador::telaNotificacoesColaborador(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaNotificacoesColaborador)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_notificacoesColaborador order by idNotif desc");
    if(query.exec())
    {
        int linha=0;
        ui->tb_notificacoes->setColumnCount(1);
        while(query.next())
        {
            ui->tb_notificacoes->insertRow(linha);
            ui->tb_notificacoes->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            linha++;
        }

        ui->tb_notificacoes->setRowHeight(linha, 20);
        ui->tb_notificacoes->setColumnWidth(0,500);

        ui->tb_notificacoes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui->tb_notificacoes->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        ui->tb_notificacoes->horizontalHeader()->setVisible(false);
        ui->tb_notificacoes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_notificacoes->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_notificacoes->selectRow(0);
        ui->tb_notificacoes->verticalHeader()->setVisible(false);
        ui->tb_notificacoes->setStyleSheet("QTableView {selection-background-color:blue}");
}
}

telaNotificacoesColaborador::~telaNotificacoesColaborador()
{
    delete ui;
}
