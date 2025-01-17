// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 12: PROCEDIMENTOS ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a soma de valores utilizando procedimentos
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
void soma(int x1, int y1);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int x, y;

    puts("------------------- PROCEDIMENTO SOMA -------------------");

    printf("Valor de x: ");
    scanf("%d", &x);

    printf("Valor de y: ");
    scanf("%d", &y);

    soma(x, y);
    printf("X = %d\nY = %d\n", x, y);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void soma(int x1, int y1)
{
    x1 += 5;
    y1 += 3;
    printf("Recebi o valor de x: %d!\n", x1);
    printf("Recebi o valor de x: %d!\n", y1);
    printf("%d + %d = %d!\n", x1, y1, x1 + y1);
} // end soma