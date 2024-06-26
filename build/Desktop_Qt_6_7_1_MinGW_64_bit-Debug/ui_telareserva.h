/********************************************************************************
** Form generated from reading UI file 'telareserva.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELARESERVA_H
#define UI_TELARESERVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_telaReserva
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tb_reservas;
    QLabel *label;

    void setupUi(QDialog *telaReserva)
    {
        if (telaReserva->objectName().isEmpty())
            telaReserva->setObjectName("telaReserva");
        telaReserva->resize(676, 461);
        buttonBox = new QDialogButtonBox(telaReserva);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(320, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tb_reservas = new QTableWidget(telaReserva);
        tb_reservas->setObjectName("tb_reservas");
        tb_reservas->setGeometry(QRect(10, 50, 651, 361));
        label = new QLabel(telaReserva);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);

        retranslateUi(telaReserva);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaReserva, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaReserva, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaReserva);
    } // setupUi

    void retranslateUi(QDialog *telaReserva)
    {
        telaReserva->setWindowTitle(QCoreApplication::translate("telaReserva", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaReserva", "Lista de Reservas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaReserva: public Ui_telaReserva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARESERVA_H
