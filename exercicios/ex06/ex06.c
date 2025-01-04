// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
    sucessor.
    Ex:
    Digite um número: 9
    O antecessor de 9 é 8
    O sucessor de 9 é 10
    Dia do programa: 04/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero;

    puts("----------- ANTECESSOR E SUCESSOR DE UM VALOR -----------");

    printf("Digite um número: ");    
    scanf("%d", &numero);

    printf("O antecessor de %d é %d!\nO sucessor de %d é %d!\n", numero, numero - 1, numero, numero + 1);

    return 0;
} // end main