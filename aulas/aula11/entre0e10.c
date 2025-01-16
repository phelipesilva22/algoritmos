// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 11: ESTRUTURAS DE REPETIÇÃO (3) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia um certa quantidade de valores e verificar quais desses valores estão entre 0 e 10
    Dia do programa: 15/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short qtdNumerosLidos, tot0e10 = 0;
    int valor, somaImpares = 0;

    puts("-------------- VALORES ENTRE 0 E 10 --------------");

    printf("Quantos números voĉe deseja ler? ");
    scanf("%hu", &qtdNumerosLidos);

    for (int i = 1; i <= qtdNumerosLidos; i++)
    {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor >= 0 && valor<= 1)
            tot0e10++;
        
        if (valor % 2 != 0)
            somaImpares += valor;
    }
    puts("---------------------------------");
    printf("Total de valores entre 0 e 10: %hu!\n", tot0e10);
    printf("A soma dos valores ímpares foi: %d!\n", somaImpares);

    return 0;
} // end main