// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que possua uma função chamada Potencia(), que vai receber
    dois parâmetros numéricos (base e expoente) e vai calcular o resultado da exponenciação.
    Ex: Potencia(5,2) vai calcular 5² = 25
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
int potencia(int b, int e);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int base, expoente;

    puts("-------------------- EXPONENCIAÇÃO --------------------");

    printf("Informe a base (b): ");
    scanf("%d", &base);

    printf("Informe o expoente (e): ");
    scanf("%d", &expoente);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int potencia(int b, int e)
{
    
} // end potencia