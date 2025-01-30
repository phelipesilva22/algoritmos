// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
    para todos, mas especialmente para mulheres. Faça um programa que leia nome,
    sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
    que:
    - Homens ganham 5% de desconto
    - Mulheres ganham 13% de desconto
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char cliente[50], sexo;
    float valorCompras;

    puts("---------- DIA DAS MULHERES: PROMOÇÃO MARISA ----------");

    printf("Nome do cliente: ");
    fgets(cliente, sizeof(cliente), stdin);
    cliente[strcspn(cliente, "\n")] = '\0';

    printf("Informe o sexo: (M/F) ");
    scanf(" %c", &sexo);

    if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F')
    {
        puts("SEXO INFORMADO INCORRETAMENTE\n");
        printf("Informe o sexo: (M/F) ");
        scanf(" %c", &sexo);
    } else
    {
        printf("Valor das compras de %s: R$", cliente);
        scanf("%f", &valorCompras);

        if (sexo == 'm' || sexo == 'M')
            printf("Com 5%% de DESCONTO, %s, o valor da sua compra é: R$%.2f!\n", cliente, valorCompras * 0.95);
        else if (sexo == 'f' || sexo == 'F')
            printf("Com 13%% de DESCONTO, %s, o valor da sua compra é: R$%.2f!\n", cliente, valorCompras * 0.87);
    }
    return 0;
} // end main