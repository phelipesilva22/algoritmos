// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que recebe uma data de nascimento (dia, mês e ano) e calcule a porcentagem de anjo e a porcentagem de safado de uma pessoa. O cálculo ocorre da seguinte maneira:
    safadeza = somatorio(mes) + (ano/100) * (50-dia)
    Dia do programa: 26/01/2025
*/
// --- Protótipo da Funções ---
void wesleySafadao(unsigned short a, unsigned short m, unsigned short d);
int somatorio(unsigned short month);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short ano, mes, dia;

    puts("------------------ ALGORITMO SAFADÃO ------------------");

    printf("Digite o dia (dd): ");
    scanf("%hu", &dia);

    printf("Digite o mês (mm): ");
    scanf("%hu", &mes);

    printf("Digite o ano (yyyy): ");
    scanf("%hu", &ano);
    
    wesleySafadao(dia, mes, ano);

    return 0;
} // end main

// --- Desenvolvimento da Funções ---

void wesleySafadao(unsigned short d, unsigned short m, unsigned short a)
{
    int somFun; 
    float safadeza, anjo;

    somFun = somatorio(m);
    safadeza = somFun + ((float) a / 100) * (50 - d);
    anjo = 100 - safadeza;
    printf("%.1f%% ANJO, PERFEITO, MAS AQUELE %.1f%% VAGABUNDO!!\n", anjo, safadeza);
} // end wesleySafadao

int somatorio(unsigned short month)
{
    int somatorio = 0;
    for (int i = 1; i <= month; i++)
    {
        somatorio += i;
    }
    return somatorio;
} // end somatorio