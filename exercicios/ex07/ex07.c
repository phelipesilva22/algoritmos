// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte.
    Ex:
    Digite um número: 3.5
    O dobro de 3.5 é 7.0
    A terça parte de 3.5 é 1.16666
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float numero;

    puts("------------- DORBRO E TERÇA PARTE DE UM VALOR -------------");

    printf("Digite um número: ");
    scanf("%f", &numero);

    printf("O dobro de %.1f é %.1f!\nA terça parte de %.1f é %.1f!\n", numero, numero * 2, numero, numero / 3);

    return 0;
} // end main