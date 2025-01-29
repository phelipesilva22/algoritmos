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
    for (int l = 0; l < TAM; l++)
    {
        puts("+---+---+---+");
        for (int c = 0; c < TAM; c++)
        {
            printf("| %d| ", l);
        }
        putchar('\n');
    }
} // end desenharJogoDaVelha