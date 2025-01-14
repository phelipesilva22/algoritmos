// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a tabuada até o número desejado pelo usuário
    Dia do programa: 13/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contador = 1;
    int tabuada, numerador;

    puts("---------------- TABUADA ----------------");

    printf("Qual tabudada você deseja ver? ");
    scanf("%d", &tabuada);

    printf("Até qual número será a tabuada do %d: ", tabuada);
    scanf("%d", &numerador);

    do
    {
        printf("%d X %d = %d\n", tabuada, contador, tabuada * contador);
        contador++;
    } while (contador <= numerador);
    puts("Fim");

    return 0;
} // end main