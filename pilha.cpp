#include <stdio.h> 

#define TAMPILHA 10
//pilha/stack
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos() {
    printf("\n=========pilha atual==========\n");
    for(int i = 0; i < TAMPILHA; i++) {
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d", topo);
    printf("\n\n");
}

void push() {
    int val;
    printf("Digite um valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA) {
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia");
    }
}

void pop() {
    if(topo >= 0) {
        pilha[topo-1] = 0;
        topo = topo - 1;
        lista_elementos();
    }else{
        printf("Pilha vazian\n");
    }
}

void clear() {
    for(int i = 0; i < TAMPILHA; i++) {
        pilha[i] = 0;
    }
    topo = 0;
}

int main() {
    int opcao = 0;

    do{
        printf("selecione a opcao: \n");
        printf("[1] - inserir (push)\n");
        printf("[2] - remover (pop)\n");
        printf("[3] - listar elementos\n");
        printf("[4] - limpar a pilha\n");
        printf("[-1] - sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                clear();
                break;
            case -1:
                printf("saindo...\n");
                break;
            default:
                printf("opcao invalida\n");
        }
    }while(opcao != -1);

    return 0;
}