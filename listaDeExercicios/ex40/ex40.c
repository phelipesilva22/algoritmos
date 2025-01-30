// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um aplicativo que mostre na tela a seguinte contagem:
    0 3 6 9 12 15 18 Acabou!
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contador = 0;

    puts("------------ CONTAGEM DE NÚMEROS ------------");

    while (contador <= 18)
    {
        printf("%hu ", contador);
        contador+= 3;
    }
    puts("Acabou!");

    return 0;
} // end main