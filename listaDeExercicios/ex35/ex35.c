// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O
    aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para
    carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
    que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e
    quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a
    tabela a seguir:
    - Carros populares (aluguel de R$90 por dia)
    - Até 100Km percorridos: R$0,20 por Km
    - Acima de 100Km percorridos: R$0,10 por Km
    - Carros de luxo (aluguel de R$150 por dia)
    - Até 200Km percorridos: R$0,30 por Km
    - Acima de 200Km percorridos: R$0,25 por Km
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char tipoCarro;
    unsigned short diasAlugados;
    float distKM, precoFinal;

    puts("------------------ EMPRESA ALUGACAR ------------------");

    printf("Qual é o tipo de carro? (P/L) ");
    scanf(" %c", &tipoCarro);

    printf("Quantos dias de aluguel? ");
    scanf("%hu", &diasAlugados);

    printf("Quantos KM foram percorridos? ");
    scanf("%f", &distKM);

    if (tipoCarro == 'p' || tipoCarro == 'P')
    {
        puts("Carro Popular!");
        if (distKM <= 100)
        {
            precoFinal = (diasAlugados * 90) + (distKM * 0.20);
            printf("Preço total: R$%.2f!\n", precoFinal);
        }
        else 
        {
            precoFinal = (diasAlugados * 90) + (distKM * 0.10);
            printf("Preço total: R$%.2f!\n", precoFinal);
        }
    } else if (tipoCarro == 'l' || tipoCarro == 'L')
    {
        puts("Carro de Luxo!");
        if (distKM <= 200)
        {
            precoFinal = (diasAlugados * 150) + (distKM * 0.30);
            printf("Preço total: R$%.2f!\n", precoFinal);
        }
        else
        {
            precoFinal = (diasAlugados * 150) + (distKM * 0.25);
            printf("Preço total: R$%.2f!\n", precoFinal);
        }
    } else {
        puts("OPÇÃO DE CARRO INVÁLIDA!");
    }
    return 0;
} // end main