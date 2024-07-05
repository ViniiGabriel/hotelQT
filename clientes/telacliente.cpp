#include "telacliente.h"
#include "ui_telacliente.h"
#include "telareserva.h"
#include "telanotificacoes.h"
#include "telaavaliacao.h"
#include "telaquarto.h"
#include <QPixmap>
#include <QLabel>
#include <QMessageBox>



telaCliente::telaCliente(QWidget *parent, int id)
    : QDialog(parent)
    , ui(new Ui::telaCliente)
    , m_id(id)
{
    ui->setupUi(this);
    QSqlQuery query;

    query.prepare("select * from tb_reservas where idCliente= :id");
    query.bindValue(":id", m_id);
    query.exec();
    while(query.next())
    {
        if(query.value(8).toString() == "nao")
        {
            telaAvaliacao tela(nullptr, query.value(0).toInt());
            tela.setModal(true);
            tela.exec();
            query.prepare("update tb_reservas set avaliado = :s where idCliente= :id");
            query.bindValue(":s", "sim");
            query.bindValue(":id", m_id);
            if(!query.exec())
            {
                QMessageBox::warning(this,"Erro", "erro");
        }
    }
    }



    query.prepare("select * from tb_clientes where id= :id");
    query.bindValue(":id", m_id);
    query.exec();
    query.first();
    ui->txt_nome->setText(query.value(1).toString());
    ui->txt_id->setText(query.value(0).toString());

    query.prepare("select * from tb_quartos");
    query.exec();
    int linha=0;
    ui->tb_menu->setColumnCount(3);
    while(query.next())
    {
        ui->tb_menu->insertRow(linha);
        ui->tb_menu->setItem(linha, 0, new QTableWidgetItem(query.value(0).toString()));
        QString text = query.value(2).toString() + "\n\n" + query.value(3).toString();
        ui->tb_menu->setItem(linha, 1, new QTableWidgetItem(text));
        ui->tb_menu->setRowHeight(linha, 40);


        QString textValue = "Diária: R$" + query.value(15).toString();
        ui->tb_menu->setItem(linha, 2, new QTableWidgetItem(textValue));
        linha++;
    }

    ui->tb_menu->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tb_menu->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tb_menu->verticalHeader()->setVisible(false);
    ui->tb_menu->horizontalHeader()->setVisible(false);
    ui->tb_menu->setColumnWidth(0, 0);
    ui->tb_menu->setColumnWidth(1, 490);
    ui->tb_menu->setColumnWidth(2, 70);
    ui->tb_menu->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tb_menu->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tb_menu->selectRow(0);


}

telaCliente::~telaCliente()
{
    delete ui;
}


void telaCliente::on_tb_menu_cellDoubleClicked()
{
    int m_row = ui->tb_menu->currentRow();
    int id = ui->tb_menu->item(m_row , 0)->text().toInt();
    telaQuarto tela(nullptr, id, m_id);
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_reservas_clicked()
{
    telaReserva tela(nullptr, m_id);
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_notificacoes_clicked()
{
    telaNotificacoes tela;
    tela.setModal(true);
    tela.exec();
}


void telaCliente::on_btn_avaliacoes_clicked()
{

}

