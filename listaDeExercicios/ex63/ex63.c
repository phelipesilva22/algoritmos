// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa usando a estrutura “faça enquanto” que leia vários números.
    A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na
    tela:
    a) O somatório entre todos os valores
    b) Qual foi o menor valor digitado
    c) A média entre todos os valores
    d) Quantos valores são pares
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short cont = 1, totValoresPares = 0;
    int num, somatorio = 0, menorValor = 0;
    float media;

    puts("------------------- LEITURA DE NÚMEROS -------------------");

    do
    {
        printf("Digite o %huº número: ", cont);
        scanf("%d", &num);

        somatorio += num;
        if (cont == 1)
            menorValor = num;

        if (num < menorValor)
            menorValor = num;
        
        if (num % 2 == 0)
            totValoresPares++;

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);

        cont++;
        puts("------------------------------------------");
    } while (res != 'n');
    
    media = (float) somatorio / (cont - 1);
    printf("O somatório dos valores é: %d!\n", somatorio);
    printf("O menor valor digitado: %d!\n", menorValor);
    printf("Média dos valores: %.2f!\n", media);
    printf("Total de valores pares: %hu!\n", totValoresPares);

    return 0;
} // end main