// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que leia uma distância em metros e mostre os valores 
    relativos em outras medidas.
    Ex:
    Digite uma distância em metros: 185.72
    A distância de 85.7m corresponde a:
    0.18572Km
    1857.2dm
    1.8572Hm
    18572.0cm
    18.572Dam
    185720.0mm
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float distancia;

    puts("---------------- CONVERSOR DE DISTÂNCIAS ----------------");

    printf("Digite a distância em metros: ");
    scanf("%f", &distancia);

    printf("A distância de %.1fm corresponde a: \n", distancia);
    printf("%.5fKm\n", distancia / 1000);
    printf("%.4fHm\n", distancia / 100);
    printf("%.3fDam\n", distancia / 10);
    printf("%.1fdm\n", distancia * 10);
    printf("%.1fcm\n", distancia * 100);
    printf("%.1fmm\n", distancia * 1000); 
    return 0;
} // end main