// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 7: ESTRUTURAS CONDICIONAIS ---
    Professor: Gustavo Guanabara
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer programa que mostre se a pessoa pode dirigir ou não
    Dia do programa: 05/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int ano_atual, ano_nasc, idade;

    puts("--------------------------");
    puts(" DEPARTAMENTO DE TRÂNSITO ");
    puts("--------------------------");
    
    printf("Ano atual (yyyy): ");
    scanf("%hu", &ano_atual);

    printf("Ano de nascimento (yyyy): ");
    scanf("%hu", &ano_nasc);

    idade = ano_atual - ano_nasc;
    puts("-------- STATUS --------");
    printf(" IDADE: %hu ANOS!\n", idade);
    
    if (idade >= 18)
        puts(" APTO A TIRAR CARTEIRA");
    else 
        puts(" INAPTO A TIRAR CARTEIRA");
    
    puts("------------------------");

    return 0;
} // end main