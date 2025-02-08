// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa qu simule um caixa eletrônico, tendo operações como:
    - Saque
    - Depósito Bancário
    - Consultar Saldo
    - Extrato Bancário
    Dia do programa: 07/02/2025
*/
// --- Variáveis Globais ---
float saldo = 0.0, saque, deposito;
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
        system("clear");

        switch (op)
        {
        case 1:
            do
            {
                puts("------------------- SAQUE BANCÁRIO -------------------");
                printf("Informe o valor do saque: R$");
                scanf("%f", &saque);
                
                if (saldo <= 0.0 || saque < 0.0)
                {
                    puts("SAQUE NÃO PERMITIDO! TENTE NOVAMENTE");
                    sleep(1);
                    system("clear");
                } else 
                {
                    saldo -= saque;
                    printf("SAQUE DE R$%.1f REALIZADO COM SUCESSO!\n", saque);
                }
            } while (saldo <= 0.0 || saque < 0.0);
            break;
        
        case 2:
            puts("------------------- DEPÓSITO BANCÁRIO -------------------");
            printf("Informe o valor do depósito: R$");
            scanf("%f", &deposito);
            printf("DEPÓSITO DE R$%.1f REALIZADO COM SUCESSO!\n", deposito);
            saldo += deposito;
            break;

        case 3: 
            puts("------------------- CONSULTA SALDO BANCÁRIO -------------------");
            printf("SALDO ATUAL: R$%.1f!\n", saldo);
            break;      

        default:
            puts("OPÇÃO INVÁLIDA!! TENTE NOVAMENTE!!");
            break;
        }


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