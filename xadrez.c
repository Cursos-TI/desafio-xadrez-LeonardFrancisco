#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    printf("MOVIMENTAÇÃO DO BISPO:\n");
    int i = 1; // Inicializando o contador.
    while (i <= 5){
        printf("-> Cima, Direita!\n"); //Enquanto o contador for menor ou igual a cinco será impresso a direção.
        i++; // Incrmento.
    }

    printf("\nMOVIMENTAÇAO DA TORRE:\n");
    int j = 1; // Inicializando o contador.
    do {
        printf("-> Direita!\n"); 
        j++; //Incremento.
    } while (j <= 5); //O código só será executado se o contador for menor ou igual a cinco.
    
    printf("\nMOVIMENTAÇAO DA RAINHA:\n");
    for (int k = 1; k <= 8; k++){ // Inicializando contador (k), enquanto ele for menor ou igual a 8 o bloco abaixo será executado; ao final tem o incremento.
        printf("-> Esquerda!\n");
    }

    printf("\nMOVIMENTAÇAO DO CAVALO:\n");
    int movimentoCavalo = 1; // Inicializando o contador.
    while (movimentoCavalo--) { // Loop while só acontecerá uma vez.
        for(int l = 0; l < 2; l++) { // Loop for para contar os primeiros movimentos do cavalo.
            printf("-> Baixo!\n");
        }
        printf("-> Esquerda!\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
