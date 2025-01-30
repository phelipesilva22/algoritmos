// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse
    80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
    Dia do programa: 06/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int velocidadeCarro;

    puts("------------ DEMSP - DEPARTAMENTO DE MULTA DE SÃO PAULO ------------");

    printf("Qual foi a velocidade do carro (KM): ");
    scanf("%hu", &velocidadeCarro);

    if (velocidadeCarro > 80)
    {
        unsigned short int multa = (velocidadeCarro - 80) * 5;
        printf("VOCÊ FOI MULTADO! A MULTA FOI DE R$%hu.00!\n", multa);
    }

    return 0;
} // end main