// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que faça:
    a) Pergunte ao usuário o valor de seu saldo na conta do banco
    b) Ao clicar no botão "Verificar finanças":
    b1) Caso o saldo em conta for igual a zero (== 0), exiba esta frase na cor
    preta na tela: "Conta zerada".
    b2) Caso o saldo seja negativo (< 0), exiba esta frase na cor vermelha na
    tela: "Está devendo!".
    b3) Caso o saldo seja positivo (> 0), exiba esta frase na cor azul: "Saldo
    positivo! sorriso"
    Dia do programa: 19/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lSaldoConta;

    puts("------------------- FINANÇAS PESSOAIS -------------------");

    printf("Qual é o valor do saldo da sua conta no banco? R$");
    scanf("%f", &lSaldoConta);

    if (lSaldoConta == 0)
        printf("\033[30mConta Zerada!\033[0m\n");
    else if (lSaldoConta < 0)
        printf("\033[31mEstá devendo!\033[0m\n");
    else
        printf("\033[34mSaldo positivo! Sorriso!\033[0m\n");

    return 0;
} // end main