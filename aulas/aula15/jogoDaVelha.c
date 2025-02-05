// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize um jogo da velha 
    Dia do programa: 28/01/2025
*/
#define TAM 3
int velha[TAM][TAM];
// --- Protótipo das Funções ---
void desenharJogoDaVelha(int v[TAM][TAM]);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    desenharJogoDaVelha(velha);


    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void desenharJogoDaVelha(int v[TAM][TAM])
{
    int pos = 1;
    for (int l = 0; l < TAM; l++)
    {
        puts("+---+---+---+");
        for (int c = 0; c < TAM; c++)
        {
            v[l][c] = pos++;
            printf("|%d|  ", v[l][c]);
        }
        putchar('\n');
    }
    puts("+---+---+---+");
} // end desenharJogoDaVelha