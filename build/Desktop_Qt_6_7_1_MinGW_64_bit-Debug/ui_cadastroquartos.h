/********************************************************************************
** Form generated from reading UI file 'cadastroquartos.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROQUARTOS_H
#define UI_CADASTROQUARTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroQuartos
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_valor;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_tituloQuarto;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *txt_descricao;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *check_wifi;
    QCheckBox *check_ar;
    QCheckBox *check_tv;
    QCheckBox *check_sacada;
    QCheckBox *check_cofre;
    QCheckBox *check_banheira;
    QCheckBox *check_cafe;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *check_roupao;
    QCheckBox *check_higiene;
    QCheckBox *check_servico;
    QCheckBox *check_miniBar;
    QComboBox *boxTipoQuarto;
    QLabel *label;

    void setupUi(QDialog *cadastroQuartos)
    {
        if (cadastroQuartos->objectName().isEmpty())
            cadastroQuartos->setObjectName("cadastroQuartos");
        cadastroQuartos->resize(635, 458);
        buttonBox = new QDialogButtonBox(cadastroQuartos);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(cadastroQuartos);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 310, 234, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        txt_valor = new QLineEdit(layoutWidget);
        txt_valor->setObjectName("txt_valor");

        horizontalLayout_3->addWidget(txt_valor);

        layoutWidget1 = new QWidget(cadastroQuartos);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(23, 47, 581, 248));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        txt_tituloQuarto = new QLineEdit(layoutWidget1);
        txt_tituloQuarto->setObjectName("txt_tituloQuarto");

        horizontalLayout->addWidget(txt_tituloQuarto);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        txt_descricao = new QTextEdit(layoutWidget1);
        txt_descricao->setObjectName("txt_descricao");

        verticalLayout->addWidget(txt_descricao);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget2 = new QWidget(cadastroQuartos);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 340, 524, 76));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        check_wifi = new QCheckBox(layoutWidget2);
        check_wifi->setObjectName("check_wifi");

        horizontalLayout_5->addWidget(check_wifi);

        check_ar = new QCheckBox(layoutWidget2);
        check_ar->setObjectName("check_ar");

        horizontalLayout_5->addWidget(check_ar);

        check_tv = new QCheckBox(layoutWidget2);
        check_tv->setObjectName("check_tv");

        horizontalLayout_5->addWidget(check_tv);

        check_sacada = new QCheckBox(layoutWidget2);
        check_sacada->setObjectName("check_sacada");

        horizontalLayout_5->addWidget(check_sacada);

        check_cofre = new QCheckBox(layoutWidget2);
        check_cofre->setObjectName("check_cofre");

        horizontalLayout_5->addWidget(check_cofre);

        check_banheira = new QCheckBox(layoutWidget2);
        check_banheira->setObjectName("check_banheira");

        horizontalLayout_5->addWidget(check_banheira);

        check_cafe = new QCheckBox(layoutWidget2);
        check_cafe->setObjectName("check_cafe");

        horizontalLayout_5->addWidget(check_cafe);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        check_roupao = new QCheckBox(layoutWidget2);
        check_roupao->setObjectName("check_roupao");

        horizontalLayout_6->addWidget(check_roupao);

        check_higiene = new QCheckBox(layoutWidget2);
        check_higiene->setObjectName("check_higiene");

        horizontalLayout_6->addWidget(check_higiene);

        check_servico = new QCheckBox(layoutWidget2);
        check_servico->setObjectName("check_servico");

        horizontalLayout_6->addWidget(check_servico);

        check_miniBar = new QCheckBox(layoutWidget2);
        check_miniBar->setObjectName("check_miniBar");

        horizontalLayout_6->addWidget(check_miniBar);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout_3);

        boxTipoQuarto = new QComboBox(cadastroQuartos);
        boxTipoQuarto->addItem(QString());
        boxTipoQuarto->addItem(QString());
        boxTipoQuarto->addItem(QString());
        boxTipoQuarto->addItem(QString());
        boxTipoQuarto->setObjectName("boxTipoQuarto");
        boxTipoQuarto->setGeometry(QRect(110, 20, 67, 22));
        label = new QLabel(cadastroQuartos);
        label->setObjectName("label");
        label->setGeometry(QRect(24, 21, 80, 16));

        retranslateUi(cadastroQuartos);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, cadastroQuartos, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, cadastroQuartos, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(cadastroQuartos);
    } // setupUi

    void retranslateUi(QDialog *cadastroQuartos)
    {
        cadastroQuartos->setWindowTitle(QCoreApplication::translate("cadastroQuartos", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("cadastroQuartos", "Valor da di\303\241ria: R$", nullptr));
        label_2->setText(QCoreApplication::translate("cadastroQuartos", "Titulo do quarto:", nullptr));
        label_3->setText(QCoreApplication::translate("cadastroQuartos", "Descri\303\247\303\243o do quarto:", nullptr));
        label_5->setText(QCoreApplication::translate("cadastroQuartos", "Adicionais:", nullptr));
        check_wifi->setText(QCoreApplication::translate("cadastroQuartos", "Wi-Fi", nullptr));
        check_ar->setText(QCoreApplication::translate("cadastroQuartos", "Ar condicionado", nullptr));
        check_tv->setText(QCoreApplication::translate("cadastroQuartos", "TV", nullptr));
        check_sacada->setText(QCoreApplication::translate("cadastroQuartos", "Sacada", nullptr));
        check_cofre->setText(QCoreApplication::translate("cadastroQuartos", "Cofre", nullptr));
        check_banheira->setText(QCoreApplication::translate("cadastroQuartos", "Banheira", nullptr));
        check_cafe->setText(QCoreApplication::translate("cadastroQuartos", "Caf\303\251 da manh\303\243", nullptr));
        check_roupao->setText(QCoreApplication::translate("cadastroQuartos", "Roup\303\243o e chinelos", nullptr));
        check_higiene->setText(QCoreApplication::translate("cadastroQuartos", "Produtos de higiene", nullptr));
        check_servico->setText(QCoreApplication::translate("cadastroQuartos", "Servi\303\247o de quarto", nullptr));
        check_miniBar->setText(QCoreApplication::translate("cadastroQuartos", "Mini bar", nullptr));
        boxTipoQuarto->setItemText(0, QCoreApplication::translate("cadastroQuartos", "Simples", nullptr));
        boxTipoQuarto->setItemText(1, QCoreApplication::translate("cadastroQuartos", "Comfort", nullptr));
        boxTipoQuarto->setItemText(2, QCoreApplication::translate("cadastroQuartos", "Su\303\255te", nullptr));
        boxTipoQuarto->setItemText(3, QCoreApplication::translate("cadastroQuartos", "Master", nullptr));

        label->setText(QCoreApplication::translate("cadastroQuartos", "Tipo de quarto:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroQuartos: public Ui_cadastroQuartos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROQUARTOS_H
