// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero;

    puts("--------------- PAR OU IMPAR ---------------");

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 != 0)
        printf("O número %d é ÍMPAR!\n", numero);
    else 
        printf("O número %d é PAR!\n", numero);

    return 0;
} // end main