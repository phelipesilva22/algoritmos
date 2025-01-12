// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa usando a estrutura “faça enquanto” que leia a idade de
    várias pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou
    não continuar a digitar dados. No final, quando o usuário decidir parar, mostre
    na tela:
    a) Quantas idades foram digitadas
    b) Qual é a média entre as idades digitadas
    c) Quantas pessoas tem 21 anos ou mais.
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    unsigned short idade, cont = 0, somaIdade = 0, totPessoasAcima21 = 0;
    float mediaIdade;

    puts("------------------- LEITURA DE IDADES -------------------");

    do
    {
        printf("Digite a %dº idade: ", cont + 1);
        scanf("%hu", &idade);

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);
        
        somaIdade += idade;
        if (idade > 21)
            totPessoasAcima21++;

        cont++;
        puts("------------------------------------------");
    } while (res != 'n');
    
    mediaIdade = (float)somaIdade / cont;
    printf("Total de idades digitadas: %hu!\n", cont);
    printf("Média das idades digitadas: %.2f!\n", mediaIdade);
    printf("Total de pessoas acima de 21 anos: %hu!\n", totPessoasAcima21);

    return 0;
} // end main