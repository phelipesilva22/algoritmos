// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que calcule o fatorial de um número
    Dia do programa: 13/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int num, fat, cont;

    puts("--------------- FATORIAL DE UM NÚMERO ---------------");

    printf("Digite um número: ");
    scanf("%d", &num);
    fat = num;
    cont = fat - 1;
    do
    {
        fat *= cont;
        cont--;
    } while (fat >= 0);
    printf("Fatorial de %d é %d!\n", num, fat);

    return 0;
} // end main