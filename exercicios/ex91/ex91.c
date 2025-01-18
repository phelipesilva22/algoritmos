// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses
    valores para um procedimento Maior() que vai verificar qual deles é o maior e
    mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem
    informando essa característica.
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
void Maior(int n1, int n2);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2;
    
    puts("------------------- COMPARARAÇÃO DE VALORES -------------------");

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    printf("Digite um valor: ");
    scanf("%d", &valor2);

    Maior(valor1, valor2);
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Maior(int n1, int n2)
{
    if (n1 == n2)
        printf("Os dois valores são iguais!\n");
    else if (n1 > n2)
        printf("O valor %d é MAIOR QUE o valor %d\n", n1, n2);
    else
        printf("O valor %d é MENOR QUE o valor %d\n", n1, n2);
} // end Maior