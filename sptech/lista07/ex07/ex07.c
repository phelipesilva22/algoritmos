// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Vamos melhorar o exercício anterior. Crie um programa o qual:
    a) Tenha o seguinte texto no topo:
    "Calculadora de cansaço aprimorada do aluno SPTech"
    b) Tenha o texto "Meio de transporte" e uma input para o usuário inserir o
    meio de transporte dele, podendo ser:
    Ônibus.
    Metrô.
    Carro.
    Bicicleta.
    c) Tenha um input de texto para o usuário digitar a distância da casa dele
    até a faculdade, com o texto "Distância da faculdade (KM)" ao lado.
    d) Tenha o botão "Calcular cansaço" que ao clicar mostrar em um alerta o
    nível de cansaço do usuário.
    e) Se a distância da faculdade for de ATÉ 10 KM:
    SE o meio de transporte for "Carro" OU "Metrô" OU "Ônibus" exiba um alert
    com a frase ("Tá tranks...").
    SENÃO exiba um alert com a frase ("É... um pouco cansado...").
    f) Se a distância da faculdade for MAIOR que 10 KM:
    SE o meio de transporte for "Carro" exiba um alert com a frase ("É... um
    pouco cansado...");
    SE o meio de transporte for "Metrô" OU "Ônibus" exiba um alert com a
    frase ("Bem cansado...").
    SE o meio de transporte for "Bicicleta" exiba um alert com a frase ("Vish...
    tá só o pó...").
    Dia do programa: 11/02/2026
*/
#define CARRO "CARRO"
#define ONIBUS "ONIBUS"
#define METRO "METRO"
#define UBER "UBER"
#define BICICLETA "BICICLETA"
// --- Protótipo da Função ---
void converterParaMaiuscula(char *pMeioTransporte);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lMeioTransporte[50];
    float lDistanciaCasaFaculdade;
    
    puts("------------------- CALCULADORA DE CANSAÇO DO ALUNO SPTECH -------------------");

    printf("Qual meio de transporte que você vai para a faculdade? ");
    fgets(lMeioTransporte, sizeof(lMeioTransporte), stdin);
    lMeioTransporte[strcspn(lMeioTransporte, "\n")] = '\0';

    printf("Qual é a distância até a sua faculdade (KM)? ");
    scanf("%f", &lDistanciaCasaFaculdade);

    converterParaMaiuscula(lMeioTransporte);
    if (lDistanciaCasaFaculdade <= 10)
    {   
        if (strcmp(lMeioTransporte, CARRO) == 0 || strcmp(lMeioTransporte, METRO) == 0 || strcmp(lMeioTransporte, ONIBUS) == 0)
            puts("Tá tranks...");
        else
            puts("É... um pouco cansado...");
    } else 
    {
        if (strcmp(lMeioTransporte, CARRO) == 0)
            puts("É... um pouco cansado...");
        else if (strcmp(lMeioTransporte, METRO) == 0 || strcmp(lMeioTransporte, ONIBUS) == 0)
            puts("Bem cansado...");
        else if (strcmp(lMeioTransporte, BICICLETA) == 0)
            puts("Vish tá só o pó...");
    }

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void converterParaMaiuscula(char *pMeioTransporte)
{
    for (int i = 0; pMeioTransporte[i] != '\0'; i++)
        pMeioTransporte[i] = toupper(pMeioTransporte[i]);
}