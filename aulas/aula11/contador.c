// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 11: ESTRUTURAS DE REPETIÇÃO (3) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a contagem de 1 até 10 utilizando FOR
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---

    puts("--------------- CONTADOR ---------------");

    for (int i = 10; i >= 1; i--)
        printf("%d ", i);
    puts("FIM!");

    return 0;
} // end main