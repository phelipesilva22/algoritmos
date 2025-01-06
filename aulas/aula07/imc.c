// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
     --- CURSO DE ALGORITMOS - AULA 7: ESTRUTURAS CONDICIONAIS ---
    Professor: Gustavo Guanabara
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer programa que calcule o IMC de uma pessoa utilizando estruturas condicionais
    Dia do programa: 05/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float massa, altura, imc;

    puts("------------ CÁLCULO DE IMC --------------");

    printf("Massa (kg): ");
    scanf("%f", &massa);

    printf("Altura (m): ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);
    printf("IMC: %.2f!\n", imc);

    if (imc >= 18.5 && imc < 25)
        puts("PARABÉNS! Você está com o peso ideal!");
    else 
        puts("Você está fora da faixa de peso ideal!");

    return 0;
} // end main