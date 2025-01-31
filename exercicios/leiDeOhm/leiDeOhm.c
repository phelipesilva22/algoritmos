// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a 1º e 2º LEI DE OHM, além de realizar cálculo de potência
    Dia do programa: 30/01/2025
*/
// --- Variáveis Globais ---
float corrente, tensao, resistencia;
// --- Protótipo das Funções ---
void menu();
void menuPrimeiraLeiDeOhm();
void menuPotencia();
void linha();

void lerCorrente();
void lerTensao();
void lerResistencia();

float calcularCorrente(float U, float R);
float calcularTensao(float I, float R);
float calcularResistencia(float I, float U);
float calcularResistenciaEletrica(float p, float L, float A);

float calcular1FormulaPotencia(float R, float I);
float calcular2FormulaPotencia(float U, float R);
float calcular3FormulaPotencia(float U, float I);
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
                lerResistencia();
                lerTensao();                
               
                printf("A corrente será de %.5fA!\n", calcularCorrente(tensao, resistencia));
                linha();
                break;
            
            case 2:
                linha();
                lerCorrente();
                lerResistencia();

                printf("A tensão será de %.2fV!\n", calcularTensao(corrente, resistencia));
                linha();
                break;

            case 3:
                linha();
                lerCorrente();
                lerTensao();

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

        case 3:
            menuPotencia();
            scanf("%hu", &opt);

            if (opt == 1)
            {
                linha();
                lerCorrente();
                lerResistencia();
                printf("A potência elétrica será de %.2fW!\n", calcular1FormulaPotencia(resistencia, corrente));
                linha();
            } else if (opt == 2)
            {
                linha();
                lerTensao();
                lerResistencia();
                printf("A potência elétrica será de %.2fW!\n", calcular2FormulaPotencia(tensao, resistencia));
                linha();
            } else if (opt == 3)
            {
                linha();
                lerTensao();
                lerCorrente();
                printf("A potência elétrica será de %.2fW!\n", calcular3FormulaPotencia(tensao, corrente));
                linha();
            } else
            {
                puts("OPÇÃO INVÁLIDA!!!!");
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

void menuPotencia()
{
    puts("------------------ POTÊNCIA ELÉTRICA ------------------");
    puts("[1] - 1ª FÓRMULA");
    puts("[2] - 2ª FÓRMULA");
    puts("[3] - 3ª FÓRMULA");
    printf("Selecione a fórmula da potência desejada: ");
} // end menuPotencia

void linha()
{
    puts("------------------------------------------------");
} // end linha

void lerCorrente()
{
    printf("Valor da corrente (A): ");
    scanf("%f", &corrente);
} // end lerCorrente

void lerTensao()
{
    printf("Valor da tensão (V): ");
    scanf("%f", &tensao);
} // end lerTensao

void lerResistencia()
{
    printf("Valor da resistência (OHMS): ");
    scanf("%f", &resistencia);
} // end lerResistencia

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

float calcular1FormulaPotencia(float R, float I)
{
    return R * (I * I);
} // end calcular1FormulaPotencia

float calcular2FormulaPotencia(float U, float R)
{
    return (U * U) / R;
} // end calcular2FormulaPotencia

float calcular3FormulaPotencia(float U, float I)
{
    return U * I;
} // end calcular3FormulaPotencia