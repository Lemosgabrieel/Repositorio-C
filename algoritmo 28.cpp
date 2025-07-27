#include <stdio.h> 

int main() {
    //variaveis 
    float vetor[5];
    int codigo;
    //entrada 
    printf("digite o codigo: ");
    scanf("%d", &codigo);
    if(codigo != 0){
        for(int i = 0; i < 5; i++){
            printf("digite um numero real: ");
            scanf("%f", &vetor[i]);
        }
    }
    //processamento 
    if (codigo == 1){
        for (int i = 0; i < 5; i++){
            printf("%.2f ", vetor[i]);
        }
    }
    if (codigo == 2){
        for (int i = 4; i >= 0; i--){
            printf("%.2f ", vetor[i]);
        }
    }
}