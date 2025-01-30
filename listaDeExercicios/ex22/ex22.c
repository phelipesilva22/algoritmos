// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
    situação em relação ao alistamento militar.
    - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
    alistamento.
    - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
    alistamento.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short ano_nascimento, idade;

    puts("------------ ALISTAMENTO MILITAR ------------");

    printf("Ano de nascimento (yyyy): ");
    scanf("%hu", &ano_nascimento);
  
    idade = 2025 - ano_nascimento;
    printf("IDADE: %hu ANOS!\n", idade);

    if (idade > 19)
        printf("Passaram %hu anos do seu alistamento!\n", idade - 18);
        else if (idade == 19)
            printf("Passou %hu ano do seu alistamento!\n", idade - 18);
            else if (idade == 18)
                puts("ANO DO ALISTAMENTO CHEGOU!!");
                    else if (idade == 17)
                        printf("Falta %hu ano do seu alistamento!\n", 18 - idade);
                            else
                                printf("Faltam %hu anos do seu alistamento!\n", 18 - idade);

    return 0;
} // end main