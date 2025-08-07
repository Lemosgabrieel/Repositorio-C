#include <stdio.h>
int main() {
    int valor; 

    printf("digite um valor de 1 a 7: "); 
    scanf("%d", &valor);

    switch(valor){
        case 1:
            printf("domingo");
            break;
        case 2:
            printf("segunda");
            break;
        case 3:
            printf("terca");
            break;
        case 4:
            printf("quarta");
            break;
        case 5:
            printf("quinta");
            break;
        case 6:
            printf("sexta");
            break;
        case 7:
            printf("sabado");
            break;
        default:
            printf("valor invalido");
            break;
    }
return 0;
}