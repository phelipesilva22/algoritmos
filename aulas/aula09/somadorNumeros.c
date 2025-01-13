// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 9: ESTRUTURAS DE REPETIÇÃO (1) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que lê 10 números e somá-los
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int cont = 1, num, somatorio = 0, maiorValor = 0, menorValor = 0; 

    puts("------------------ SOMATÓRIO DE VALORES ------------------");

    while (cont <= 5)
    {
        printf("Digite o %dº valor: ", cont);
        scanf("%d", &num);
    
        if (cont == 1)
        {
            menorValor = num;
            maiorValor = num;
        }

        if (num > maiorValor)
            maiorValor = num;
        else if (num < menorValor)
            menorValor = num;
        cont++;
        somatorio += num;
    
    }
    printf("A soma final foi: %d!\n", somatorio);
    printf("O maior valor foi: %d!\n", maiorValor);
    printf("O menor valor foi: %d!\n", menorValor);

    return 0;
} // end main