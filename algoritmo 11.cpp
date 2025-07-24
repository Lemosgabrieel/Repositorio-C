#include <stdio.h>

int main () {
    float p, m;

    printf("informe o peso dos peixes: ");
    scanf("%f", &p);

    if(p > 50) {
        m = (p - 50) * 4.00;
        printf("voce devera pagar R$ %.2f em multas.\n", m);
        printf("excesso: %.2f\n", p - 50);
    } else {
        m = 0;
        printf("multas: %.2f\n", m);
        printf("excesso: 0.00\n");
    }

    return 0;
}