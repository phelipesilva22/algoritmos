// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 13: FUNÇÕES ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize o fatorial de número utilizando funções
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
int fatorial(int fat);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num;

    puts("--------------------- FATORIAL FUNÇÃO ---------------------");

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O fatorial de %d! é %d\n", num, fatorial(num));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int fatorial(int fat)
{
    int f = 1;
    for (int i = 1; i <= fat; i++)
        f *= i;
    return f;
}