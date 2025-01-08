// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
    na tela uma das mensagens abaixo:
    - O primeiro valor é o maior
    - O segundo valor é o maior
    - Não existe valor maior, os dois são iguais
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2;

    puts("------------- COMPARAÇÃO ENTRE NÚMEROS -------------");

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2)
        puts("O primeiro valor é o maior!");
    else if (valor1 < valor2)
        puts("O segundo valor é o maior!");
    else
        puts("Não existe valor maior, os dois são iguais");


    return 0;
} // end main