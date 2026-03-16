// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar num botão "S2 Pares"...
    b) Exiba, debaixo do botão, todos os números pares de 0 a 100, um
    embaixo do outro
    Dia do programa: 15/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    puts("----------------------- NÚMEROS PARES -----------------------");

    for (int i = 0; i <= 100; i += 2)
        printf("%d\n", i);

    return 0;
} // end main