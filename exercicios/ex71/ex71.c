// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que preencha automaticamente um vetor numérico com 8
    posições, conforme abaixo:
    999 999 999 999 999 999 999 999 
     0   1   2   3   4   5   6   7
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short vetor[8];

    puts("------------------- VETORES -------------------");

    for (int i = 0; i < 8; i++)
    {
        vetor[i] = 999;
        printf("%hu ", vetor[i]);
    }

    putchar('\n');
    for (int i = 0; i < 8; i++)
        printf(" %hu  ", i);
    putchar('\n');

    return 0;
} // end main