// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>

/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que preencha uma matriz 3x2 
    Dia do programa: 24/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int mat[3][2];

    puts("------------------- PREENCHER MATRIZ -------------------");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor na posição [%d,%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    puts("-----------------------------");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %8d ", mat[i][j]);
        }
        putchar('\n');
    }
    puts("-----------------------------");
    

    return 0;
} // end main