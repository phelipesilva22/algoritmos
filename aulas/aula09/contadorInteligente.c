// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que faça uma contagem inteligente
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short inicio, fim;

    puts("--------------------");
    puts("CONTAGEM INTELIGENTE");
    puts("--------------------");
    
    printf("Início: ");
    scanf("%hd", &inicio);

    printf("Fim: ");
    scanf("%hd", &fim);
    
    puts("--------------------");
    puts("  C O N T A N D O   ");
    puts("--------------------");

    if (inicio >= fim)
    {
        while (inicio >= fim)
        {
            printf("%hd.. ", inicio);
            inicio--;
        }
    } else 
    {
        while (inicio <= fim)
        {
            printf("%hd.. ", inicio);
            inicio++;
        }
    }
    putchar('\n');

    return 0;
} // end main