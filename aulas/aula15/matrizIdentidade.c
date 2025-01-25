// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a matriz de ordem desejada pelo usuário
    Dia do programa: __/__/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short ordemMat;

    puts("------------------- MATRIZ IDENTIDADE -------------------");
  
    printf("Digite o valor de ordem da matriz: ");
    scanf("%hu", &ordemMat);

    unsigned short matrizIdentidade[ordemMat][ordemMat];

    for (int i = 0; i < ordemMat; i++)
    {
        for (int j = 0; j < ordemMat; j++)
        {
            if (i == j)
                matrizIdentidade[i][j] = 1;
            else
                matrizIdentidade[i][j] = 0;
        }
    }

     for (int i = 0; i < ordemMat; i++)
    {
        for (int j = 0; j < ordemMat; j++)
        {
            printf(" [%d] ", matrizIdentidade[i][j]);
        }
        putchar('\n');
    }

    return 0;
} // end main