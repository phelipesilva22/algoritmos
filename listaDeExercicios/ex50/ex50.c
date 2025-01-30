// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e
    mostre na tela:
    a) Quais foram os números sorteados
    b) Quantos números estão acima de 5
    c) Quantos números são divisíveis por 3
    Dia do programa: 09/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short sort, cont = 0, totAcima5 = 0, totDivisiveis3 = 0;

    puts("-------------- SORTEIO DE 20 NÚMEROS --------------");

    srand(time(NULL));

    while (cont <= 20)
    {
        sort = rand() % 11;
        printf("%dº número sorteado: %d!\n", cont, sort);
        cont++;   
    
        if (sort > 5)
            totAcima5++;
        
        if (sort % 3 == 0)
            totDivisiveis3++;
    }
    printf("Total de números acima de 5: %hu!\n", totAcima5);
    printf("Total de números divisíveis por 3: %hu!\n", totDivisiveis3);
    
    return 0;
} // end main