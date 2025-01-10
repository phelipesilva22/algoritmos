// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 8: ESTRUTURAS CONDICIONAIS (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer o programa do cálculo do IMC completo 
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float peso, altura, imc;

    puts("-------------- CÁLCULO IMC COMPLETO --------------");

    printf("Informe o peso (kg): ");
    scanf("%f", &peso);

    printf("Informe a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f!\n", imc);

    if (imc < 17)
        puts("Muito abaixo do peso!");
    else if (imc < 18.5)
        puts("Abaixo do peso!");
    else if (imc < 25)
        puts("Peso ideal!");
    else if (imc < 30)
        puts("Sobrepeso");
    else if (imc < 35)
        puts("Obesidade");
    else if (imc < 40)
        puts("Obesidade severa!");
    else 
        puts("Obesidade mórbida!");

    return 0;
} // end main