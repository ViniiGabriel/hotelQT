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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaAvaliacao
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *a1;
    QCheckBox *a2;
    QCheckBox *a3;
    QCheckBox *a4;
    QCheckBox *checkBox_5;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *telaAvaliacao)
    {
        if (telaAvaliacao->objectName().isEmpty())
            telaAvaliacao->setObjectName("telaAvaliacao");
        telaAvaliacao->resize(381, 206);
        label_2 = new QLabel(telaAvaliacao);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 321, 51));
        QFont font;
        font.setPointSize(21);
        label_2->setFont(font);
        pushButton = new QPushButton(telaAvaliacao);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 160, 171, 31));
        widget = new QWidget(telaAvaliacao);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 80, 221, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        a1 = new QCheckBox(widget);
        a1->setObjectName("a1");

        horizontalLayout->addWidget(a1);

        a2 = new QCheckBox(widget);
        a2->setObjectName("a2");

        horizontalLayout->addWidget(a2);

        a3 = new QCheckBox(widget);
        a3->setObjectName("a3");

        horizontalLayout->addWidget(a3);

        a4 = new QCheckBox(widget);
        a4->setObjectName("a4");

        horizontalLayout->addWidget(a4);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName("checkBox_5");

        horizontalLayout->addWidget(checkBox_5);

        widget1 = new QWidget(telaAvaliacao);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(90, 110, 221, 20));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);


        retranslateUi(telaAvaliacao);

        QMetaObject::connectSlotsByName(telaAvaliacao);
    } // setupUi

    void retranslateUi(QDialog *telaAvaliacao)
    {
        telaAvaliacao->setWindowTitle(QCoreApplication::translate("telaAvaliacao", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("telaAvaliacao", "Avalie sua \303\272ltima estadia:", nullptr));
        pushButton->setText(QCoreApplication::translate("telaAvaliacao", "Enviar Avalia\303\247\303\243o", nullptr));
        a1->setText(QString());
        a2->setText(QString());
        a3->setText(QString());
        a4->setText(QString());
        checkBox_5->setText(QString());
        label->setText(QCoreApplication::translate("telaAvaliacao", "1", nullptr));
        label_3->setText(QCoreApplication::translate("telaAvaliacao", "2", nullptr));
        label_4->setText(QCoreApplication::translate("telaAvaliacao", "3", nullptr));
        label_5->setText(QCoreApplication::translate("telaAvaliacao", "4", nullptr));
        label_6->setText(QCoreApplication::translate("telaAvaliacao", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaAvaliacao: public Ui_telaAvaliacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAAVALIACAO_H
