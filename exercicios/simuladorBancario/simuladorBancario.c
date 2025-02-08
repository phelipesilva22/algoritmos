// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa qu simule um caixa eletrônico, tendo operações como:
    - Saque
    - Depósito Bancário
    - Consultar Saldo
    - Extrato Bancário
    Dia do programa: 07/02/2025
*/
// --- Protótipo das Funções ---
void menuInicial();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char respUser;
    unsigned short op;

    do
    {
        menuInicial();
        scanf("%hu", &op);


        


        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &respUser);
        respUser = tolower(respUser);
        system("clear");
    } while (respUser != 'n');
    
    

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menuInicial()
{
    puts("------------------- BANCO ITAÚ -------------------");
    puts("          O BANCO PARA VOCÊ E SUA FAMÍLIA         ");
    puts("--------------------------------------------------");
    puts("[1] - SAQUE");
    puts("[2] - DEPÓSITO BANCÁRIO");
    puts("[3] - CONSULTAR SALDO");
    puts("[4] - EXTRATO BANCÁRIO");
    printf("Selecione sua opção: ");
} // end menuInicial