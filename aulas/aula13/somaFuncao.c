// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 13: FUNÇÕES ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a soma de valores utilizando Funções
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
int soma(int *n1, int *n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int v1, v2;

    puts("-------------------- SOMA FUNÇÃO --------------------");

    printf("Valor de v1: ");
    scanf("%d", &v1);

    printf("Valor de v2: ");
    scanf("%d", &v2);

    printf("O resultado de %d + %d = %d!\n", v1, v2, soma(&v1, &v2));
    printf("X = %d!\nY = %d!\n", v1, v2);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int soma(int *n1, int *n2)
{
    *n1 += 2;
    *n2 += 3;
    return *n1 + *n2;
} // end soma