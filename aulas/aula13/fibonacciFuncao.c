// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 13: FUNÇÕES ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a sequência de fibonacci utilizando função
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
int proximoFibonacci(int *x, int *y);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int t1 = 0, t2 = 1;

    puts("------------------- FIBONACCI FUNÇÃO -------------------");

    printf("%d %d ", t1, t2);
    for (int i = 3; i <= 10; i++)
    {
        printf("%d ", proximoFibonacci(&t1, &t2));       
    }
    putchar('\n');

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int proximoFibonacci(int *x, int *y)
{
    int z;
    z = *x + *y;
    *x = *y;
    *y = z;
    return z;
} // end proximoFibonacci
