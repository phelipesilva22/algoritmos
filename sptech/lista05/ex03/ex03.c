// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Para o ser humano, a temperatura é...
    ● Congelante (até menos de 14ºC)
    ● Com Frio (entre 14ºC e 21ºC)
    ● Confortável (mais de 21ºC até 24ºC)
    ● Com Calor (mais de 24ºC até 31ºC)
    ● Calor escaldante (mais de 31ºC)
    Crie um programa que, ao ler uma temperatura, exiba uma dessas
    situações acima.
    Dia do programa: 24/01/20266
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lTemperaturaAmbiente;

    puts("--------------------- TEMPERATURA AMBIENTE ---------------------");

    printf("Qual é a temperatura no ambiente? ");
    scanf("%f", &lTemperaturaAmbiente);

    if (lTemperaturaAmbiente > 31)
        puts("CALOR ESCALDANTE!");
    else if (lTemperaturaAmbiente > 24)
        puts("COM CALOR!");
    else if (lTemperaturaAmbiente > 21)
        puts("CONFORTÁVEL!");
    else if (lTemperaturaAmbiente >= 14)
        puts("COM FRIO!");
    else
        puts("CONGELANTE!");

    return 0;
} // end main