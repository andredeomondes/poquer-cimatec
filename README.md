# Projeto de Pôquer em C - AED (1º Semestre)

Este projeto é uma implementação inicial de um jogo de pôquer desenvolvido em C, como parte do primeiro semestre da disciplina de Algoritmos e Estruturas de Dados (AED). O foco atual está na criação do baralho, embaralhamento das cartas e na definição dos jogadores. O jogo ainda está em desenvolvimento, com funcionalidades sendo implementadas gradualmente.

## Funcionalidades Implementadas

- **Criação do baralho**: O programa cria um baralho padrão com 52 cartas (sem curingas).
- **Embaralhamento das cartas**: As cartas são embaralhadas aleatoriamente, garantindo que o jogo seja imprevisível.
- **Sobreposição das cartas**: As cartas são sobrepostas de maneira adequada, respeitando a ordem do embaralhamento.
- **Criação de jogadores**: A estrutura para criar os jogadores está implementada, permitindo que eles participem da partida.

## Estrutura do Projeto

O código foi organizado em funções além da função `main()` para garantir a modularidade e facilitar a manutenção:

- **Função `criarBaralho()`**: Cria o baralho de cartas.
- **Função `embaralharCartas()`**: Embaralha o baralho de forma aleatória.
- **Função `criarJogadores()`**: Cria os jogadores e os prepara para a partida.

## Instruções para Execução

1. Clone este repositório:
   ```bash
   git clone https://github.com/usuario/repository.git
