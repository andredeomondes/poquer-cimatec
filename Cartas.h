#ifndef CARTAS_H
#define CARTAS_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 52

//Representação dos valores das cartas
typedef enum {
    DOIS = 2, TRES = 3, QUATRO = 4, CINCO =  5, SEIS = 6, SETE = 7, 
    OITO = 8, NOVE = 9, DEZ = 10, VALETE = 11, DAMA = 12, REI = 13, AS = 14
} tp_valor;

//Representação dos naipes das cartas
typedef enum{
    ESPADAS, PAUS, COPAS, OUROS
} tp_naipe;

//Struct da carta
typedef struct{
    tp_valor valor;
    tp_naipe naipe;
} tp_carta;

//Estrutura da pilha de cartas do baralho
typedef struct{
    tp_carta cartas[MAX];
    int topo;
} Pilha;

//------------------------------------------------------------
//Funções da Pilha de cartas 
void inicializaPilha(Pilha *p){
    p->topo = -1;
}

int pilhaVazia(Pilha *p){
    return p->topo == -1;
}

int pilhaCheia(Pilha *p){
    return p->topo == MAX-1;
}

void push(Pilha *p, tp_carta carta){
    if(pilhaCheia(p)){
        printf("Baralho cheio!\n");
        return;
    }
    p->cartas[++(p->topo)] = carta;
}

tp_carta pop(Pilha *p){
    if (pilhaVazia(p)){
        printf("\nBaralho vazio!\n");
        tp_carta cartaVazia = {0, 0};
        return cartaVazia;
    }
    return p->cartas[(p->topo)--];
}

tp_carta topo(Pilha *p){
    if(pilhaVazia(p)){
        printf("\nBaralho vazio!\n");
        tp_carta cartaVazia = {0, 0};
        return cartaVazia;
    }    
    return p->cartas[p->topo];
}
//--------------------------------------------------------


//Função para gerar o baralho de cartas
void criarBaralho(Pilha *p){
    inicializaPilha(p);
    for(int naipe = ESPADAS; naipe <= OUROS; naipe++){
        for(int valor = DOIS; valor <= AS; valor ++){
        tp_carta novaCarta;
        novaCarta.valor = valor;
        novaCarta.naipe = naipe;
        push(p, novaCarta);
        }
    }
}


//Função para embaralhar o baralho
void embaralhar(Pilha *p){
    srand(time(NULL));
    for(int i = p->topo; i > 0; i--){
        int j = rand() & (i+1);
        tp_carta temp = p->cartas[i];
        p->cartas[i] = p->cartas[j];
        p->cartas[j] = temp;
    }
}

#endif