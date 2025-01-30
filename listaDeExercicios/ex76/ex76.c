// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que preencha automaticamente um vetor numérico com 7
    números gerados aleatoriamente pelo computador e depois mostre os valores
    gerados na tela.
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vetor[7];

    puts("---------------- VETOR ALEATÓRIO ----------------");

    srand(time(NULL));
    printf("Valores: ");
    for (int i = 1; i <= 7; i++)
    {
        vetor[i] = rand() % 10;
        printf(" |%d|", vetor[i]);
    }

    printf("\nPosições: ");
    for (int i = 1; i <= 7; i++)
        printf("[%d] ", i);
    putchar('\n');

    return 0;
} // end main