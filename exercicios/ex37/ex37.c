// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Uma empresa precisa reajustar o salário dos seus funcionários, dando um
    aumento de acordo com alguns fatores. Faça um programa que leia o salário atual,
    o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa.
    No final, mostre o seu novo salário, baseado na tabela a seguir:
    - Mulheres
    - menos de 15 anos de empresa: +5%
    - de 15 até 20 anos de empresa: +12%
    - mais de 20 anos de empresa: +23%
    - Homens
    - menos de 20 anos de empresa: +3%
    - de 20 até 30 anos de empresa: +13%
    - mais de 30 anos de empresa: +25%
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char genero;
    float salarioColaborador;
    unsigned short anosTrabalhados;

    puts("---------------- REAJUSTE SALARIAL SINQIA DOWN ----------------");

    printf("Salário atual do colaborador: R$");
    scanf("%f", &salarioColaborador);

    printf("Gênero do funcionário: (M/F) ");
    scanf(" %c", &genero);
    genero = tolower(genero);

    if (genero != 'm' && genero != 'f')
    {
        puts("GÊNERO INVÁLIDO!");   
        return 0;
    }

    printf("Quantos anos você trabalha na empresa? ");
    scanf("%hu", &anosTrabalhados);

    if (genero == 'f')
    {
        if (anosTrabalhados < 15)
            printf("Com o reajuste de 5%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.05);
        else if (anosTrabalhados <= 20)
            printf("Com o reajuste de 12%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.12);    
        else
            printf("Com o reajuste de 23%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.23);   
    } else 
    {
        if (anosTrabalhados < 20)
            printf("Com reajuste de 3%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.03);
        else if (anosTrabalhados <= 30)
            printf("Com reajuste de 13%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.13);
        else
            printf("Com reajuste de 25%%, seu novo salário é R$%.2f!\n", salarioColaborador * 1.25);
    }

    return 0;
} // end main