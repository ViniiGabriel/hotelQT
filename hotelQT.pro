QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientes/cadastrocliente.cpp \
    clientes/telaPagamento/pagamentotela.cpp \
    clientes/telaavaliacao.cpp \
    clientes/telacliente.cpp \
    clientes/telalogin.cpp \
    clientes/telanotificacoes.cpp \
    clientes/telaquarto.cpp \
    clientes/telareserva.cpp \
    colaboradores/cadastrocolaborador.cpp \
    colaboradores/cadastroquartos.cpp \
    colaboradores/editarcliente.cpp \
    colaboradores/listaQuartos/telafiltrar.cpp \
    colaboradores/listaclientes.cpp \
    colaboradores/listaquartos.cpp \
    colaboradores/reservastela.cpp \
    colaboradores/telacolaborador.cpp \
    colaboradores/telalogincolaborador.cpp \
    colaboradores/telanotificacoescolaborador.cpp \
    main.cpp \
    telainicial.cpp

HEADERS += \
    clientes/cadastrocliente.h \
    clientes/reservas/reservas.h \
    clientes/telaPagamento/pagamentotela.h \
    clientes/telaavaliacao.h \
    clientes/telacliente.h \
    clientes/telalogin.h \
    clientes/telanotificacoes.h \
    clientes/telaquarto.h \
    clientes/telareserva.h \
    colaboradores/cadastrocolaborador.h \
    colaboradores/cadastroquartos.h \
    colaboradores/editarcliente.h \
    colaboradores/listaQuartos/telafiltrar.h \
    colaboradores/listaclientes.h \
    colaboradores/listaquartos.h \
    colaboradores/quartos/QuartoComfort.h \
    colaboradores/quartos/QuartoMaster.h \
    colaboradores/quartos/QuartoSimples.h \
    colaboradores/quartos/QuartoSuite.h \
    colaboradores/quartos/Quartos.h \
    colaboradores/reservastela.h \
    colaboradores/telacolaborador.h \
    colaboradores/telalogincolaborador.h \
    colaboradores/telanotificacoescolaborador.h \
    telainicial.h

FORMS += \
    clientes/cadastrocliente.ui \
    clientes/telaPagamento/pagamentotela.ui \
    clientes/telaavaliacao.ui \
    clientes/telacliente.ui \
    clientes/telalogin.ui \
    clientes/telanotificacoes.ui \
    clientes/telaquarto.ui \
    clientes/telareserva.ui \
    colaboradores/cadastrocolaborador.ui \
    colaboradores/cadastroquartos.ui \
    colaboradores/editarcliente.ui \
    colaboradores/listaQuartos/telafiltrar.ui \
    colaboradores/listaclientes.ui \
    colaboradores/listaquartos.ui \
    colaboradores/reservastela.ui \
    colaboradores/telacolaborador.ui \
    colaboradores/telalogincolaborador.ui \
    colaboradores/telanotificacoescolaborador.ui \
    telainicial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    dataBase/db_hotel
