// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia o número de dias trabalhados em um mês e mostre o
    salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int diasTrabalhados, salario;

    puts("---------------- CÁLCULO FOLHA DE PAGAMENTO ----------------");

    printf("Quantos dias trabalhados no mês? ");
    scanf("%hu", &diasTrabalhados); 

    salario = diasTrabalhados * 200;
    printf("Salario do funcionário: R$%hu.00!\n", salario);

    return 0;
} // end main