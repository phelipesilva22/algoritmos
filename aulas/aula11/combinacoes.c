// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 11: ESTRUTURAS DE REPETIÇÃO (3) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize combinações entre dois valores inteiros
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    puts("------------------ COMBINAÇÕES ------------------");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%11d %d", i, j);
        }
        putchar('\n');
    }

    return 0;
} // end main