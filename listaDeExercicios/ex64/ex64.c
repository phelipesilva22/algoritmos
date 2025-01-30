// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa usando a estrutura “para” que mostre na tela a
    seguinte contagem:
    0 5 10 15 20 25 30 35 40 Acabou!
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---

    puts("------------------ CONTAGEM DOS NÚMEROS ------------------");

    for (unsigned short i = 0; i <= 40; i += 5)
        printf("%hu ", i);

    puts("Acabou!");
    return 0;
} // end main