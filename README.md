🏨 Sistema de Gestão de Hotelaria
<p align="center">
Um sistema desktop completo para gerenciamento de hotéis, com portais dedicados para clientes e colaboradores.
</p>

📋 Sobre o Projeto
Este projeto é um sistema de gerenciamento de hotelaria desenvolvido em 

C++ com o framework Qt. A aplicação oferece uma interface gráfica completa e funcionalidades distintas para dois tipos de usuários: 

clientes e colaboradores, conectando-se a um banco de dados SQLite para gerenciar todas as operações.

✨ Funcionalidades Principais
O sistema é dividido em dois módulos principais, acessíveis a partir de uma tela de seleção inicial.

👤 Portal do Cliente
Login e Cadastro: Clientes podem criar uma conta e fazer login no sistema.

Visualização de Quartos: Permite aos clientes ver os detalhes dos quartos disponíveis.

Reservas: Funcionalidade para o cliente realizar e gerenciar suas próprias reservas.

Pagamento: Uma interface dedicada para a realização de pagamentos das reservas.

Avaliação: Tela para que os clientes possam avaliar sua estadia.

Notificações: Área para o cliente visualizar notificações importantes.

👨‍💼 Painel do Colaborador
Login Restrito: Acesso seguro para funcionários do hotel.

Gestão de Clientes: Os colaboradores podem cadastrar novos clientes e editar informações dos existentes.

Gestão de Quartos:

Cadastro de novos quartos no sistema.

Lista detalhada dos quartos com opções de filtro.

Suporte a diferentes tipos de quartos: 

QuartoSimples, QuartoComfort, QuartoSuite e QuartoMaster.

Gestão de Reservas: Visualização e gerenciamento de todas as reservas feitas pelos clientes.

Painel de Controle: Uma tela principal que centraliza as funções do colaborador.

🛠️ Tecnologias Utilizadas
Tecnologia	Descrição
C++17	
Linguagem principal utilizada para toda a lógica do sistema.

Qt 6	
Framework utilizado para a criação das interfaces gráficas (

Widgets) e interação com o banco de dados (SQL).

SQLite	Sistema de banco de dados leve e baseado em arquivo, utilizado para armazenar todos os dados da aplicação.
Qt Creator	IDE recomendada para compilar e executar o projeto.

Exportar para as Planilhas
🚀 Como Executar
Siga os passos abaixo para compilar e executar o projeto localmente.

Pré-requisitos
Qt 6 ou superior: Link para download do Qt

Compilador C++: (MSVC no Windows, GCC no Linux ou Clang no macOS)

Qt Creator: Geralmente instalado junto com o Qt.

Passos
Clone o repositório:

Bash

git clone https://github.com/seu-usuario/seu-repositorio.git
Abra o projeto no Qt Creator:

Abra o Qt Creator.

Vá em File > Open File or Project....

Navegue até a pasta clonada e selecione o arquivo hotelQT.pro.

Configure o Kit:

O Qt Creator deve detectar automaticamente os kits de compilação instalados. Selecione um kit compatível (ex: Desktop Qt 6.x.x).

Verifique o Banco de Dados:

Certifique-se de que o arquivo de banco de dados db_hotel está presente na pasta dataBase. O projeto está configurado para encontrá-lo no caminho relativo ../../dataBase/db_hotel a partir do diretório de compilação.

Compile e Execute:

Clique no botão Build (ícone de martelo) ou pressione Ctrl+B.

Clique no botão Run (ícone de play verde) ou pressione Ctrl+R.

📂 Estrutura do Projeto
A estrutura de arquivos foi pensada para ser modular e organizada, separando as responsabilidades de cada parte do sistema.

.
├── 📂 clientes/          # Fontes e UIs do portal do cliente
├── 📂 colaboradores/     # Fontes e UIs do painel do colaborador
├── 📂 dataBase/          # Contém o arquivo do banco de dados SQLite
├── 📂 imagens/           # Imagens usadas na interface
├── 📜 hotelQT.pro         # Arquivo principal de configuração do projeto Qt
├── 📜 main.cpp            # Ponto de entrada da aplicação
└── 📜 telainicial.h/.cpp/.ui # Tela de seleção inicial
<p align="center">
</p>
