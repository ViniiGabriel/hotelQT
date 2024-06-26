#ifndef TELARESERVA_H
#define TELARESERVA_H

#include <QDialog>

namespace Ui {
class telaReserva;
}

class telaReserva : public QDialog
{
    Q_OBJECT

public:
    explicit telaReserva(QWidget *parent = nullptr);
    ~telaReserva();

private:
    Ui::telaReserva *ui;
};

#endif // TELARESERVA_H
