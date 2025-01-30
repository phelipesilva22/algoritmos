// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que preencha automaticamente (usando lógica, não apenas
    atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
    5  3  5  3  5  3  5  3  5  3
    0  1  2  3  4  5  6  7  8  9
    Dia do programa: __/__/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short vetor[10];

    puts("------------------- VETORES -------------------");

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = 7 - 2;
        printf("%hu ", vetor[i]);
        vetor[i] -= 2;    
        printf("%hu ", vetor[i]);
    }

    putchar('\n');
    for (int i = 0; i < 10; i++)
        printf("%hu ", i);
    putchar('\n');

    return 0;
} // end main