#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 5
struct clientes{
    char nome[MAX][30];
    char email[MAX][50];
    char idade[MAX][2];
    char cpf[MAX][11];
    int tamanho,inicio;
};struct clientes c;

void CadastrarCliente(){
    if(c.tamanho==MAX){
        printf("\nSistema Cheio");
    }else{
        printf("\nDigite Seu Nome: \n");
        fgets(c.nome[c.tamanho],30,stdin);
        getchar();

        printf("\nDigite Seu Email: \n");
        fgets(c.email[c.tamanho],30,stdin);

        printf("\nDigite Sua Idade: \n");
        fgets(c.idade[c.tamanho],3,stdin);
        getchar();

        printf("\n\nDigite Seu CPF(somente numeros): \n");
        fgets(c.cpf[c.tamanho],12,stdin);
        c.tamanho++;
    }
}
void RemoverCliente(){
    if(c.tamanho == 0){
        printf("\nFila Vazia");
    } else {
        for(int j = 0; j < c.tamanho - 1; j++){
            strcpy(c.nome[j], c.nome[j+1]);
            strcpy(c.email[j], c.email[j+1]);
            strcpy(c.idade[j], c.idade[j+1]);
            strcpy(c.cpf[j], c.cpf[j+1]);
        }

        c.tamanho--;
        printf("\nCliente removido com sucesso!\n");
    }
}
void ListarCliente(){
    for(int i =0;i<c.tamanho;i++){
        printf("\n-------------------\n");
        printf("\nNome: %s", c.nome[i]);
        printf("\nEmail: %s", c.email[i]);
        printf("\nIdade: %s", c.idade[i]);
        printf("\nCPF: %s", c.cpf[i]);
    }
}
int main(){
    setlocale(LC_ALL, "");
    c.tamanho = 0;
    c.inicio = 0;
    int op = 0;
    while(op !=4){
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Remover Cliente\n");
        printf("3 - Listar Clientes\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        getchar();
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
            exit(1);
            break;    
        default:
            printf("Digite Uma Opcao Valida");
            break;
        }

    }
}