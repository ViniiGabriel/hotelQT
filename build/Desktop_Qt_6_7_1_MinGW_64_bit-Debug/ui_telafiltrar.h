/********************************************************************************
** Form generated from reading UI file 'telafiltrar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAFILTRAR_H
#define UI_TELAFILTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaFiltrar
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *check_wifi;
    QCheckBox *check_ar;
    QCheckBox *check_tv;
    QCheckBox *check_sacada;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *check_roupao;
    QCheckBox *check_higiene;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *check_cofre;
    QCheckBox *check_banheira;
    QCheckBox *check_cafe;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *check_servico;
    QCheckBox *check_miniBar;

    void setupUi(QDialog *telaFiltrar)
    {
        if (telaFiltrar->objectName().isEmpty())
            telaFiltrar->setObjectName("telaFiltrar");
        telaFiltrar->resize(297, 158);
        buttonBox = new QDialogButtonBox(telaFiltrar);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 120, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(telaFiltrar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 280, 108));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        check_wifi = new QCheckBox(widget);
        check_wifi->setObjectName("check_wifi");

        horizontalLayout->addWidget(check_wifi);

        check_ar = new QCheckBox(widget);
        check_ar->setObjectName("check_ar");

        horizontalLayout->addWidget(check_ar);

        check_tv = new QCheckBox(widget);
        check_tv->setObjectName("check_tv");

        horizontalLayout->addWidget(check_tv);

        check_sacada = new QCheckBox(widget);
        check_sacada->setObjectName("check_sacada");

        horizontalLayout->addWidget(check_sacada);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        check_roupao = new QCheckBox(widget);
        check_roupao->setObjectName("check_roupao");

        horizontalLayout_2->addWidget(check_roupao);

        check_higiene = new QCheckBox(widget);
        check_higiene->setObjectName("check_higiene");

        horizontalLayout_2->addWidget(check_higiene);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        check_cofre = new QCheckBox(widget);
        check_cofre->setObjectName("check_cofre");

        horizontalLayout_3->addWidget(check_cofre);

        check_banheira = new QCheckBox(widget);
        check_banheira->setObjectName("check_banheira");

        horizontalLayout_3->addWidget(check_banheira);

        check_cafe = new QCheckBox(widget);
        check_cafe->setObjectName("check_cafe");

        horizontalLayout_3->addWidget(check_cafe);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        check_servico = new QCheckBox(widget);
        check_servico->setObjectName("check_servico");

        horizontalLayout_4->addWidget(check_servico);

        check_miniBar = new QCheckBox(widget);
        check_miniBar->setObjectName("check_miniBar");

        horizontalLayout_4->addWidget(check_miniBar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(telaFiltrar);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, telaFiltrar, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, telaFiltrar, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(telaFiltrar);
    } // setupUi

    void retranslateUi(QDialog *telaFiltrar)
    {
        telaFiltrar->setWindowTitle(QCoreApplication::translate("telaFiltrar", "Dialog", nullptr));
        check_wifi->setText(QCoreApplication::translate("telaFiltrar", "Wi-Fi", nullptr));
        check_ar->setText(QCoreApplication::translate("telaFiltrar", "Ar condicionado", nullptr));
        check_tv->setText(QCoreApplication::translate("telaFiltrar", "TV", nullptr));
        check_sacada->setText(QCoreApplication::translate("telaFiltrar", "Sacada", nullptr));
        check_roupao->setText(QCoreApplication::translate("telaFiltrar", "Roup\303\243o e chinelos", nullptr));
        check_higiene->setText(QCoreApplication::translate("telaFiltrar", "Produtos de higiene", nullptr));
        check_cofre->setText(QCoreApplication::translate("telaFiltrar", "Cofre", nullptr));
        check_banheira->setText(QCoreApplication::translate("telaFiltrar", "Banheira", nullptr));
        check_cafe->setText(QCoreApplication::translate("telaFiltrar", "Caf\303\251 da manh\303\243", nullptr));
        check_servico->setText(QCoreApplication::translate("telaFiltrar", "Servi\303\247o de quarto", nullptr));
        check_miniBar->setText(QCoreApplication::translate("telaFiltrar", "Mini bar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaFiltrar: public Ui_telaFiltrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAFILTRAR_H