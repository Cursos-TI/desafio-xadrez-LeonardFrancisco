#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursiveBispo(int i){
    do {
        printf("-> Cima!\n");
        for (int a = 1; a <= i; a--){
            printf("-> Direita!\n");
            break;
        }
    } while (i-- && i > 0);
}

void recursiveTorre(int j){
    if (j > 0){
        printf("-> Direita!\n");
        recursiveTorre(j - 1);
    }
}

void recursiveRainha(int k){
    if (k > 0){
        printf("-> Esquerda!\n");
        recursiveRainha(k - 1);
    }
}

int main() {
    
    printf("\nMOVIMENTAÇAO DO BISPO:\n");
    int i = 5;
    recursiveBispo(i);
    
    printf("\nMOVIMENTAÇÃO DA TORRE:\n");
    int j = 5; // Inicializando o contador.
    recursiveTorre(j);

    printf("\nMOVIMENTAÇÃO DA RAINHA:\n");
    int k = 8; //Inicializando o contador.
    recursiveRainha(k);

    printf("\nMOVIMENTAÇÃO DO CAVALO:\n");
    for (int l = 1, m = 2; l <= m; l++){
        printf("-> Cima!\n");
    }
    printf("-> Direita!\n");


    return 0;
}
