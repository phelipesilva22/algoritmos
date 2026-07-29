// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Ao clicar em um botão "Sortear", apareça na página um número
    aleatório, entre 0 e 0.9999;
    b) Se esse número for maior que 0.5, exibir, abaixo, a frase "Eu
    arredondaria para 1". Caso contrário, exiba "Eu arredondaria para 0".
    Dia do programa: 28/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    srand(time(NULL));
    double numero = (rand() % 10000) / 10000.0;

    puts("---------------- NÚMEROS RANDÔMICOS ----------------");

    printf("Número gerado: %.2f!\n", numero);
    char *mensagem = numero > 0.5 ? "Eu arredondaria para 1" : "Eu arredondaria para 0";
    printf("%s\n", mensagem);

    return 0;
} // end main