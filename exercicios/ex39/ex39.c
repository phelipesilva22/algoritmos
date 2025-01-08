// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que mostre na tela a seguinte contagem:
    10 9 8 7 6 5 4 3 Acabou!
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contador = 10;

    puts("------------ CONTAGEM DE NÚMEROS ------------");
    
    while (contador > 2)
    {
        printf("%hu ", contador);
        contador--;
    }
    puts("Acabou!");

    return 0;
} // end main