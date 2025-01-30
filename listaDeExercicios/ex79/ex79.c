// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor.
    No final, mostre quais são os números pares que foram digitados e em que posições eles estão armazenados.
    Dia do programa: 15/01/2025
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vet[TAM], pos;

    puts("-------------------- VETOR INTEIRO --------------------"); 

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 1000 + 1;
        printf("[%d] = %d\n", i, vet[i]);
    }

    puts("------------------------------------------");
    for (int i = 0; i < TAM; i++)
    {
        if (vet[i] % 2 == 0)
        {
            pos = i;
            printf("Valor par %d na posição: [%d]\n", vet[i], pos);
        }
    }

    return 0;
} // end main