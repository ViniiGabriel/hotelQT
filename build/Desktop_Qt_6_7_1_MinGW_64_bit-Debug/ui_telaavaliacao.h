/********************************************************************************
** Form generated from reading UI file 'telaavaliacao.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAAVALIACAO_H
#define UI_TELAAVALIACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaAvaliacao
{
public:
    QLabel *label_2;
    QPushButton *btn_enviar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QRadioButton *a1;
    QRadioButton *a2;
    QRadioButton *a3;
    QRadioButton *a4;
    QRadioButton *a5;

    void setupUi(QDialog *telaAvaliacao)
    {
        if (telaAvaliacao->objectName().isEmpty())
            telaAvaliacao->setObjectName("telaAvaliacao");
        telaAvaliacao->resize(381, 206);
        label_2 = new QLabel(telaAvaliacao);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 20, 231, 51));
        QFont font;
        font.setPointSize(21);
        label_2->setFont(font);
        btn_enviar = new QPushButton(telaAvaliacao);
        btn_enviar->setObjectName("btn_enviar");
        btn_enviar->setGeometry(QRect(100, 160, 171, 31));
        layoutWidget = new QWidget(telaAvaliacao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 110, 221, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        a1 = new QRadioButton(telaAvaliacao);
        a1->setObjectName("a1");
        a1->setGeometry(QRect(90, 80, 16, 20));
        a2 = new QRadioButton(telaAvaliacao);
        a2->setObjectName("a2");
        a2->setGeometry(QRect(130, 80, 16, 20));
        a3 = new QRadioButton(telaAvaliacao);
        a3->setObjectName("a3");
        a3->setGeometry(QRect(180, 80, 16, 20));
        a4 = new QRadioButton(telaAvaliacao);
        a4->setObjectName("a4");
        a4->setGeometry(QRect(220, 80, 16, 20));
        a5 = new QRadioButton(telaAvaliacao);
        a5->setObjectName("a5");
        a5->setGeometry(QRect(270, 80, 16, 20));

        retranslateUi(telaAvaliacao);

        QMetaObject::connectSlotsByName(telaAvaliacao);
    } // setupUi

    void retranslateUi(QDialog *telaAvaliacao)
    {
        telaAvaliacao->setWindowTitle(QCoreApplication::translate("telaAvaliacao", "Avalie sua estadia", nullptr));
        label_2->setText(QCoreApplication::translate("telaAvaliacao", "Avalie sua estadia:", nullptr));
        btn_enviar->setText(QCoreApplication::translate("telaAvaliacao", "Enviar Avalia\303\247\303\243o", nullptr));
        label->setText(QCoreApplication::translate("telaAvaliacao", "1", nullptr));
        label_3->setText(QCoreApplication::translate("telaAvaliacao", "2", nullptr));
        label_4->setText(QCoreApplication::translate("telaAvaliacao", "3", nullptr));
        label_5->setText(QCoreApplication::translate("telaAvaliacao", "4", nullptr));
        label_6->setText(QCoreApplication::translate("telaAvaliacao", "5", nullptr));
        a1->setText(QString());
        a2->setText(QString());
        a3->setText(QString());
        a4->setText(QString());
        a5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class telaAvaliacao: public Ui_telaAvaliacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAAVALIACAO_H
