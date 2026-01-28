// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que ajude a gerência de uma empresa a
    avaliar se a meta de vendas foi atingida e o percentual de sucesso.
    a) Solicite a meta de vendas e o total de vendas realizadas
    b) Ao clicar em "Analisar Vendas", calcule o percentual de sucesso com a
    fórmula: percentual = (vendas_realizadas / meta) * 100
    c) Exiba uma das seguintes mensagens:
    "Meta não atingida, atendeu apenas X%" (onde X é o percentual, se for
    menor que 100%)
    "Meta atingida, parabéns!" (se o percentual for igual a 100%)
    "Meta ultrapassada! Ultrapassou em Y%" (onde Y é a diferença entre o
    percentual e 100, se for maior que 100%)
    Dia do programa: 27/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lMetaVendas, lVendasRealizadas, lPercentualVendas;

    puts("------------------------ GERÊNCIA DA EMPRESA ------------------------");

    printf("Qual é a meta de vendas da empresa? R$");
    scanf("%f", &lMetaVendas);

    printf("Qual foi o total de vendas? R$");
    scanf("%f", &lVendasRealizadas);

    lPercentualVendas = (lVendasRealizadas / lMetaVendas) * 100;
    if (lPercentualVendas < 100)
        printf("Meta não atingida, atendeu apenas %.2f%%!\n", lPercentualVendas);
    else if (lPercentualVendas == 100)
        puts("Meta atingida, parabéns!");
    else
        printf("Meta ultrapassada! Ultrapassou em %.2f%%!\n", lPercentualVendas);
        
    return 0;
} // end main