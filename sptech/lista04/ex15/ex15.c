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
    mensagem "o saldo atual da conta corrente é "XX". Esta frase deverá estar
    em negrito e em vermelho somente se o saldo for menor que zero ou em
    itálico e azul caso o saldo for 0 ou mais.
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lSaldoConta, lValorDebito, lNovoSaldo;

    puts("-------------------- BANCO XPTO --------------------");

    printf("Qual é o valor do saldo da conta? R$");
    scanf("%f", &lSaldoConta);

    printf("Qual é o valor do débito? R$");
    scanf("%f", &lValorDebito);

    lNovoSaldo = lSaldoConta - lValorDebito;
    
    if (lNovoSaldo < 0)
        printf("\033[1;31mO saldo atual da conta corrente é %.2f!\033[0m\n", lNovoSaldo);
    else
        printf("\033[3;34mO saldo atual da conta corrente é %.2f!\033[0m\n", lNovoSaldo);
 



    return 0;
} // end main