# Projeto de Pôquer em C - AED (1º Semestre)

Este é um projeto inicial de implementação de um jogo de pôquer em C, desenvolvido para a disciplina de Algoritmos e Estruturas de Dados (AED) no primeiro semestre. Neste estágio, foram implementadas as funcionalidades de criação e embaralhamento do baralho, além da definição dos jogadores.

## Funcionalidades Implementadas

- **Criação do baralho**: O baralho é composto por 52 cartas, com 4 naipes (Espadas, Paus, Copas, Ouros) e 13 valores (2 a Ás).
- **Embaralhamento do baralho**: O baralho é embaralhado utilizando o algoritmo de Fisher-Yates.
- **Criação de jogadores**: O jogo permite a criação de jogadores, com a entrada de nomes e validação do número de jogadores (entre 2 e 4).
- **Distribuição das cartas**: As cartas são distribuídas para os jogadores após o embaralhamento.

## Estrutura do Código

O código é dividido em dois arquivos principais:

1. **Cartas.h**: Contém a definição das estruturas de dados e funções relacionadas ao baralho e pilha de cartas. Inclui:
   - Definições das estruturas `tp_carta` e `Pilha`.
   - Funções para inicializar, embaralhar e manipular o baralho.

2. **main.c**: Contém a lógica principal do jogo, onde os jogadores são criados, seus nomes são inseridos, e as cartas são distribuídas.

### Funções principais

- **criarBaralho(Pilha *p)**: Cria o baralho com 52 cartas e o armazena na pilha.
- **embaralhar(Pilha *p)**: Embaralha as cartas utilizando o algoritmo de Fisher-Yates.
- **push(Pilha *p, tp_carta carta)**: Adiciona uma carta à pilha.
- **pop(Pilha *p)**: Remove e retorna a carta do topo da pilha.

## Instruções para Execução

1. Clone este repositório:
   ```bash
   git clone https://github.com/andredeomondes/poquer-cimatec.git
