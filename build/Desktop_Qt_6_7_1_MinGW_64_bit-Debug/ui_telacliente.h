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

QT_BEGIN_NAMESPACE

class Ui_telaCliente
{
public:

    void setupUi(QDialog *telaCliente)
    {
        if (telaCliente->objectName().isEmpty())
            telaCliente->setObjectName("telaCliente");
        telaCliente->resize(963, 593);

        retranslateUi(telaCliente);

        QMetaObject::connectSlotsByName(telaCliente);
    } // setupUi

    void retranslateUi(QDialog *telaCliente)
    {
        telaCliente->setWindowTitle(QCoreApplication::translate("telaCliente", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaCliente: public Ui_telaCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTE_H
