// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte ao usuário quantas voltas um carro dará numa corrida
    b) Ao clicar num botão "Iniciar corrida!"...
    c) Exiba, debaixo do botão, frases como estas:
    Carro dando a 1ª volta
    Carro dando a 2ª volta
    Carro dando a 3ª volta
    d) Até que o carro "termine" a corrida. Nesse caso, exiba abaixo de tudo,
    somente 1 vez, a frase "Corrida finalizada!"
    Dia do programa: 23/03/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdVoltas;

    puts("---------------- COPA PISTÃO ----------------");

    printf("Quantos voltas o carro vai dar na pista? ");
    scanf("%hd", &lQtdVoltas);

    for (int i = 0; i < lQtdVoltas; i++)
        printf("Carro dando a %dª volta!\n", i + 1);

    puts("Corrida finalizada!");

    return 0;
} // end main