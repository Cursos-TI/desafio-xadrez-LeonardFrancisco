#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int i = 1; // Inicializando o contador.
    printf("MOVIMENTAÇÃO DO BISPO:\n");
    while (i <= 5){
        printf("-> Cima, Direita!\n"); //Enquanto o contador for menor ou igual a cinco será impresso a direção.
        i++; // Incrmento.
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int j = 1; // Inicializando o contador.
    printf("\nMOVIMENTAÇAO DA TORRE:\n");
    do {
        printf("-> Direita!\n"); 
        j++; //Incremento.
    } while (j <= 5); //O código só será executado se o contador for menor ou igual a cinco.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMOVIMENTAÇAO DA RAINHA:\n");
    for (int k = 1; k <= 8; k++){ // Inicializando contador (k), enquanto ele for menor ou igual a 8 o bloco abaixo será executado; ao final tem o incremento.
        printf("-> Esquerda!\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
