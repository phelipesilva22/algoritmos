// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
    seu novo salário, com 15% de aumento.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float salario;

    puts("------------ AUMENTO SALARIAL ------------");

    printf("Salario do colaborador: R$: ");
    scanf("%f", &salario);

    printf("Com reajuste salarial de 15%%, seu novo salário é: R$%.2f!\n", salario * 1.15);

    return 0;
} // end main

