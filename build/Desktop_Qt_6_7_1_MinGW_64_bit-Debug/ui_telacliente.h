/********************************************************************************
** Form generated from reading UI file 'telacliente.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACLIENTE_H
#define UI_TELACLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaCliente
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *txt_nome;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *txt_id;
    QTableWidget *tb_menu;
    QPushButton *btn_reservas;
    QPushButton *btn_notificacoes;
    QPushButton *btn_avaliacoes;

    void setupUi(QDialog *telaCliente)
    {
        if (telaCliente->objectName().isEmpty())
            telaCliente->setObjectName("telaCliente");
        telaCliente->resize(804, 535);
        layoutWidget = new QWidget(telaCliente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(29, 28, 761, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold SemiConden")});
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        txt_nome = new QLabel(layoutWidget);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setFont(font);

        horizontalLayout->addWidget(txt_nome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txt_id = new QLabel(layoutWidget);
        txt_id->setObjectName("txt_id");
        txt_id->setFont(font);

        horizontalLayout->addWidget(txt_id);

        tb_menu = new QTableWidget(telaCliente);
        tb_menu->setObjectName("tb_menu");
        tb_menu->setGeometry(QRect(30, 80, 561, 421));
        btn_reservas = new QPushButton(telaCliente);
        btn_reservas->setObjectName("btn_reservas");
        btn_reservas->setGeometry(QRect(600, 80, 191, 51));
        btn_notificacoes = new QPushButton(telaCliente);
        btn_notificacoes->setObjectName("btn_notificacoes");
        btn_notificacoes->setGeometry(QRect(600, 140, 191, 51));
        btn_avaliacoes = new QPushButton(telaCliente);
        btn_avaliacoes->setObjectName("btn_avaliacoes");
        btn_avaliacoes->setGeometry(QRect(600, 200, 191, 51));

        retranslateUi(telaCliente);

        QMetaObject::connectSlotsByName(telaCliente);
    } // setupUi

    void retranslateUi(QDialog *telaCliente)
    {
        telaCliente->setWindowTitle(QCoreApplication::translate("telaCliente", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("telaCliente", "Bem vindo ", nullptr));
        txt_nome->setText(QCoreApplication::translate("telaCliente", "Nome", nullptr));
        label->setText(QCoreApplication::translate("telaCliente", "ID:", nullptr));
        txt_id->setText(QCoreApplication::translate("telaCliente", "Nome", nullptr));
        btn_reservas->setText(QCoreApplication::translate("telaCliente", "Reservas", nullptr));
        btn_notificacoes->setText(QCoreApplication::translate("telaCliente", "Notifica\303\247\303\265es", nullptr));
        btn_avaliacoes->setText(QCoreApplication::translate("telaCliente", "Avalia\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaCliente: public Ui_telaCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTE_H
