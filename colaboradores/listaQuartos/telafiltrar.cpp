#include "telafiltrar.h"
#include "ui_telafiltrar.h"

telaFiltrar::telaFiltrar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telaFiltrar)
{
    ui->setupUi(this);
}

telaFiltrar::~telaFiltrar()
{
    delete ui;
}

bool telaFiltrar::wifiTrue()
{
    if(ui->check_wifi->isChecked())
    {
        return true;
    }
    return false;
}

bool telaFiltrar::arTrue()
{
    if(ui->check_ar->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::tvTrue()
{
    if(ui->check_tv->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::sacadaTrue()
{
    if(ui->check_sacada->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::roupaoTrue()
{
    if(ui->check_roupao->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::higieneTrue()
{
    if(ui->check_higiene->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::cofreTrue()
{
    if(ui->check_cofre->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::banheiraTrue()
{
    if(ui->check_banheira->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::cafeTrue()
{
    if(ui->check_cafe->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::servicoTrue()
{
    if(ui->check_servico->isChecked())
    {
        return true;
    }
    return false;
}
bool telaFiltrar::miniBarTrue()
{
    if(ui->check_miniBar->isChecked())
    {
        return true;
    }
    return false;
}

