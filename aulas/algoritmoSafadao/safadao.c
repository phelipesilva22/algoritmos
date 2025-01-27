// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que recebe uma data de nascimento (dia, mês e ano) e calcule a porcentagem de anjo e a porcentagem de safado de uma pessoa. O cálculo ocorre da seguinte maneira:
    safadeza = somatorio(mes) + (ano/100) * (50-dia)
    Dia do programa: 26/01/2025
*/
// --- Protótipo da Função ---
void wesleySafadao(unsigned short a, unsigned short m, unsigned short d);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short ano, mes, dia, somatorioMes = 0;

    puts("------------------ ALGORITMO SAFADÃO ------------------");

    printf("Digite o ano (yyyy): ");
    scanf("%hu", &ano);

    printf("Digite o mês (dd): ");
    scanf("%hu", &mes);

    printf("Digite o dia: ");
    scanf("%hu", &dia);

    wesleySafadao(ano, mes, dia);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void wesleySafadao(unsigned short a, unsigned short m, unsigned short d)
{
    unsigned short somatorioMes = 0;

    somatorioMes += m;
} // end wesleySafadao