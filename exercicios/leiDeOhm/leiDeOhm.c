// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a 1º e a 2º LEI DE OHM
    Dia do programa: 30/01/2025
*/
// --- Variáveis Globais ---
float corrente, tensao, resistencia;
// --- Protótipo das Funções ---
void menu();
void menuPrimeiraLeiDeOhm();
float calcularCorrente(float U, float R);
float calcularTensao(float I, float R);
float calcularResistencia(float I, float U);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short opcao, opt;

    do
    {
        puts("------------------ LEI DE OHM ------------------");
        
        menu();
        scanf("%hu", &opcao);

        switch (opcao)
        {
        case 1:
            menuPrimeiraLeiDeOhm();
            scanf("%hu", &opt);
            
            switch (opt)
            {
            case 1:
                printf("Valor da tensão (V): ");
                scanf("%f", &tensao);

                printf("Valor da resistência (OHMS): ");
                scanf("%f", &resistencia);

                printf("A corrente será de %.2f!\n", calcularCorrente(tensao, resistencia));
                break;
            
            default:
                
                break;
            }

            break;
        
        default:
            puts("OPÇÃO INVÁLIDA!!!");
            break;
        }

        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");
    } while (res != 'n');
    
    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menu()
{
    puts("[1] - LEI DE OHM");
    puts("[2] - LEI DE OHM");
    puts("[3] - POTÊNCIA ELÉTRICA");
    printf("Escolha sua opção: ");
} // end menu

void menuPrimeiraLeiDeOhm()
{
    puts("[1] - CORRENTE");
    puts("[2] - TENSÃO");
    puts("[3] - RESISTẼNCIA");
    printf("O que você deseja calcular? ");
} // end menuPrimeiraLeiDeOhm

