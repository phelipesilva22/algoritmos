// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize a conversão de temperatura:
    [1] - CELSIUS
    [2] - FAHRENHEIT
    [3] - KELVIN 
    Dia do programa: 26/02/2025
*/
// --- Variáveis Globais ---
float celsius, fahrenheit, kelvin;
// --- Prótotipo das Funções ---
void menuConversor();
void linha();
float leituraCelsius();
float leituraFahrenheit();
float leituraKelvin();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short op;
    float C, F, K;

    do
    {
        system("clear");
        menuConversor();
        scanf("%hu", &op);

        switch (op)
        {
        case 1:
            linha();
            C = leituraCelsius();
            printf("CELSIUS -> FAHRENHEIT: %.2fCº = %.1fF!\n", C, (C * 1.8 + 32));
            printf("CELSIUS -> KELVIN: %.2fCº = %.1fK!\n", C, (C + 273));
            linha();
            break;
        case 2:
            linha();
            F = leituraFahrenheit();
            printf("FAHRENHEIT -> CELSIUS: %.2fF = %.1fCº!\n", F, ((F - 32) / 1.8));
            printf("FAHRENHEIT -> KELVIN: %.2fF = %.1fK!\n", F, ((F - 32) * 5 / 9 + 273));
            linha();
            break;
   
        case 3:
            linha();
    
            linha();
            break;
    
        default:
            puts("OPÇÃO INVÁLIDA!!");
            break;
        }

        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
    } while (res != 'n');
    puts("FINALIZANDO O PROGRAMA...");

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void menuConversor()
{
    puts("-------------------- CONVERSOR DE TEMPERATURA --------------------");
    puts("[1] - CELSIUS");
    puts("[2] - FAHRENHEIT");
    puts("[3] - KELVIN");
    printf("Qual temperatura você quer converter? ");
} // end menuConversor

void linha()
{
    puts("-------------------------------------------");
} // end linha

float leituraCelsius()
{
    printf("Informe o valor da temperatura em Cº: ");
    scanf("%f", &celsius);

    return celsius;
} // end leituraCelsius

float leituraFahrenheit()
{
    printf("Informe o valor da temperatura em F: ");
    scanf("%f", &fahrenheit);

    return fahrenheit;
} // end leituraFahrenheit

float leituraKelvin()
{
    printf("Informe o valor da temperatura em K: ");
    scanf("%f", &kelvin);

    return kelvin;
} // end leituraKelvin