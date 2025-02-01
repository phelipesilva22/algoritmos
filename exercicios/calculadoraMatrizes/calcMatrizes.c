// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que gere o tamanho de duas matrizes, preenchendo elas com números aleatórios. Após isso, será realizada as 4 operações aritméticas básicas, resultando em uma nova matriz com os valores calculados das duas matrizes anteriores de acordo com a operação aritmética escolhida.
    Dia do programa: 31/01/2025
*/
// --- Protótipo das Funções ---
void menuOperacoesAritmeticas();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short op;

    menuOperacoesAritmeticas();
    scanf("%hu", &op);

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menuOperacoesAritmeticas()
{
    puts("--------------------- CALCULADORA DE MATRIZES ---------------------");
    puts("[1] - ADIÇÃO");
    puts("[2] - SUBTRAÇÃO");
    puts("[3] - MULTIPLICAÇÃO");
    puts("[4] - DIVISÃO");
    printf("Selecione a operação aritmética desejada: ");
} // end menuOperacoesAritmeticas