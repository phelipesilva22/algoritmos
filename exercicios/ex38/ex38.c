// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa que mostre na tela a seguinte contagem:
    6 7 8 9 10 11 Acabou!
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contador = 6;

    puts("------------ CONTAGEM DE NÚMEROS ------------");

    while(contador < 12)
    {
        printf("%hu ", contador);
        contador++;
    }
    puts("Acabou!");

    return 0;
} // end main