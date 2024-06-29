#ifndef LISTAQUARTOS_H
#define LISTAQUARTOS_H

#include <QDialog>
#include "listaquartos/telafiltrar.h"

namespace Ui {
class listaQuartos;
}

class listaQuartos : public QDialog
{
    Q_OBJECT

public:
    explicit listaQuartos(QWidget *parent = nullptr);
    ~listaQuartos();

private slots:

    void on_btn_filtrar_clicked();

    void on_btn_excluir_clicked();

    void on_btn_aplicarfiltros_clicked();

private:
    Ui::listaQuartos *ui;
    telaFiltrar *tela;
};

#endif // LISTAQUARTOS_H
