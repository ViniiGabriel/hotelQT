#include "listaquartos.h"
#include "ui_listaquartos.h"
#include "listaquartos/telafiltrar.h"

listaQuartos::listaQuartos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::listaQuartos)
{
    ui->setupUi(this);
}

listaQuartos::~listaQuartos()
{
    delete ui;
}


void listaQuartos::on_btn_filtrar_clicked()
{
    telaFiltrar tela;
    tela.setModal(true);
    tela.exec();
}

