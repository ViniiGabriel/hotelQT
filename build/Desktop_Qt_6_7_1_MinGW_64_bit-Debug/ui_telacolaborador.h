/********************************************************************************
** Form generated from reading UI file 'telacolaborador.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACOLABORADOR_H
#define UI_TELACOLABORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaColaborador
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *txt_nome;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_cadastroQuarto;
    QPushButton *btn_listaQuartos;
    QPushButton *btn_reservas;
    QPushButton *btn_listaClientes;
    QPushButton *btn_cadastrarColaborador;

    void setupUi(QDialog *telaColaborador)
    {
        if (telaColaborador->objectName().isEmpty())
            telaColaborador->setObjectName("telaColaborador");
        telaColaborador->resize(649, 359);
        layoutWidget = new QWidget(telaColaborador);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 20, 561, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift SemiBold SemiConden")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txt_nome = new QLabel(layoutWidget);
        txt_nome->setObjectName("txt_nome");
        txt_nome->setFont(font);

        horizontalLayout->addWidget(txt_nome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(telaColaborador);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(41, 62, 561, 271));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_cadastroQuarto = new QPushButton(layoutWidget1);
        btn_cadastroQuarto->setObjectName("btn_cadastroQuarto");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_cadastroQuarto->sizePolicy().hasHeightForWidth());
        btn_cadastroQuarto->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_cadastroQuarto);

        btn_listaQuartos = new QPushButton(layoutWidget1);
        btn_listaQuartos->setObjectName("btn_listaQuartos");
        sizePolicy.setHeightForWidth(btn_listaQuartos->sizePolicy().hasHeightForWidth());
        btn_listaQuartos->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_listaQuartos);

        btn_reservas = new QPushButton(layoutWidget1);
        btn_reservas->setObjectName("btn_reservas");
        sizePolicy.setHeightForWidth(btn_reservas->sizePolicy().hasHeightForWidth());
        btn_reservas->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_reservas);

        btn_listaClientes = new QPushButton(layoutWidget1);
        btn_listaClientes->setObjectName("btn_listaClientes");
        sizePolicy.setHeightForWidth(btn_listaClientes->sizePolicy().hasHeightForWidth());
        btn_listaClientes->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_listaClientes);

        btn_cadastrarColaborador = new QPushButton(layoutWidget1);
        btn_cadastrarColaborador->setObjectName("btn_cadastrarColaborador");
        sizePolicy.setHeightForWidth(btn_cadastrarColaborador->sizePolicy().hasHeightForWidth());
        btn_cadastrarColaborador->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_cadastrarColaborador);


        retranslateUi(telaColaborador);

        QMetaObject::connectSlotsByName(telaColaborador);
    } // setupUi

    void retranslateUi(QDialog *telaColaborador)
    {
        telaColaborador->setWindowTitle(QCoreApplication::translate("telaColaborador", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaColaborador", "Bem vindo ", nullptr));
        txt_nome->setText(QCoreApplication::translate("telaColaborador", "Nome", nullptr));
        btn_cadastroQuarto->setText(QCoreApplication::translate("telaColaborador", "Cadastrar novo quarto", nullptr));
        btn_listaQuartos->setText(QCoreApplication::translate("telaColaborador", "Lista de quartos", nullptr));
        btn_reservas->setText(QCoreApplication::translate("telaColaborador", "Reservas", nullptr));
        btn_listaClientes->setText(QCoreApplication::translate("telaColaborador", "Lista de clientes", nullptr));
        btn_cadastrarColaborador->setText(QCoreApplication::translate("telaColaborador", "Cadastrar novo colaborador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaColaborador: public Ui_telaColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACOLABORADOR_H
