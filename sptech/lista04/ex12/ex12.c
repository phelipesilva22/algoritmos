// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite o peso total num elevador
    b) Ao clicar num botão "Ligar elevador"...
    c) Caso o peso seja menor que 500, exiba um alert com a frase "Elevador
    vai se mover"
    d) Caso o peso seja a partir de 500, exiba um alert com "Alguém precisa
    descer do elevador"
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lPesoTotalElevador;

    puts("------------------- PESO MÁXIMO ELEVADOR -------------------");

    printf("Informe o peso total do elevador? ");
    scanf("%f", &lPesoTotalElevador);

    char *lMensagem = lPesoTotalElevador < 500 ? "Elevador vai se mover\n" : "Alguém precisa descer do elevador\n";
    printf("%s", lMensagem);

    return 0;
} // end main