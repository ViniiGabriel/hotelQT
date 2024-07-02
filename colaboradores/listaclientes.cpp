#include "listaclientes.h"
#include "ui_listaclientes.h"
#include <QtSql>
#include <QMessageBox>


listaClientes::listaClientes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::listaClientes)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_clientes");
    if(query.exec())
    {
        int linha=0;
        ui->tb_listaClientes->setColumnCount(5);
        while(query.next())
        {
            ui->tb_listaClientes->insertRow(linha);
            ui->tb_listaClientes->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tb_listaClientes->setItem(linha, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tb_listaClientes->setItem(linha, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tb_listaClientes->setItem(linha, 3, new QTableWidgetItem(query.value(4).toString()));
            ui->tb_listaClientes->setItem(linha, 4, new QTableWidgetItem(query.value(5).toString()));

            linha++;
        }

        ui->tb_listaClientes->setRowHeight(linha, 20);
        ui->tb_listaClientes->setColumnWidth(0,20);
        ui->tb_listaClientes->setColumnWidth(1,200);
        ui->tb_listaClientes->setColumnWidth(2,100);
        ui->tb_listaClientes->setColumnWidth(3,100);
        ui->tb_listaClientes->setColumnWidth(4,200);

        QStringList cabecalho = {"ID","Nome","Username","CPF","Endereço"};
        ui->tb_listaClientes->setHorizontalHeaderLabels(cabecalho);
        ui->tb_listaClientes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tb_listaClientes->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tb_listaClientes->selectRow(0);
        ui->tb_listaClientes->verticalHeader()->setVisible(false);
        ui->tb_listaClientes->setStyleSheet("QTableView {selection-background-color:blue}");

    } else {
        QMessageBox::warning(this,"ERRO","Erro ao pesquisar clientes");
    }
}

listaClientes::~listaClientes()
{
    delete ui;
}

void listaClientes::on_btn_voltar_clicked()
{
    this->close();
}

