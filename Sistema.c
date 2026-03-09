#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct clientes{
    char nome[10];
    char email[10];
    int idade[10];
    int cpf[10];
};struct clientes c;

void CadastrarCliente(){

}
void RemoverCliente(){

}
void EditarCliente(){

}
void ListarCliente(){

}
void main(){
    bool rodar = true;
    int c;
    while(rodar){
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Remover Cliente\n");
        printf("3 - Editar Cliente\n");
        printf("4 - Listar Clientes\n");
        printf("5 - Sair\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            CadastrarCliente();
            break;
        case 2:
            RemoverCliente();
            break;
        case 3:
            EditarCliente();
            break;
        case 4:
            ListarCliente();
            break;
        case 5:
            rodar = false;
            break;    
        default:
            printf("Digite Uma Opcao Valida");
            break;
        }

    }
}