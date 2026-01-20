// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que auxilie um banco a identificar quem tem renda o
    suficiente para fazer o financiamento da casa própria.
    a) Solicite o valor da renda familiar
    b) Solicite o valor da prestação
    c) Ao clicar em "Verificar financiamento", exiba na página a mensagem "A
    prestação corresponde a XX% da renda familiar" (divida a prestação pela
    renda e multiplique por 100)
    d) Se o valor calculado acima for maior que 30%, exiba também a
    mensagem abaixo em negrito e em vermelho:
    "Será necessário complementar a renda familiar"
    Dia do programa: 17/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValorRendaFamiliar, lValorPrestacao, lPorcentagemRendaFamiliar;

    puts("------------------ FINANCIAMENTO MINHA CASA MINHA VIDA ------------------");

    printf("Qual é o valor da renda familiar? R$");
    scanf("%f", &lValorRendaFamiliar);

    printf("Qual é o valor da prestação? R$");
    scanf("%f", &lValorPrestacao);

    lPorcentagemRendaFamiliar = (lValorPrestacao / lValorRendaFamiliar) * 100;
    printf("A prestação corresponde a %.2f%% da renda familiar!\n", lPorcentagemRendaFamiliar);

    if (lPorcentagemRendaFamiliar > 30)
        puts("SERÁ NECESSÁRIO COMPLEMENTAR A RENDA FAMILIAR!");

    return 0;
} // end main