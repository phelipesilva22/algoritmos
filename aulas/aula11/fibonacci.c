// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 11: ESTRUTURAS DE REPETIÇÃO (3) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a sequência dos 15 primeiros termos da sequência de fibonacci
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int t1 = 0, t2 = 1, t3;
    unsigned short seq_fibonacci;

    puts("----------------- SEQUÊNCIA DE FIBONACCI -----------------");

    printf("Quantos termos você quer ver da sequência de fibonacci? ");
    scanf("%hu", &seq_fibonacci);

    printf("%d %d ", t1, t2);

    for (int i = 2; i <= seq_fibonacci; i++)
    {
        t3 = t2 + t1;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
    putchar('\n');

    return 0;
} // end main   