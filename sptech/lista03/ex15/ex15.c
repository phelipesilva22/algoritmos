// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite o peso e a altura do usuário;
    b) Ao clicar num botão "Calcular IMC":
    b.1) Calcule e exiba seu IMC na tela (não num alert), abaixo do botão;
    Obs: Pesquise a fórmula simples de IMC na internet;
    Dia do programa: 13/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lPeso, lAltura;

    puts("------------- CÁLCULO DO IMC -------------");

    printf("Digite o seu peso em (KG): ");
    scanf("%f", &lPeso);

    printf("Digite a sua altura em (m²): ");
    scanf("%f", &lAltura);

    printf("O seu IMC está: %.2f!\n", lPeso / (lAltura * lAltura));
    return 0;
} // end main