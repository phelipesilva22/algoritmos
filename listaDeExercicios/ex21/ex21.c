// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int ano;

    puts("------------- ANO BISSEXTO -------------");

    printf("Digite um ano (yyyy): ");
    scanf("%hu", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("O ano %hu é BISSEXTO!\n", ano);
    else 
        printf("O ano %hu NÃO É BISSEXTO!\n", ano);

    return 0;
} // end main