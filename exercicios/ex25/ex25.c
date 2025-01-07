// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
    Analise seus comprimentos e diga se é possível formar um triângulo com essas
    retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
    de cada lado deve ser menor que a soma dos outros dois.
    Dia do programa: 07/01/2025
*/
#define TRIANGULO_VERDADEIRO "TRUE"
#define TRIANGULO_FALSO "FALSE"
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int a, b, c;

    puts("------------- FORMAÇÃO DE TRIÂNGULO -------------");
    
    printf("Digite o valor do lado A: ");
    scanf("%d", &a);

    printf("Digite o valor do lado B: ");
    scanf("%d", &b);

    printf("Digite o valor do lado C: ");
    scanf("%d", &c);

    printf("É POSSÍVEL FORMAR UM TRIÂNGULO? ");
    if ((a < b + c) && (b < a + c) && (c < a + b))
        printf("%s!\n", TRIANGULO_VERDADEIRO);
    else
        printf("%s!\n", TRIANGULO_FALSO);
        
    return 0;
} // end main