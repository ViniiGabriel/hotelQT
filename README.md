# hotelQT
Sistema de Gestão de Hotelaria em C++/Qt
Este projeto é um sistema de gerenciamento de hotelaria desenvolvido em C++ com o framework Qt. A aplicação oferece uma interface gráfica completa e funcionalidades distintas para dois tipos de usuários: clientes e colaboradores, conectando-se a um banco de dados SQLite para gerenciar todas as operações.

Funcionalidades Principais
O sistema é dividido em dois módulos principais:

Portal do Cliente

Login e Cadastro: Clientes podem criar uma conta e fazer login no sistema.


Visualização de Quartos: Permite aos clientes ver os detalhes dos quartos disponíveis.


Reservas: Funcionalidade para o cliente realizar e gerenciar suas próprias reservas.


Pagamento: Uma interface dedicada para a realização de pagamentos das reservas.


Avaliação: Tela para que os clientes possam avaliar sua estadia.


Notificações: Área para o cliente visualizar notificações importantes.

Painel do Colaborador

Login de Colaborador: Acesso restrito para funcionários do hotel.


Gestão de Clientes: Os colaboradores podem cadastrar novos clientes e editar informações dos clientes existentes.

Gestão de Quartos:

Cadastro de novos quartos no sistema.

Uma lista detalhada dos quartos, com opções de filtro.

O sistema suporta diferentes tipos de quartos, como Simples, Comfort, Suíte e Master.


Gestão de Reservas: Visualização e gerenciamento de todas as reservas feitas pelos clientes.


Painel de Controle: Uma tela principal que centraliza as funções do colaborador.

Tecnologias Utilizadas

Linguagem: C++17 


Framework: Qt 6 (com módulos Core, GUI, Widgets e SQL) 


Banco de Dados: SQLite, com o arquivo de banco de dados localizado em dataBase/db_hotel.

IDE: Desenvolvido para ser compilado e executado com o Qt Creator.

Estrutura do Projeto
O código-fonte é organizado de forma modular para facilitar a manutenção e o desenvolvimento:

main.cpp: Ponto de entrada da aplicação.

telainicial: Janela inicial que direciona o usuário para a área do cliente ou do colaborador.

/clientes: Contém todos os arquivos de código-fonte (.cpp, .h) e de interface (.ui) relacionados às funcionalidades do cliente.

/colaboradores: Contém todos os arquivos (.cpp, .h, .ui) relacionados às funcionalidades dos funcionários.

/dataBase: Inclui o arquivo do banco de dados SQLite.

/imagens: Armazena as imagens utilizadas na interface do usuário.

Este projeto serve como um exemplo prático de uma aplicação desktop robusta, demonstrando o uso de banco de dados, programação orientada a objetos e design de interfaces gráficas com C++ e Qt.
