#include <stdio.h> 
#include <stdlib.h> 

//lista encadeada
struct st_no{
    int valor;
    struct st_no *prox; 
};

typedef struct st_no no;

int vazia(no *le){
    if(le->prox == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inicia(no *le) {
    le->prox = NULL; 
}

void libera(no *le) {
    if(!vazia(le)){
        no *proxNo, *atual; 
        atual = le->prox;
        while(atual != NULL){
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void exibe(no *le) {
    if(vazia(le)){
        printf("lista vazia\n");
        return;
    }
    no *temp;
    temp = le->prox;

    while(temp != NULL){
        printf("%d ", temp->valor);
        temp = temp->prox;
    }
    printf("\n\n");
}

void insereInicio(no *le) {
    no *novo = (no*) malloc(sizeof(no));
    if(!novo){
        printf("sem memoria\n");
        exit(1);
    }
    printf("informe o valor: ");
    scanf("%d", &novo->valor);
    no *oldHead = le->prox;
    le->prox = novo;
    novo->prox = oldHead;
}

void insereFim(no *le) {
    no *novo = (no*) malloc(sizeof(no));
    if(!novo){
        printf("sem memoria\n");
        exit(1);
    }
    printf("informe o valor: ");
    scanf("%d", &novo->valor);
    novo->prox = NULL;

    if(vazia(le)){
        le->prox = novo;
    }else{
        no *temp = le->prox;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = novo;
    }
}

void opcao(no *le, int op) {
    switch(op){
        case 0:
            libera(le);
            break;
        case 1:
            exibe(le);
            break;
        case 2:
            insereInicio(le);
            break;
        case 3:
            insereFim(le);
            break;
        case 4:
            inicia(le);
            break;    
        default:
            printf("comando invalido\n\n");
    }
}

int menu() {
    int opt;
    printf("\nEscolha a opcao\n");
    printf("0. Sair\n");
    printf("1. Exibir lista\n");
    printf("2. Adicionar no inicio\n");
    printf("3. Adicionar no fim\n");
    printf("4. Zerar lista\n");
    printf("Opcao: ");
    scanf("%d", &opt);
    return opt;
}


int main() {
    no *le = (no*)malloc(sizeof(no));

    if(!le){
        printf("sem memoria\n");
        exit(1);
    }
    inicia(le);
    int opt;

    do{
        opt = menu();
        opcao(le, opt);
    }while(opt != 0);
    free(le);
    return 0;
}       