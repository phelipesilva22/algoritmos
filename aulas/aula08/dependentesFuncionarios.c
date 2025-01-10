// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre a quantidade de dependentes de funcionários    
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50];
    float salario;
    unsigned short qtdDependentes;

    puts("------------------- DEPENDENTES DE FUNCIONÁRIOS -------------------");
    printf("Qual é o nome do funcionário? ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Qual é o salário de %s? R$", nome);
    scanf("%f", &salario);

    printf("Qual é a quantidade de dependentes? ");
    scanf("%hu", &qtdDependentes);

    switch (qtdDependentes)
    {
    case 0:
        salario *= 1.05;
        break;
    case 1: case 2: case 3:
        salario *= 1.10;
        break;
    case 4: case 5: case 6: case 7:
        salario *= 1.15;
        break;
    default:
        salario *= 1.18;
        break;
    }
    printf("O novo salário de %s será de R$%.2f!\n", nome, salario);

    return 0;
} // end main