// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Tenha o seguinte texto no topo:
    "Calculadora de cansaço do aluno SPTech"
    b) Tenha o texto "Meio de transporte" e uma input para o usuário inserir o
    meio de transporte dele, podendo ser:
    Ônibus
    Metrô
    Carro
    Bicicleta
    Uber
    c) Tenha o botão "Calcular cansaço" que ao clicar mostrar em um alerta o
    nível de cansaço do usuário.
    d) Se o meio de transporte escolhido for "Carro" OU "Uber", exiba em um
    alert: "Tá tranquilo..."
    e) Se o meio de transporte escolhido for "Metrô" OU "Ônibus", exiba em um
    alert: "Um pouco cansado".
    f) Se o meio de transporte escolhido for "Bicicleta", exiba em um alert:
    "Vish... vive cansado."
    Dia do programa: 05/02/2026
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
    
    puts("------------------- CALCULADORA DE CANSAÇO DO ALUNO SPTECH -------------------");

    printf("Qual meio de transporte que vocẽ vai para a faculdade? ");
    fgets(lMeioTransporte, sizeof(lMeioTransporte), stdin);
    lMeioTransporte[strcspn(lMeioTransporte, "\n")] = '\0';

    converterParaMaiuscula(lMeioTransporte);

    if (strcmp(lMeioTransporte, CARRO) == 0 || strcmp(lMeioTransporte, UBER) == 0)
        puts("Tá tranquilo!");
    else if (strcmp(lMeioTransporte, METRO) == 0 || strcmp(lMeioTransporte, ONIBUS) == 0)
        puts("Um pouco cansado!");
    else if (strcmp(lMeioTransporte, BICICLETA) == 0)
        puts("Vish... vive cansado!");
    else 
        puts("Meio de transporte não encontrado");

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void converterParaMaiuscula(char *pMeioTransporte)
{
    for (int i = 0; pMeioTransporte[i] != '\0'; i++)
        pMeioTransporte[i] = toupper(pMeioTransporte[i]);
}