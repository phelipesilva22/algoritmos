// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa usando a estrutura “para” que mostre na tela a
    seguinte contagem:
    100 90 80 70 60 50 40 30 20 10 0 Acabou! 
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    puts("------------------ CONTAGEM DOS NÚMEROS ------------------");
    
    for (short cont = 100; cont >= 0; cont -= 10)
        printf("%hd ", cont);

    puts("Acabou!");
    return 0;
} // end main