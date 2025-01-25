// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia uma matriz 3x3 e mostre quais valores são pares
    Dia do programa: 24/01/2025
*/
#define TAM 3
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int mat[TAM][TAM], totPar = 0;

    puts("------------------- MATRIZ PARES -------------------");  
    
    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            mat[i][j] = rand() % 20 + 2;
            printf("Valor [%d,%d] = %d\n", i + 1, j + 1, mat[i][j]);
        }
    }

    puts("--------------------");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                printf(" [%d] ", mat[i][j]);
                totPar++;
            }
            else
                printf(" %d ", mat[i][j]);
        }
        putchar('\n');
    }
    puts("--------------------");
    printf("Total de pares: %d!\n", totPar);
    
    return 0;
} // end main