// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que ajude uma pessoa a calcular o valor
    da sua conta de energia com base no consumo em kWh e nas taxas de
    energia
    a) Solicite o consumo mensal em kWh
    b) Solicite o valor em reais por kWh
    c) Ao clicar em "Calcular Conta", calcule o valor da conta sendo o valor em
    reais por cada kWh consumido.
    d) Caso o consumo seja superior a 300 kWh, aplique uma multa de 10%
    sobre o valor total
    e) Exiba o valor final da conta e uma das seguintes mensagens:
    "O valor da conta totalizou R$99"
    "Gastos dentro do esperado" (se o consumo for até 300 kWh)
    "Gastos excessivos, multa aplicada" (se o consumo for maior que 300 kWh
    até 500 kWh)
    "Economize energia, sua conta está muito alta!" (se o consumo for maior
    que 500 kWh)
    Dia do programa: 27/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lConsumokHW, lValorkWh, lContaEnergia;

    puts("-------------------- CONSUMO ENERGIA EMPRESA --------------------");

    printf("Quanto foi o consumo mensal de energia (kWh) nesse mês? ");
    scanf("%f", &lConsumokHW);

    printf("Qual foi o valor da conta? R$");
    scanf("%f", &lValorkWh);

    lContaEnergia =  lConsumokHW > 300 ? (lValorkWh * lConsumokHW) * 1.10 : lValorkWh * lConsumokHW;

    printf("O valor da conta totalizou: R$%.2f!\n", lContaEnergia);
    
    if (lConsumokHW <= 300)
        puts("Gastos dentro do esperado!");
    else if (lConsumokHW <= 500)
        puts("Gastos excessivos, multa aplicada!");
    else 
        puts("Economize energia, sua conta está muito alta!");

    return 0;
} // end main