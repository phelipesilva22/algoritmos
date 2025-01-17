// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 12: PROCEDIMENTOS ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre se o número é PAR ou ÍMPAR utilizando procedimento
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
void parOuImpar(int n);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero;

    puts("------------------- PAR OU ÍMPAR -------------------");
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    parOuImpar(numero);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void parOuImpar(int n)
{
    if (n % 2 == 0)
        printf("O número %d é PAR!\n", n);
    else
        printf("O número %d é ÍMPAR!\n", n);
}