// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
    Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
    termos da sequência serão mostrados na tela. O seu procedimento deve receber
    esse valor e mostrar a quantidade de elementos solicitados.
    Obs: Use os exercícios 70 e 75 para te ajudar na solução
    Ex:
    Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
    Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
void Fibonacci(unsigned short fib);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short seqFibonacci;

    puts("-------------------- FIBONACCI PROCEDIMENTO --------------------");

    printf("Informe a sequência que será mostrada: ");
    scanf("%hu",  &seqFibonacci);

    printf("Fibonacci (%d): ", seqFibonacci);
    Fibonacci(seqFibonacci);
    puts("FIM");

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Fibonacci(unsigned short fib)
{
    int t1 = 1, t2 = 1, t3;

    printf("%d >> %d >> ", t1, t2);
    for (int i = 3; i <= fib; i++)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

        if (i == fib)
            printf("%d ", t3);
        else
            printf("%d >> ", t3);
    }
} // end Fibonacci