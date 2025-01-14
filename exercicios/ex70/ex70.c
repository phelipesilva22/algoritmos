// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência
    de Fibonacci:
    1 1 2 3 5 8 13 21...
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int t1 = 1, t2 = 1, t3;

    puts("---------------- SEQUÊNCIA DE FIBONACCI ----------------");

    printf("%d %d ", t1, t2);
    for (int i = 3; i <= 10; i++)
    {
        t3 = t1 + t2;
        printf("%d ", t3);
        t2 = t1;
        t1 = t3;
    }
    puts("FIM!");

    return 0;
} // end main