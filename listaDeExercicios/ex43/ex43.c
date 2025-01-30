// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1,
    marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo:
    30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...
    Dia do programa: 08/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contRegressiva = 30;

    puts("---------------- CONTAGEM REGRESSIVA ----------------");
    
    while (contRegressiva > 0)
    {
        if (contRegressiva % 4 == 0)
            printf("[%hu] ", contRegressiva);
        else 
             printf("%hu ", contRegressiva);
        
        contRegressiva--;
    }
    putchar('\n');

    return 0;
} // end main