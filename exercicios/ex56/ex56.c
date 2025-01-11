// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia vários números pelo teclado e mostre no final o
    somatório entre eles.
    Obs: O programa será interrompido quando o número 1111 for digitado
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int cont = 1, num, somatorio = 0;

    puts("--------------------- SOMATÓRIO DE VALORES ---------------------");

    do
    {
        printf("Digite o %dº número: ", cont);
        scanf("%d", &num);

        somatorio += num;
        cont++;
    } while (num != 1111);
    printf("A soma dos valores é: %d!\n", somatorio - 1111);

    return 0;
} // end main