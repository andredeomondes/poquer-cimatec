#include <stdio.h>
#include "Cartas.h"
#include <stdlib.h>


typedef struct{
    char nome[MAX];
    int fichas;
    tp_carta carta[2];
}tp_jogador;


int main(){

    int n_jogadores;
    char n_jogadores_valido = 'N';
    tp_carta baralho[MAX];

    printf("Ola, seja bem vindo ao TecPoquer. Esperamos que a sua sorte esteja em dia. \n");
    do{
        printf("\nEscolha o numero de jogadores: (2 - 4)\n");
        scanf("%d", &n_jogadores);
        if(n_jogadores > 1 && n_jogadores <= 4){ 
            n_jogadores_valido = 'S';}
        else{ 
        n_jogadores_valido = 'N';
        printf("Numero de jogadores invalido. Escolha entre 2 - 4 participantes.\n");}
    } while(n_jogadores_valido == 'N');

    tp_jogador jogadores[n_jogadores];

    printf("\nOtimo. Hora de escolher os nomes dos jogadores! \n");
    for(int i=1; i<=n_jogadores; i++){
    printf("Insira o nome do jogador %d: \n", i);
    scanf(" %[^\n]s", jogadores[i].nome);
    }
    
    int avancar = 0;
    int alterar_nome;
    do{
        printf("\nTudo certo para avancar para o jogo? ( 1- Iniciar    2- Visualizar nome de jogadores    3- Alterar nome de jogador)\n");
        scanf("%d", &avancar);
        if(avancar == 2){
            printf("\nNome dos jogadores: \n");
        for(int i=1; i<=n_jogadores; i++){
        printf("Jogador %d: %s\n", i, jogadores[i].nome);
        }
        }
        else if(avancar == 3){
            do{
                printf("Qual numero do jogador deseja alterar o nome? \n");
                scanf("%d", &alterar_nome);
                if(alterar_nome < 1 || alterar_nome > n_jogadores){
                    printf("Numero invalido! Escolha um jogador entre 1 e %d.\n", n_jogadores);
                }
            }while(alterar_nome < 1 || alterar_nome > n_jogadores);
            
            printf("Insira o novo nome do jogador: \n");
            scanf(" %[^\n]s", jogadores[alterar_nome].nome);
        }
        else if(avancar != 1 && avancar != 2 && avancar != 3){
            printf("Opcao incorreta. Insira um numero de 1 a 3.");
        }
    }while(avancar != 1);


    //INICIALIZAÇÃO DO JOGO
    Pilha baralho;
    criarBaralho(&baralho);
    embaralhar(&baralho);

    for(int i = 0; i<n_jogadores; i++){
        jogadores[i].carta[0] = pop(&baralho);
        jogadores[i].carta[0] = pop(&baralho);
    }

    

}