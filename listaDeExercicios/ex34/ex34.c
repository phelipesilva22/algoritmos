// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no
    peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o
    indivíduo dentro de certas faixas.
    - abaixo de 18.5: Abaixo do peso
    - entre 18.5 e 25: Peso ideal
    - entre 25 e 30: Sobrepeso
    - entre 30 e 40: Obesidade
    - acima de 40: Obseidade mórbida
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float peso, altura, imc;

    puts("--------------- CÁLCULO DO IMC ---------------");

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC (ÍNDICE DE MASSA CORPÓREA): %.2f!\n", imc);

    if (imc < 18.5)
        puts("Faixa de peso: Abaixo do peso!");
    else if (imc < 25)
        puts("Faixa de peso: Peso ideal!");
    else if (imc < 30)
        puts("Faixa de peso: Sobrepeso!");
    else if (imc < 40)
        puts("Faixa de peso: Obesidade");
    else 
        puts("Faixa de peso: Obesidade mórbida!");

    return 0;
} // end main