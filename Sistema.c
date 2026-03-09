#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
struct clientes{
    char nome[10][30];
    char email[10][50];
    char idade[10][2];
    char cpf[10][11];
    int tamanho,inicio;
};struct clientes c;

void CadastrarCliente(){
    if(c.tamanho==10){
        printf("\nSistema Cheio");
    }else{
        printf("\nDigite Seu Nome: \n");
        fgets(c.nome[c.tamanho],30,stdin);

        printf("\nDigite Seu Email: \n");
        fgets(c.email[c.tamanho],30,stdin);

        printf("\nDigite Sua Idade: \n");
        fgets(c.idade[c.tamanho],2,stdin);

        printf("\nDigite Seu CPF(somente numeros): \n");
        fgets(c.cpf[c.tamanho],11,stdin);
        c.tamanho++;
    }
}
void RemoverCliente(){
}
void ListarCliente(){
}
void main(){
    setlocale(LC_ALL, "");
    c.tamanho = 0;
    c.inicio = 0;
    bool rodar = true;
    int op;
    while(rodar){
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Remover Cliente\n");
        printf("3 - Listar Clientes\n");
        printf("4 - Sair\n");
        scanf("%d", &c);
        switch (op)
        {
        case 1:
            CadastrarCliente();
            break;
        case 2:
            RemoverCliente();
            break;
        case 3:
            ListarCliente();
            break;
        case 4:
            rodar = false;
            break;    
        default:
            printf("Digite Uma Opcao Valida");
            break;
        }

    }
}