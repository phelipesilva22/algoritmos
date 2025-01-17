// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 13: FUNÇÕES ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize se um número é PAR ou ÍMPAR utilizando funções
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
char *parOuImpar(int n);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num;

    puts("--------------------- PAR OU ÍMPAR FUNÇÃO ---------------------");

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O número %d é %s!\n", num, parOuImpar(num));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
char *parOuImpar(int n)
{
    if (n % 2 == 0)
        return "PAR";
    else
        return "ÍMPAR";
} // end parOuImpar