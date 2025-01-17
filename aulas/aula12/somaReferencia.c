// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 12: PROCEDIMENTOS ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a soma de valores utilizando procedimento com passagem por referência
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
void soma(int *a, int *b);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int x, y;

    puts("----------------- SOMA REFERÊNCIA -----------------");

    printf("Valor de x: ");
    scanf("%d", &x);

    printf("Valor de y: ");
    scanf("%d", &y);

    soma(&x, &y);
    printf("X = %d\nY = %d\n", x, y);

    return 0;

} // end main

// --- Desenvolvimento da Função ---
void soma(int *a, int *b)
{
    *a += 10;
    *b += 50;
    printf("%d + %d = %d!\n", *a, *b, *a + *b);

} // end soma