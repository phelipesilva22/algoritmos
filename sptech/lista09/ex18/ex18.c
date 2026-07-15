// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa no qual:
    a) O usuário informa quantos depósitos ele fez no banco
    b) O usuário informa o valor de cada depósito, pois ele sempre depositava
    exatamente o mesmo valor
    c) Ao clicar em "Acompanhar grana", deve aparecer o valor, mês a mês,
    como neste exemplo
    1º Mês: R$ 500.00
    2º Mês: R$ 1000.00
    3º Mês: R$ 1500.00
    4º Mês: R$ 2000.00
    5º Mês: R$ 2500.00
    Total guardado: R$2500.00
    No exemplo acima, o usuário informou 5 depósitos e 500 por depósito.
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

    for (int i = 0; i < lQtdDepositos; i++)
    {
        lValorTotalDeposito += lValorDeposito;
        printf("%dº Mês: R$%.2f\n", i + 1, lValorTotalDeposito);
    }
    printf("Total guardado: R$%.2f\n", lValorTotalDeposito);


    return 0;
} // end main