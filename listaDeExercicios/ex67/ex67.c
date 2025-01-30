// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa usando a estrutura “para” que leia um número inteiro
    positivo e mostre na tela uma contagem de 0 até o valor digitado:
    Ex: Digite um valor: 9
    Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor;

    puts("--------------------- CONTAGEM DE NÚMEROS ---------------------");

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("Contagem: ");
    for (int i = 0; i <= valor; i++)
    {
        if (i == valor)
            printf("%d ", i);
        else
            printf("%d, ", i);    
    }

    puts("FIM!");
    return 0;
} // end main