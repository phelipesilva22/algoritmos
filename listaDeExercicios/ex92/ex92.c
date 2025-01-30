// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie uma lógica que leia um número inteiro e passe para um procedimento
    ParOuImpar() que vai verificar e mostrar na tela se o valor passado como
    parâmetro é PAR ou ÍMPAR.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
void ParOuImpar(int v);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor;

    puts("----------------- PAR OU ÍMPAR -----------------");

    printf("Digite um valor: ");
    scanf("%d", &valor);

    ParOuImpar(valor);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void ParOuImpar(int v)
{
    if (v % 2 == 0)
        printf("O número %d é PAR!\n", v);
    else
        printf("O número %d é ÍMPAR!\n", v);
} // end ParOuImpar