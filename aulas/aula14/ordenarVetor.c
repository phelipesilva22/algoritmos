// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que faça a ordenação de um vetor
    Dia do programa: 20/01/2025
*/
#define TAM 4
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vetor[TAM], aux;

    puts("-------------------- ORDENAR VETOR ---------------------");
    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 10;
        printf("Vetor[%d] = %d\n", i + 1, vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = i + 1; j < TAM; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    
    for (int i = 0; i < TAM; i++)
        printf("[%d] ", vetor[i]);
    putchar('\n');

    return 0;
} // end main