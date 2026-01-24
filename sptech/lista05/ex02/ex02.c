// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que exibe a classe social de uma pessoa que mora em
    Tuvalu (um dos menores países do mundo) conforme a renda familiar
    mensal.
    a) Solicite a renda familiar mensal
    b) Ao clicar no botão “Analisar Renda”, deve aparecer abaixo uma dessas
    frases:
    "Classe E" (até 250)
    "Classe D" (+250 até 900)
    "Classe C" (+900 até 2500)
    "Classe B" (+2500 até 9500)
    "Classe A" (+9500)
    Dia do programa: 24/01/2026
*/
#define CLASSE_E 250
#define CLASSE_D 900
#define CLASSE_C 2500
#define CLASSE_B 9500
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lRendaMensal;

    puts("----------------- RENDA FAMILIAR EM TUVALU -----------------");

    printf("Qual é a renda familiar mensal? R$");
    scanf("%f", &lRendaMensal);

    if (lRendaMensal <= CLASSE_E)
        puts("CLASSE E!");
    else if (lRendaMensal <= CLASSE_D)
        puts("CLASSE D!");
    else if (lRendaMensal <= CLASSE_C)
        puts("CLASSE C!");
    else if (lRendaMensal <= CLASSE_B)
        puts("CLASSE B!");
    else
        puts("CLASSE A!");

    return 0;
} // end main