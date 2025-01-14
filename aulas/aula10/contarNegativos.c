// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
     --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre o total de números negativos
    Dia do programa: 13/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int cont = 1, num, totNumNegativos = 0;    

    puts("------------------ NÚMEROS NEGATIVOS ------------------");

    do
    {
        printf("Digite o %dº número: ", cont);
        scanf("%d", &num);
        cont++;

        if (num < 0)
            totNumNegativos++;

    } while (cont <= 5);
    printf("Total de números negativos: %d!\n", totNumNegativos);    

    return 0;
} // end main