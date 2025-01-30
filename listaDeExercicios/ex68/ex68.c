// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura
    “para”. No final, mostre na tela:
    a) Quantas mulheres foram cadastradas
    b) Quantos homens pesam mais de 100Kg
    c) A média de peso entre as mulheres
    d) O maior peso entre os homens
    Dia do programa: 14/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo;
    float peso, somaPeso = 0.0, maiorPeso = 0.0, mediaPeso;
    unsigned short totMulheresCadastradas = 0, totHomensMais100Kg = 0;

    puts("---------------- GRUPO DOS COCOTAS ----------------");
    for (int i = 1; i <= 8; i++)
    {
        printf("PESSOA %d\n", i);
        do 
        {
            printf("Sexo: (M/F) ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
            if (sexo != 'm' && sexo != 'f')
                puts("ERRO! DIGITE O SEXO CORRETAMENTE!\n");
        } while (sexo != 'm' && sexo != 'f');

        printf("Peso (Kg): ");
        scanf("%f", &peso);

        if (sexo == 'f')
        {
            totMulheresCadastradas++;
            somaPeso += peso;
        } else if (sexo == 'm' && peso > maiorPeso)
        {
            maiorPeso = peso;
        }

        if (sexo == 'm' && peso > 100)
            totHomensMais100Kg++;
        
        puts("---------------------------------------------------");
    }

    mediaPeso = somaPeso / totMulheresCadastradas;
    printf("Total de mulheres que foram cadastradas: %hu!\n", totMulheresCadastradas);
    printf("Total de homens mais de 100Kg: %hu!\n", totHomensMais100Kg);
    printf("A média do peso entre as mulheres foi: %.2f!\n", mediaPeso);
    printf("O maior peso entre os homens foi: %.2f!\n", maiorPeso);
    puts("---------------------------------------------------");

    return 0;
} // end main