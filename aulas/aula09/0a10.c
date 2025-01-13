// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 9: ESTRUTURAS DE REPETIÇÃO (1) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre uma contagem de 0 até 10
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short cont = 0;

    puts("--------------- CONTAR DE 0 ATÉ 10 ---------------");

    while(cont <= 10)
    {
        if (cont == 10)
            printf("%hu ", cont);
        else
            printf("%hu.. ", cont);
        cont++;
    }
    puts("Acabou a contagem!");

    return 0;
} // end main