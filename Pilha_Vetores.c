#include<stdio.h>
#include<stdlib.h>
#define N 50

typedef struct pilha{
int n;
float vet[N];
}Pilha;

Pilha* criar_Pilha(){
Pilha* p=(Pilha*)malloc(sizeof(Pilha));
p->n=0;
return p;
}
//Adiciona a Pilha
void push(Pilha* p,float v){
if(p->n==N){
    printf("Capacidade MAX");
    exit(1);
    }
    p->vet[p->n]=v;
    p->n++;
}
//Remove da Pilha
float pop(Pilha* p){
    float v;
    if(pilha_Vazia(p)){
        printf("Pilha vazia");
    }
    v=p->vet[p->n-1];
    p->n--;
    return v;
}

float top_Pilha(Pilha* p){
    if(pilha_Vazia(p)){
    printf("Pilha vazia");
    exit(1);
    }
    return p->vet[p->n-1];
}

int pilha_Vazia(Pilha* p){
return (p->n == 0);
}

void libre_Pilha(Pilha* p){
free(p);
}

int main(){
Pilha* p;
p=criar_Pilha();
push(p,10);
push(p,30);
push(p,40);
push(p,20);
printf("Topo:%.2f",top_Pilha(p));
return 0;
}
