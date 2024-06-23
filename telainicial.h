#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui {
class telaInicial;
}
QT_END_NAMESPACE

class telaInicial : public QMainWindow
{
    Q_OBJECT

public:
    telaInicial(QWidget *parent = nullptr);
    ~telaInicial();

private slots:

    void on_btn_cliente_clicked();

    void on_btn_colaborador_clicked();

private:
    Ui::telaInicial *ui;
};
#endif // TELAINICIAL_H
