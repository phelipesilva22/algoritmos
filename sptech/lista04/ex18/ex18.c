// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicita a temperatura do ambiente
    b) Ao clicar em "Verificar clima", determine se o clima está:
    Apropriada p/ conservar alimento - Caso a temperatura for menor que 10
    Inapropriada p/ conservar alimento - Caso a temperatura for a partir de
    10
    c) Em caso de temperatura apropriada, exiba a figura de um alimento em
    bom estado. Caso contrário, exiba a imagem de um alimento estragado
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lTemperaturaAmbiente;

    puts("------------------------- TEMPERATURA DO AMBIENTE -------------------------");

    printf("Qual é a temperatura atual do ambiente? ");
    scanf("%f", &lTemperaturaAmbiente);

    char *lMensagemTemperatura = lTemperaturaAmbiente < 10 ? "O clima está inapropriado para conservar o alimento 🍌🚷" : "O clima está apropriado para conservar o alimento 🍌😃";
    printf("%s\n", lMensagemTemperatura);

    return 0;
} // end main