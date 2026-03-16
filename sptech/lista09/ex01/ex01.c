// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar num botão "Contar"...
    b) Exiba, debaixo do botão, os números de 1 a 15, um embaixo do outro.
    Dia do programa: 09/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    puts("-------------------- CONTADOR --------------------");

    for (int i = 1; i <= 15; i++)
        printf("%d\n", i);

    return 0;
} // end main