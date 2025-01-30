// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
    entre eles.
    Ex:
    Digite um valor: 8
    Digite outro valor: 5
    A soma entre 8 e 5 é igual a 13.
    Dia do programa: 04/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short int valor1, valor2;

    puts("----------- SOMA DOS VALORES INTEIROS -----------");

    printf("Digite um valor: ");
    scanf("%hd", &valor1);

    printf("Digite outro valor: ");
    scanf("%hd", &valor2);

    printf("A soma entre %d e %d é %d!\n", valor1, valor2, valor1 + valor2);

    return 0;
} // end main