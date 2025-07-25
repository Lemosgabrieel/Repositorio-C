#include <stdio.h>
#include <string.h>

int main() { 
    //variaveis 
    char nome[100], senha[100];

    //entrada 
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite a senha: ");
    gets(senha);

    //processamento 
    while (strcmp(nome, senha) == 0) {
        printf("Acesso negado. Digite novamente.\n");
        printf("Digite o nome: ");
        gets(nome);
        printf("Digite a senha: ");
        gets(senha);
    }
}