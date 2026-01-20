// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que controle o peso médio dentro de um elevador:
    a) Solicite a quantidade de homens que entraram no elevador
    b) Solicite a quantidade de mulheres que entraram no elevador
    c) Ao clicar em "Analisar peso", calcule o peso estimado sendo: homens x
    80 somado com mulheres x 60
    d) Exiba na página a mensagem "Este elevador suporta 800 Kg e o peso
    estimado desta lotação é de XXXkg"
    e) Se o peso estimado for maior que 800, exibir também a mensagem "Será
    necessário que alguém desça para que o elevador se movimente" - na cor
    azul.
    Dia do programa: 19/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdHomensElevador, lQtdMulheresElevador, lPesoMaximoElevador;

    puts("----------------------- PESO ELEVADOR -----------------------");

    printf("Qual é a quantidade de homens no elevador? ");
    scanf("%d", &lQtdHomensElevador);

    printf("Qual é a quantidade de mulheres no elevador? ");
    scanf("%d", &lQtdMulheresElevador);

    lPesoMaximoElevador = (lQtdHomensElevador * 80) + (lQtdMulheresElevador * 60);
    printf("Este elevador suporta 800Kg e o peso estimado desta lotação é de %dkg!\n", lPesoMaximoElevador);

    if (lPesoMaximoElevador > 800)
        printf("\033[34mSerá necessário que alguém desça para que o elevador se movimente!\033[0m\n");

    return 0;
} // end main