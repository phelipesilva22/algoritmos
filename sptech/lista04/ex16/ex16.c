// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: O Mercado BOM DOCE está em promoção, qualquer chocolate custa R$
    3,00 cada e se a compra for acima de uma dúzia de chocolates o preço cai
    para R$ 2,50 cada um. Criar um programa que auxilie o Mercado a calcular
    o valor da compra de chocolate
    a) Solicite a quantidade de chocolates comprados
    b) Após clicar num botão "Compra", exiba a mensagem "o valor da sua
    compra foi de XXX".
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdChocolatesComprados;
    float lValorChocolate;

    puts("----------------------- Mercado BOM DOCE  -----------------------");

    printf("Qual foi a quantidade de chocolates comprados? ");
    scanf("%d", &lQtdChocolatesComprados);
    
    lValorChocolate = lQtdChocolatesComprados * 3.00;
    if (lQtdChocolatesComprados > 12)
        lValorChocolate = lQtdChocolatesComprados * 2.50;

    printf("O valor da sua compra foi de %.2f!\n", lValorChocolate);

    return 0;
} // end main