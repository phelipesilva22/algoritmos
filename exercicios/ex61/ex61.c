// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que mostre na tela a seguinte contagem, usando a estrutura
    “faça enquanto”
    0 3 6 9 12 15 18 21 24 27 30 Acabou!
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contagem = 0;

    puts("------------------ CONTAGEM DOS NÚMEROS ------------------");

    do
    {
        printf("%hu ", contagem);
        contagem += 3;
    } while (contagem <= 30);
    puts("Acabou!");

    return 0;
} // end main