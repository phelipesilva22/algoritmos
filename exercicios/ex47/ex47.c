// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 +
    450 + 400 + 350 + 300 + ... + 50 + 0
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short cont = 500, somatorio = 0;

    puts("------------ SOMATÓRIO DE NÚMEROS ------------");
    
    while (cont >= 0)
    {
        somatorio += cont;
        printf("%hd ", cont);
        if (cont > 0)
        {
            printf("+ ");
        }
        cont -= 50;
    }
    printf("= %hd!\n", somatorio);

    return 0;
} // end main