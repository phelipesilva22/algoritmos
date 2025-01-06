// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 7: ESTRUTURAS CONDICIONAIS ---
    Professor: Gustavo Guanabara
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Refazer exercício da Creuza sobre o cálculo da idade utilizando estruturas condicionais
    Dia do programa: 05/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int ano_atual, ano_nasc, idade;

    puts("------------- CÁLCULO DA IDADE -------------");

    printf("Digite o ano atual (yyyy): ");
    scanf("%hu", &ano_atual);

    printf("Digite o ano de nascimento: ");
    scanf("%hu", &ano_nasc);

    idade = ano_atual - ano_nasc;
    printf("Em %hu você terá %hu ANOS ", ano_atual, idade);

    if (idade >= 21)
        puts("e terá atingido a maioridade!");

    return 0;
} // end main