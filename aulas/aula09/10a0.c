// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 9: ESTRUTURAS DE REPETIÇÃO (1) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre uma contagem de 10 até 0
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short cont = 10;

    puts("--------------- CONTAR DE 10 ATÉ 0 ---------------");

    while (cont >= 0)
    {
        if (cont == 0)
            printf("%hd ", cont);
        else
            printf("%hd..", cont);
        cont--;
    }
    puts("Acabou a contagem!");

    return 0;
} // end main