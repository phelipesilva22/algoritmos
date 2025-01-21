// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia 7 valores e mostre quantos desses valores são pares
    Dia do programa: 20/01/2025
*/
#define TAM 7
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int vetor[TAM], totPar = 0;

    puts("------------------- VETOR -------------------");

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    puts("---------------------------------------------");
    for (int i = 0; i < TAM; i++)
        printf("[%d] ", vetor[i]);

    putchar('\n');
    for (int i = 0; i < TAM; i++)
    {
          if (vetor[i] % 2 == 0)
          {
            totPar++;
            printf("O valor %d está na posição = [%d]\n", vetor[i], i + 1);
          }
    }
    printf("Total de valores pares: %d!\n", totPar);
    puts("---------------------------------------------");

    return 0;
} // end main