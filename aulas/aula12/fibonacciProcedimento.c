// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 12: PROCEDIMENTOS ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a sequência de fibonacci utilizando procedimento
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
void proximoFibonacci(int *x, int *y);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int t1 = 0, t2 = 1;

    puts("------------------- FIBONACCI PROCEDIMENTO -------------------");

    printf("%d %d ", t1, t2);
    for (int i = 3; i <= 10; i++)
    {
        proximoFibonacci(&t1, &t2);    
    }
    putchar('\n');

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void proximoFibonacci(int *x, int *y)
{
    int z;
    z = *x + *y;
    printf("%d ", z);
    *x = *y;
    *y = z;
}