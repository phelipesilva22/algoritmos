// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia 6 números inteiros e no final mostre quantos deles
    são pares e quantos são ímpares.
    Dia do programa: 09/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int cont = 1, num, totPar = 0, totImpar = 0;

    puts("------------------ QTD PARES E ÍMPARES ------------------");

    while (cont <= 6)
    {
        printf("Digite o %dº valor: ", cont);
        scanf("%d", &num);

        if (num % 2 == 0)
            totPar++;
        else
            totImpar++;

        cont++;
    }
    printf("Total de pares: %d!\n", totPar);
    printf("Total de ímpares: %d!\n", totImpar);

    return 0;
} // end main