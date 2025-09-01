/* 
1. crie um programa que leia o nome, a idade e o endereco de uma pessoa e armazene em uma struct
*/
#include <stdio.h> 

struct st_pessoa{ 
    char nome[100];
    int idade; 
    char endereco[200];
};

int main () {
    struct st_pessoa pessoa;

    printf("informe o nome: ");
    fgets(pessoa.nome, 100, stdin); 
    
    printf("informe a idade: ");
    scanf("%d", &pessoa.idade);
    getchar(); //limpa o buffer do teclado

    printf("informe o endereco: ");
    fgets(pessoa.endereco, 200, stdin);

    printf("nome: %s", pessoa.nome);
    printf("idade: %d\n", pessoa.idade);
    printf("endereco: %s", pessoa.endereco);

    return 0; 
}