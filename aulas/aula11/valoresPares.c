// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 11: ESTRUTURAS DE REPETIÇÃO (3) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre os números pares com o FOR
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor;

    puts("---------------- VALORES PARES ----------------");

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 != 0)
        valor--;

    for (int i = valor; i >= 0; i -= 2)
        printf("%d ", i);
    puts("FIM!");

    return 0;
} // end main