// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que ajude a calcular o tempo de cada fase do sono do
    ser humano.
    Sabendo que nosso sono possui fases como descreve a figura abaixo:
    Vamos considerar que as fases do sono possuem a porcentagens de
    tempo descritas na figura.
    a) Solicite ao usuário quantas horas de sono ele dormiu
    b) Ao clicar no botão "Calcular Sono", faça os cálculos necessários para
    exibir o seguinte conteúdo na tela:
    Ao dormir X horas, você dormiu:
    A horas na fase 1
    B horas na fase 2
    C horas na fase 3
    D horas na fase REM
    Dia do programa: 08/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lQtdHorasSonoDormidas;

    puts("----------------- CÁLCULO DO SONO -----------------");
    
    printf("Quantas horas de sono você dormiu? ");
    scanf("%f", &lQtdHorasSonoDormidas);

    printf("Ao dormir %.2f horas, você dormiu:\n", lQtdHorasSonoDormidas);
    printf("%.2f horas nas fase 1!\n", lQtdHorasSonoDormidas - (lQtdHorasSonoDormidas * 0.05));
    printf("%.2f horas nas fase 2!\n", lQtdHorasSonoDormidas - (lQtdHorasSonoDormidas * 0.45));
    printf("%.2f horas nas fase 3!\n", lQtdHorasSonoDormidas - (lQtdHorasSonoDormidas * 0.30));
    printf("%.2f horas nas fase REM!\n", lQtdHorasSonoDormidas - (lQtdHorasSonoDormidas * 0.20));

    return 0;
} // end main