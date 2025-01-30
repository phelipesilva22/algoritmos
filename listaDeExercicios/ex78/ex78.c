// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa que leia 15 números e guarde-os em um vetor. No final, mostre o vetor inteiro na tela e em seguida mostre em que posições foram digitados valores que são múltiplos de 10.
    Dia do programa: 15/01/2025
*/
#define TAM 15
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vetor[TAM], pos;

    puts("-------------------- VETOR INTEIRO --------------------");

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 100;
        printf("[%d] = %d\n", i, vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        if (vetor[i] % 10 == 0)
        {
            pos = i;    
            printf("Múltiplo de 10 na posição: [%d]!\n", pos);
        }
    }

    return 0;
} // end main