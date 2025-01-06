// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
    fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele já fumou. 
    Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante perderá e exiba o total em dias.
    Dia do programa: 04/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short int qtdCigarrosFumados, anosCigarroFumado;

    printf("Quantos cigarros você fuma por dia? ");
    scanf("%hu", &qtdCigarrosFumados);

    printf("Quantos anos você fuma? ");
    scanf("%hu", &anosCigarroFumado);

    

    return 0;
} // end main