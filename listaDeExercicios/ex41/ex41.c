// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que mostre na tela a seguinte contagem:
    100 95 90 85 80 ... 0 Acabou!
    Dia do programa: 08/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short contador = 100;

     

    while (contador >= 0)
    {
        printf("%hu ", contador);
        contador -= 5;
    }
    puts("Acabou!");

    return 0;
} // end main