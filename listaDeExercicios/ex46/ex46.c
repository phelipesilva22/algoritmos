// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que calcule e mostre na tela o resultado da soma entre 6 +
    8 + 10 + 12 + 14 + ... + 98 + 100.
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short cont = 6, somatorio = 0;

    puts("------------ SOMATÓRIO DE NÚMEROS ------------");
    
    while (cont <= 100)
    {
        somatorio += cont;

        printf("%hu ", cont);
        if (cont < 100)
        {
            printf("+ ");
        }
        cont += 2;
    }
    printf("\nSoma dos valores é: %hu!\n", somatorio);

    return 0;
} // end main