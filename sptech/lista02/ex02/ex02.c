// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie uma página que solicite ao usuário que digite seu peso e altura.
    a) Deve haver um botão com o texto "Fale comigo".
    b) Ao clicar no botão, deve aparecer uma frase como esta numa caixinha de alerta:
    "Você pesa X e tem Y de altura" - Onde X e Y são os valores que o usuário
    digitou, claro
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lPeso, lAltura;

    puts("--------------- INFORMAÇÕES PESSOAIS ---------------");

    printf("Digite seu peso (kg): ");
    scanf("%f", &lPeso);

    printf("Digite sua altura (m²): ");
    scanf("%f", &lAltura);

    printf("Você pesa %.2fKG e tem %.2fm² de altura!\n", lPeso, lAltura);

    return 0;
} // end main