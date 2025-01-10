// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela
    qual foi o maior e qual foi o menor preço digitados.
    Dia do programa: 09/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short contProdutos = 1;
    float valorPreco, maiorValor = 0, menorValor;

    puts("---------------- PRODUTOS IVONE ----------------");

    while (contProdutos <= 8)
    {
        printf("Digite o valor do %hu produto: R$", contProdutos);
        scanf("%f", &valorPreco);

        if (contProdutos == 1)
            menorValor = valorPreco;

        if (valorPreco < menorValor)
            menorValor = valorPreco;

        if (valorPreco > maiorValor)
            maiorValor = valorPreco;

        contProdutos++;
    }
    printf("Produto com maior valor digitado: R$%.2f!\n", maiorValor);
    printf("Produto com menor valor digitado: R$%.2f!\n", menorValor);

    return 0;
} // end main