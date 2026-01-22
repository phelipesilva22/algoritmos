// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite a quantidade de homens e mulheres num elevador
    b) Ao clicar num botão "Ligar elevador", calcule o peso total no elevador,
    considerando que um homem pesa em média 90kg e uma mulher 70kg
    c) Caso o peso seja até 500, exiba uma frase na cor verde abaixo do botão
    com a frase Elevador vai se mover, pois está com Xkg
    d) Caso o peso seja maior que 500, exiba uma frase na cor vermelha abaixo
    do botão com a frase Alguém precisa descer. Precisa perder Xkg para
    mover o elevador
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdHomensElevador, lQtdMulheresElevador, lPesoTotalElevador;

    puts("------------------------ PESO ELEVADOR ------------------------");

    printf("Qual é a quantidade de homens no elevador? ");
    scanf("%hd", &lQtdHomensElevador);
    
    printf("Qual é a quantidade de mulheres no elevador? ");
    scanf("%hd", &lQtdMulheresElevador);

    lPesoTotalElevador = (lQtdHomensElevador * 90) + (lQtdMulheresElevador * 70);
    if (lPesoTotalElevador <= 500)
        printf("\033[1;32mElevador vai se mover, pois está com %hdKg!\033[0m\n", lPesoTotalElevador);
    else 
        printf("\033[1;31mAlguém precisa descer. Precisa perder %hdKg para mover o elevador!\033[0m\n", lPesoTotalElevador - 500);

    return 0;
} // end main