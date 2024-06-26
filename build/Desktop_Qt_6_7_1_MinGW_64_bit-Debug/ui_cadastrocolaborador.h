/********************************************************************************
** Form generated from reading UI file 'cadastrocolaborador.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROCOLABORADOR_H
#define UI_CADASTROCOLABORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cadastroColaborador
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_endereco;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *txt_cargo;

    void setupUi(QDialog *cadastroColaborador)
    {
        if (cadastroColaborador->objectName().isEmpty())
            cadastroColaborador->setObjectName("cadastroColaborador");
        cadastroColaborador->resize(461, 211);
        pushButton = new QPushButton(cadastroColaborador);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 170, 201, 31));
        widget = new QWidget(cadastroColaborador);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 441, 146));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName("txt_nome");

        horizontalLayout_5->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName("txt_username");

        horizontalLayout_4->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName("txt_senha");
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txt_endereco = new QLineEdit(widget);
        txt_endereco->setObjectName("txt_endereco");

        horizontalLayout_2->addWidget(txt_endereco);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        txt_cargo = new QLineEdit(widget);
        txt_cargo->setObjectName("txt_cargo");

        horizontalLayout->addWidget(txt_cargo);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(cadastroColaborador);

        QMetaObject::connectSlotsByName(cadastroColaborador);
    } // setupUi

    void retranslateUi(QDialog *cadastroColaborador)
    {
        cadastroColaborador->setWindowTitle(QCoreApplication::translate("cadastroColaborador", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("cadastroColaborador", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("cadastroColaborador", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("cadastroColaborador", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("cadastroColaborador", "Senha:", nullptr));
        label_2->setText(QCoreApplication::translate("cadastroColaborador", "Endere\303\247o:", nullptr));
        label_5->setText(QCoreApplication::translate("cadastroColaborador", "Cargo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastroColaborador: public Ui_cadastroColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROCOLABORADOR_H
