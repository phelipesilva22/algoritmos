// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Na cidade de Algoritmolândia a luz custa R$ 0,85 por KWh. Crie um
    programa que:
    a) Solicite a quantidade de KWh consumida no mês
    b) Ao clicar em "Calcular conta de luz", calcule o valor da conta no mês
    c) Dê um desconto de 10% somente se a quantidade for menor que 100
    KWh
    d) Exiba um alert com o valor da conta a ser paga.
    Dia do programa: 17/01/2026
*/
#define VALOR_KHW 0.85
#define DESCONTO_LUZ 0.10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lQtdKWConsumidaMes, lValorContaLuz;

    puts("--------------------- BEM VINDO A ALGORITMOLÂNDIA ---------------------");

    printf("Quantas KWh foi consumida no mês? ");
    scanf("%f", &lQtdKWConsumidaMes);

    lValorContaLuz = lQtdKWConsumidaMes * VALOR_KHW;
    if (lQtdKWConsumidaMes < 100)
        lValorContaLuz -= lValorContaLuz * DESCONTO_LUZ;

    printf("Valor da conta de luz nesse mês: R$%.2f!\n", lValorContaLuz);


    return 0;
} // end main