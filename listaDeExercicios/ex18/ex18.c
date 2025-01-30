// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se ela pode ou não votar.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int ano_nascimento, idade;

    puts("------------ ELEIÇÕES 2026 ------------");

    printf("Ano de nascimento: ");
    scanf("%hu", &ano_nascimento);

    idade = 2026 - ano_nascimento;
    printf("IDADE: %hu ANOS!\n", idade);

    if (idade < 16)
        puts("NÃO VOTA!");
    else if (idade < 18)
        puts("VOTO FACULTATIVO");
    else    
        puts("VOTO OBRIGATÓRIO!");

    return 0;
} // end main