// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre se o número é primo ou não
    Dia do programa: 13/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num, totDivisiveis = 0, cont = 0;

    puts("----------------- NÚMERO PRIMO ----------------- ");


    printf("Digite um número: ");
    scanf("%d", &num);

    do
    {   
        cont++;

        if (num % cont == 0)
            totDivisiveis++;    
    } while (cont <= num);
    
    if (totDivisiveis == 2)
        printf("O número %d É PRIMO!\n", num);
    else
        printf("O número %d NÃO É PRIMO!\n", num);

    return 0;
} // end main