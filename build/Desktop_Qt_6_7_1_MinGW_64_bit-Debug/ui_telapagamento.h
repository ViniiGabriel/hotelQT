/********************************************************************************
** Form generated from reading UI file 'telapagamento.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPAGAMENTO_H
#define UI_TELAPAGAMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_telaPagamento
{
public:

    void setupUi(QDialog *telaPagamento)
    {
        if (telaPagamento->objectName().isEmpty())
            telaPagamento->setObjectName("telaPagamento");
        telaPagamento->resize(400, 300);

        retranslateUi(telaPagamento);

        QMetaObject::connectSlotsByName(telaPagamento);
    } // setupUi

    void retranslateUi(QDialog *telaPagamento)
    {
        telaPagamento->setWindowTitle(QCoreApplication::translate("telaPagamento", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaPagamento: public Ui_telaPagamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPAGAMENTO_H
