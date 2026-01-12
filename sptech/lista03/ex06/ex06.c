// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que:
    a) Solicite 2 números ao usuário
    b) tenha um botão para cada operação aritmética. Ao clicar em algum
    deles, exibir na página uma dessas frases:
    - A soma entre X e Y é Z
    - A diferença entre X e Y é Z
    - O produto entre X e Y é Z
    - A razão entre X e Y é Z
    Dia do programa: 08/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValor1, lValor2;

    puts("------------------- CALCULADORA -------------------");

    printf("Digite o primeiro valor: ");
    scanf("%f", &lValor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &lValor2);

    printf("A soma entre %.2f + %.2f é %.2f\n", lValor1, lValor2, lValor1 + lValor2);
    printf("A diferença entre %.2f - %.2f é %.2f\n", lValor1, lValor2, lValor1 - lValor2);
    printf("O produto entre %.2f * %.2f é %.2f\n", lValor1, lValor2, lValor1 * lValor2);
    printf("A razão entre %.2f / %.2f é %.2f\n", lValor1, lValor2, lValor1 / lValor2);

    return 0;
} // end main