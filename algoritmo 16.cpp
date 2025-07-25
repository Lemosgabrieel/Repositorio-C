#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("A categoria do nadador e infantil-a\n");
    }
    else if (idade >= 8 && idade <= 11) {
        printf("A categoria do nadador e infantil-b\n");
    }
    else if (idade >= 12 && idade <= 13) {
        printf("A categoria do nadador e juvenil-a\n");
    }
    else if (idade >= 14 && idade <= 17) {
        printf("A categoria do nadador e juvenil-b\n");
    }
    else if (idade >= 18) {
        printf("A categoria do nadador e adulto\n");
    }
    else {
        printf("Idade invalida para classificacao\n");
    }

    return 0;
}