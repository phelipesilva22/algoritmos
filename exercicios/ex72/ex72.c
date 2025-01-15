// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
     5  10  15  20  25  30  35  40  45 50
     0   1   2   3   4   5   6   7   8  9
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short vetor[10];

    puts("------------------- VETORES -------------------");

    for (int i = 1; i < 11; i++)
    {
        vetor[i] = 5 * i;
        printf("%hu ", vetor[i]);
    }

    putchar('\n');
    for (int i = 0; i < 10; i++)
        printf("%hu  ", i);
    putchar('\n');


    return 0;
} // end main