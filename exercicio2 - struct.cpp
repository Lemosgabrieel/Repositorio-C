/*
2. crie um programa que tenha uma struct chamada aluno contendo nome, numero de matricula e curso. 
leia do usuario a informacao de 5 alunos, armazene em um vetor desta estrutura e imprima os dados dos alunos na tela.
*/
#include <stdio.h> 

struct st_aluno{
    char nome[100];
    char matricula[10];
    char curso[100];
};

int main () {
    struct st_aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("cadastro %d de 5: \n", i+1);
        printf("informe o nome: ");
        fgets(alunos[i].nome, 100, stdin);
        printf("informe a matricula: ");
        fgets(alunos[i].matricula, 10, stdin);
        printf("informe o curso: ");
        fgets(alunos[i].curso, 100, stdin);

    }
    printf("=======================\n");
    for (int i = 0; i < 5; i++){
        printf("dados do aluno %d de 5: \n", i+1);
        printf("nome: %s", alunos[i].nome);
        printf("matricula: %s", alunos[i].matricula);
        printf("curso: %s", alunos[i].curso);
        printf("-----------------------\n");
    }
    return 0;
}