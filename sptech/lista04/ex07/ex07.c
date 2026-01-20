// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Criar um programa que auxilie o Banco XPTO a identificar quem entrou
    no cheque especial.
    a) Solicite o saldo da conta
    b) Solicite o valor do débito (ou seja, valor a tirar da conta)
    c) Ao clicar em "Analisar conta", calcule o novo saldo da conta e exiba a
    mensagem "O saldo atual da conta corrente é XX". Esta frase deverá estar
    em negrito e vermelho somente se o saldo for menor que zero.
    Dia do programa: 17/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lSaldoConta, lValorDebito, lSaldoCorrente;

    puts("-------------------- BANCO XPTO --------------------");

    printf("Qual é o saldo da conta? R$");
    scanf("%f", &lSaldoConta);

    printf("Qual é o valor do débito? R$");
    scanf("%f", &lValorDebito);

    lSaldoCorrente = lSaldoConta - lValorDebito;

     if (lSaldoCorrente < 0) {
        printf("\033[1;31m");
        printf("O saldo atual da conta corrente e %.2f\n", lSaldoCorrente);
        printf("\033[0m"); // Reseta a cor
    } else 
        printf("O saldo atual da conta corrente e %.2f\n", lSaldoCorrente);

    return 0;
} // end main