// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que pergunte ao usuário um número inteiro e positivo
    qualquer e mostre uma contagem até esse valor:
    Ex: Digite um valor: 35
    Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero, contador = 0;

    puts("------------ CONTAGEM DE NÚMEROS ------------");

    printf("Digite um valor: ");
    scanf("%d", &numero);
    
    printf("Contagem: ");
    while(contador < numero)
    {
        contador++;
        printf("%d ", contador);   
    }
    puts("Acabou!");

    return 0;
} // end main