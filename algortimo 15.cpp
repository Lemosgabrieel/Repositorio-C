#include <stdio.h>

int main() {
    float indice;

    printf("Digite o indice de poluicao medido: ");
    scanf("%f", &indice);

    if (indice >= 0.5) {
        printf("Todos os grupos devem suspender suas atividades (grupos 1, 2 e 3)\n");
    }
    else if (indice >= 0.4) {
        printf("Os grupos 1 e 2 devem suspender suas atividades\n");
    }
    else if (indice >= 0.3) {
        printf("O grupo de industria 1 deve suspender as atividades\n");
    }
    else if (indice >= 0.05 && indice <= 0.25) {
        printf("Indice aceitavel\n");
    }
    else {
        printf("Indice invalido\n");
    }

    return 0;
}