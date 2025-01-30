// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que tenha uma função SuperSomador(), que vai receber dois
    números como parâmetro e depois vai retornar a soma de todos os valores no
    intervalo entre os valores recebidos.
    Ex:
    SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
    SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
int SuperSomador(int i, int f);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int inicio, fim, res;

    puts("----------------- SUPER SOMADOR -----------------");

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    printf("Super Somador(%d,%d): ", inicio, fim);
    res = SuperSomador(inicio, fim);

    while (inicio <= fim)
    {
        if (inicio == fim)
            printf("%d ", inicio);
        else
            printf("%d + ", inicio);
        inicio++;
    }

    printf("= %d!\n", res);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
int SuperSomador(int i, int f)
{
    unsigned short cont = 0;
    while (i <= f)
    {
        cont += i;
        i++; 
    }
    return cont;
} // end SuperSomador