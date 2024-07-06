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
    tela = new telaFiltrar(this);
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
    telaNotificacoes tela(nullptr, m_id);
    tela.setModal(true);
    tela.exec();
}



void telaCliente::on_btn_servico_clicked()
{
    QSqlQuery query;
    int cont = 0;
    query.prepare("select * from tb_reservas where idCliente = :id and estado = :estado");
    query.bindValue(":id", m_id);
    query.bindValue(":estado", "ocupado");
    query.exec();
    while(query.next()) {
        cont++;
    }
    if(cont > 0) {
        QString notif = "O cliente id "+QString::number(m_id)+" solicitou o serviço de limpeza";
        query.prepare("insert into tb_notificacoesColaborador (notificacao) values (:notif)");
        query.bindValue(":notif", notif);
        if(query.exec())
        {
            QMessageBox::information(this,"Sucesso","Seu pedido já foi solicitado, em breve um colaborador atenderá");
        }
    } else {
        QMessageBox::warning(this,"Erro","Você não está em estadia");
    }

}


void telaCliente::on_btn_filtrar_clicked()
{
    tela->show();
}


void telaCliente::on_btn_aplicarFiltros_clicked()
{
    bool verific = false;
    QString codigo = "select * from tb_quartos where ";

    QSqlQuery query;

    QStringList conditions;

    if (tela->wifiTrue()) {
        conditions << "wifi = :wifi";
        verific = true;
    }
    if (tela->arTrue()) {
        conditions << "ar = :ar";
        verific = true;
    }
    if (tela->tvTrue()) {
        conditions << "tv = :tv";
        verific = true;
    }
    if (tela->sacadaTrue()) {
        conditions << "sacada = :sacada";
        verific = true;
    }
    if (tela->cofreTrue()) {
        conditions << "cofre = :cofre";
        verific = true;
    }
    if (tela->cafeTrue()) {
        conditions << "cafe = :cafe";
        verific = true;
    }
    if (tela->roupaoTrue()) {
        conditions << "roupao = :roupao";
        verific = true;
    }
    if (tela->higieneTrue()) {
        conditions << "higiene = :higiene";
        verific = true;
    }
    if (tela->servicoTrue()) {
        conditions << "servicoQuarto = :servico";
        verific = true;
    }
    if (tela->miniBarTrue()) {
        conditions << "minibar = :minibar";
        verific = true;
    }
    if (tela->banheiraTrue()) {
        conditions << "banheira = :banheira";
        verific = true;
    }

    codigo += conditions.join(" and ");
    if (verific) {
        query.prepare(codigo);
        query.bindValue(":wifi", "true");
        query.bindValue(":ar", "true");
        query.bindValue(":tv", "true");
        query.bindValue(":sacada", "true");
        query.bindValue(":banheira", "true");
        query.bindValue(":cofre", "true");
        query.bindValue(":cafe", "true");
        query.bindValue(":roupao", "true");
        query.bindValue(":higiene", "true");
        query.bindValue(":servico", "true");
        query.bindValue(":minibar", "true");

        if (!query.exec()) {
            qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        } else {
            ui->tb_menu->clear();
            ui->tb_menu->setRowCount(0);
            int linha = 0;
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
    } else {
        query.prepare("select * from tb_quartos");
        if(query.exec())
        {
            ui->tb_menu->clear();
            ui->tb_menu->setRowCount(0);
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
    }
}

