// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo
    de triângulo será formado:
    - EQUILÁTERO: todos os lados iguais
    - ISÓSCELES: dois lados iguais
    - ESCALENO: todos os lados diferentes
    Dia do programa: 07/01/2025
*/
#define TRIANGULO_V "VERDADEIRO"
#define TRIANGULO_F "FALSO"
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
        printf("%s!\n", TRIANGULO_V);
    else
    {
        printf("%s!\n", TRIANGULO_F);
        return 0;
    }
        
    if (a == b && b == c && a == c)
        puts("TRIÂNGULO EQUILÁTERO!");
    else if (a == b || b == c)
        puts("TRIÂNGULO ISÓSCELES!");
    else if (a != b && b != c && a != c)
        puts("TRIÂNGULO ESCALENO!");

    return 0;
} // end main