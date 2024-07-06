/********************************************************************************
** Form generated from reading UI file 'listaquartos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAQUARTOS_H
#define UI_LISTAQUARTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaQuartos
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTableWidget *tb_listaQuartos;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_editar;
    QPushButton *btn_excluir;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_filtrar;
    QPushButton *btn_aplicarfiltros;

    void setupUi(QDialog *listaQuartos)
    {
        if (listaQuartos->objectName().isEmpty())
            listaQuartos->setObjectName("listaQuartos");
        listaQuartos->resize(664, 525);
        buttonBox = new QDialogButtonBox(listaQuartos);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(320, 490, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(listaQuartos);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 281, 41));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        tb_listaQuartos = new QTableWidget(listaQuartos);
        tb_listaQuartos->setObjectName("tb_listaQuartos");
        tb_listaQuartos->setGeometry(QRect(20, 90, 621, 361));
        layoutWidget = new QWidget(listaQuartos);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 460, 195, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_editar = new QPushButton(layoutWidget);
        btn_editar->setObjectName("btn_editar");

        horizontalLayout->addWidget(btn_editar);

        btn_excluir = new QPushButton(layoutWidget);
        btn_excluir->setObjectName("btn_excluir");

        horizontalLayout->addWidget(btn_excluir);

        layoutWidget1 = new QWidget(listaQuartos);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 60, 200, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_filtrar = new QPushButton(layoutWidget1);
        btn_filtrar->setObjectName("btn_filtrar");

        horizontalLayout_2->addWidget(btn_filtrar);

        btn_aplicarfiltros = new QPushButton(layoutWidget1);
        btn_aplicarfiltros->setObjectName("btn_aplicarfiltros");

        horizontalLayout_2->addWidget(btn_aplicarfiltros);


        retranslateUi(listaQuartos);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, listaQuartos, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, listaQuartos, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(listaQuartos);
    } // setupUi

    void retranslateUi(QDialog *listaQuartos)
    {
        listaQuartos->setWindowTitle(QCoreApplication::translate("listaQuartos", "Quartos", nullptr));
        label->setText(QCoreApplication::translate("listaQuartos", "Lista de Quartos", nullptr));
        btn_editar->setText(QCoreApplication::translate("listaQuartos", "Editar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("listaQuartos", "Excluir", nullptr));
        btn_filtrar->setText(QCoreApplication::translate("listaQuartos", "Filtrar", nullptr));
        btn_aplicarfiltros->setText(QCoreApplication::translate("listaQuartos", "Aplicar filtros", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaQuartos: public Ui_listaQuartos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAQUARTOS_H
