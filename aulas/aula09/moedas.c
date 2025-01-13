// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 9: ESTRUTURAS DE REPETIÇÃO (1) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que faça a conversão de moedas 4x
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short cont = 1, qtdConversaoMoedas;
    float valorReal;

    puts("--------------------- CONVERSÃO DE MOEDAS ---------------------");

    printf("Quantas vezes você quer converter? ");
    scanf("%hu", &qtdConversaoMoedas);

    while (cont <= qtdConversaoMoedas)
    {
        printf("Digite %dº valor para conversão: R$", cont);
        scanf("%f", &valorReal);
        printf("Conversão para dolar -> R$%.1f = US$%.1f!\n\n", valorReal, valorReal / 2.20);
        cont++;
    }

    return 0;
} // end main