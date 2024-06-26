#ifndef TELARESERVAS_H
#define TELARESERVAS_H

#include <QDialog>

namespace Ui {
class telaReservas;
}

class telaReservas : public QDialog
{
    Q_OBJECT

public:
    explicit telaReservas(QWidget *parent = nullptr);
    ~telaReservas();

private:
    Ui::telaReservas *ui;
};

#endif // TELARESERVAS_H
