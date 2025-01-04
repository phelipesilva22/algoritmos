// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) 
    e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float dinheiro;

    puts("------------ CONVERSÃO PARA DÓLARES ------------");

    printf("Quantos reais você tem na carteira? R$");
    scanf("%f", &dinheiro);

    printf("Você pode comprar US$%.2f!\n", dinheiro / 3.45);

    return 0;
} // end main