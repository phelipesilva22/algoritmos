// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia o preço de um produto, calcule e mostre o seu
    PREÇO PROMOCIONAL, com 5% de desconto.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float precoProduto;

    puts("---------------- PROMOÇÃO LOJAS PERNAMBUCANAS ----------------");

    printf("Valor do produto: R$");
    scanf("%f", &precoProduto);

    printf("Com o desconto de 5%%, o valor do produto será de: R$%.2f!\n", precoProduto * 0.95);

    return 0;
} // end main