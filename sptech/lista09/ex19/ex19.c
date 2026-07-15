// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refaça o programa anterior de tal forma que, a cada 3 depósitos o
    banco dê um bônus de 1% sobre o valor acumulado após o depósito. Ex:
    1º Mês: R$ 500.00
    2º Mês: R$ 1000.00
    3º Mês: R$ 1515.00
    4º Mês: R$ 2015.00
    5º Mês: R$ 2515.00
    6º Mês: R$ 3045.15
    Total guardado: R$3045.15
    Note que nos meses 3 e 6, o valor aumentou em 1% do total após o
    depósito.
    Dia do programa: 14/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdDepositos;
    float lValorDeposito, lValorTotalDeposito = 0.0;

    puts("--------------------- BANCO DO BRASIL ---------------------");

    printf("Quantos depósitos você fez no banco? ");
    scanf("%hd", &lQtdDepositos);

    printf("Qual foi o valor do depósito? R$");
    scanf("%f", &lValorDeposito);

    for (int i = 1; i <= lQtdDepositos; i++)
    {
        if (i % 3 == 0)
        {
            lValorTotalDeposito += lValorDeposito;
            lValorTotalDeposito *= 1.01;
        }
        else
            lValorTotalDeposito += lValorDeposito;
        printf("%dº Mês: R$%.2f\n", i, lValorTotalDeposito);
    }
    printf("Total guardado: R$%.2f\n", lValorTotalDeposito);

    
    return 0;
} // end main