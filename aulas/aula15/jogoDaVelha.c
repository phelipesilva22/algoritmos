// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize um jogo da velha 
    Dia do programa: 28/01/2025
*/
#define TAM 3
char velha[TAM][TAM];
int pos = 0;
// --- Protótipo das Funções ---
void desenharJogoDaVelha(char v[TAM][TAM]);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short jog1, jog2;


    desenharJogoDaVelha(velha);
    printf("Vai jogar [X] em qual posição? ");
    scanf("%hu", &jog1);


    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void desenharJogoDaVelha(char v[TAM][TAM])
{
    for (int l = 0; l < TAM; l++)
    {
        puts("+---+---+---+");
        for (int c = 0; c < TAM; c++)
        {
            v[l][c] = " ";
            pos++;
            printf("|  %d", pos);
        }
        putchar('|');
        putchar('\n');
    }
    puts("+---+---+---+");
} // end desenharJogoDaVelha
