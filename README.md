# Sistema de Cadastro de Clientes em Fila

Sistema de gerenciamento de clientes implementado em **linguagem C**, utilizando a estrutura de dados **Fila (Queue)** com alocação estática.

---

## Sobre o Projeto

Este projeto implementa um sistema simples de cadastro de clientes via terminal, onde os dados são armazenados em uma fila de tamanho fixo. O sistema segue o princípio **FIFO (First In, First Out)** — o primeiro cliente cadastrado é o primeiro a ser removido.

---

## Funcionalidades

- **Cadastrar cliente** — nome, email, idade e CPF
- **Remover cliente** — remove o primeiro da fila (FIFO)
- **Listar clientes** — exibe todos os clientes cadastrados
- **Sair** — encerra o programa

---

## Estrutura do Código

```
├── struct clientes     → Estrutura que armazena os dados da fila
├── CadastrarCliente()  → Insere um novo cliente no final da fila
├── RemoverCliente()    → Remove o cliente do início da fila
├── ListarCliente()     → Exibe todos os clientes cadastrados
└── main()             → Menu interativo principal
```

---

## Como Executar

### Pré-requisitos
- Compilador GCC instalado

### Compilar
```bash
gcc clientes.c -o clientes
```

### Executar
```bash
./clientes
```

### Menu do sistema
```
1 - Cadastrar Cliente
2 - Remover Cliente
3 - Listar Clientes
4 - Sair
```

---

## Detalhes Técnicos

| Item | Detalhe |
|---|---|
| Linguagem | C |
| Estrutura de dados | Fila estática (array) |
| Capacidade máxima | 5 clientes (`#define MAX 5`) |
| Remoção | FIFO — primeiro a entrar, primeiro a sair |
| Entrada de dados | `fgets` para evitar overflow de buffer |

---

## Observações

- A capacidade máxima da fila é definida pela constante `MAX` (padrão: 5). Para aumentar, basta alterar o valor no código.
- O CPF é armazenado como string (somente números).
- Os dados **não são persistidos** — ao encerrar o programa, as informações são perdidas.

---

## Autor

**Helcio Yuji Shimoda**  
Estudante de Análise e Desenvolvimento de Sistemas — Fatec Campinas

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/helcio-shimoda/)
[![Gmail](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:helcioshimoda@gmail.com)
