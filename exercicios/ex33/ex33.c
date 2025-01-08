// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa para aprovar ou não o empréstimo bancário para a compra
    de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e
    em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que
    ela não pode exceder 30% do salário ou então o empréstimo será negado.
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short anos_a_pagar;
    float valorCasa, salarioComprador, prestacaoMensal;

    puts("---------------- EMPRÉSTIMO BANCÁRIO ----------------");

    printf("Qual é o valor da casa? R$");
    scanf("%f", &valorCasa);

    printf("Salário do comprador: R$");
    scanf("%f", &salarioComprador);

    printf("Quantos anos você vai pagar? ");
    scanf("%hu", &anos_a_pagar);

    prestacaoMensal = valorCasa / (12 * anos_a_pagar);

    printf("LIMITE DE 30%% do salário: %.2f!\n", salarioComprador * 0.30);
    
    if (prestacaoMensal <= salarioComprador * 0.30)
        printf("Valor da prestação mensal: R$%.2f!\n", prestacaoMensal);
    else
        puts("EMPRÉSTIMO BANCÁRIO NEGADO!");


    return 0;
} // end main