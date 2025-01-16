// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*

    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre um analisador de valores, dando a seguintes informações:
    - Soma dos valores
    - Média dos valores
    - Quantos são divisíveis por 5
    - Quantos são nulos
    - Soma dos pares
    Dia do programa: 15/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    short qtdValores, valor, soma = 0, totValoresDivisiveis5 = 0, totValoresNulos = 0, somaPares = 0;
    float media;

    puts("--------------- ANALISADOR DE VALORES ---------------");

    printf("Quantos valores você quer ler? ");
    scanf("%hd", &qtdValores);

    for (int i = 1; i <= qtdValores; i++)
    {
        printf("Digite o %dº valor: ", i);
        scanf("%hd", &valor);

        soma += valor;
        if (valor % 5 == 0)
            totValoresDivisiveis5++;

        if (valor == 0)
            totValoresNulos++;

        if (valor % 2 == 0)
            somaPares += valor;
    }

    media = (float)soma / qtdValores;
    puts("-----------------------------------");
    printf("A soma entre os valores é: %hd!\n", soma);
    printf("A média entre os valores é: %.1f!\n", media);
    printf("Valores divisíveis por cinco: %hd!\n", totValoresDivisiveis5);
    printf("Valores nulos: %hd!\n", totValoresNulos);
    printf("A soma dos valores pares é: %hd!\n", somaPares);

    return 0;
} // end main