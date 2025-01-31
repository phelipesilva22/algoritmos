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
void linha();
float calcularCorrente(float U, float R);
float calcularTensao(float I, float R);
float calcularResistencia(float I, float U);
float calcularResistenciaEletrica(float p, float L, float A);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short opcao, opt;
    float resistividade, comprimento, areaTransversal;

    do
    {        
        menu();
        scanf("%hu", &opcao);
        system("clear");

        switch (opcao)
        {
        case 1:
            menuPrimeiraLeiDeOhm();
            scanf("%hu", &opt);
            
            switch (opt)
            {
            case 1:
                linha();
                printf("Valor da resistência (OHMS): ");
                scanf("%f", &resistencia);
                
                printf("Valor da tensão (V): ");
                scanf("%f", &tensao);

                printf("A corrente será de %.5fA!\n", calcularCorrente(tensao, resistencia));
                linha();
                break;
            
            case 2:
                linha();
                printf("Valor da corrente (A): ");
                scanf("%f", &corrente);

                printf("Valor da resistência (OHMS): ");
                scanf("%f", &resistencia);

                printf("A tensão será de %.2fV!\n", calcularTensao(corrente, resistencia));
                linha();
                break;

            case 3:
                linha();
                printf("Valor da corrente (A): ");
                scanf("%f", &corrente);

                printf("Valor da tensão (V): ");
                scanf("%f", &tensao);

                printf("A resistência será de %.2f OHMS!\n", calcularResistencia(corrente, tensao));
                linha();
                break;

            default:    
                puts("OPÇÃO INVÁLIDA!!");
                break;
            }
            break;

        case 2:
            puts("------------------ LEI DE OHM ------------------");
            
            printf("Valor da resistividade (p): ");
            scanf("%f", &resistividade);

            printf("Valor do comprimento (L): ");
            scanf("%f", &comprimento);

            printf("Valor da área transversal (A): ");
            scanf("%f", &areaTransversal);

            linha();
            printf("A resistência elétrica será de %.2f OHMS!\n", calcularResistenciaEletrica(resistividade, comprimento, areaTransversal));
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
    puts("--- FINALIZANDO O PROGRAMA ---");

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menu()
{
    puts("------------------ LEI DE OHM ------------------");
    puts("[1] - 1ª LEI DE OHM");
    puts("[2] - 2ª LEI DE OHM");
    puts("[3] - POTÊNCIA ELÉTRICA");
    printf("Escolha sua opção: ");
} // end menu

void menuPrimeiraLeiDeOhm()
{
    puts("------------------ LEI DE OHM ------------------");
    puts("[1] - CORRENTE");
    puts("[2] - TENSÃO");
    puts("[3] - RESISTẼNCIA");
    printf("O que você deseja calcular? ");
} // end menuPrimeiraLeiDeOhm

void linha()
{
    puts("------------------------------------------------");
} // end linha

float calcularCorrente(float U, float R)
{
    return U / R;
} // end calcularCorrente

float calcularTensao(float I, float R)
{
    return I * R;
} // end calcularTensao

float calcularResistencia(float I, float U)
{
    return U / I;
} // enc calcularResistencia

float calcularResistenciaEletrica(float p, float L, float A)
{
    return p * L / A;
} // end calcularResistenciaEletrica