// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: 1. Crie um programa o qual:
    a) Solicite a idade do usuário
    b) Deve haver 2 botões abaixo: "Aposentadoria Homem" e "Aposentadoria
    Mulher"
    c) No primeiro botão, calcule e exiba um alert com o tempo que falta para
    se aposentar caso seja homem, considerando que um homem se aposenta
    com 70 anos
    d) No segundo botão, calcule e exiba um alert com o tempo que falta para
    se aposentar caso seja mulher, considerando que uma mulher se aposenta
    com 60 anos
    Dia do programa: 07/01/2025
*/
#define IDADE_MAXIMA_APOSENTADORIA_HOMEM 70
#define IDADE_MAXIMA_APOSENTADORIA_MULHER 60
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lIdade;
    char lTipoAposentadoria;

    puts("---------------- APOSENTADORIA ----------------");

    printf("Qual é a sua idade? ");
    scanf("%hd", &lIdade);

    puts("Deseja calcular qual tipo de aposentadoria (Masculina ou Feminina)? ");
    printf("Masculino (M) | Feminino (F): ");
    scanf(" %c", &lTipoAposentadoria);
    lTipoAposentadoria = tolower(lTipoAposentadoria);

    if (lTipoAposentadoria == 'm')
    {
        if (lIdade < IDADE_MAXIMA_APOSENTADORIA_HOMEM)
        {
            if (IDADE_MAXIMA_APOSENTADORIA_HOMEM - lIdade == 1)
                puts("Homem, falta 1 ano para você se aposentar!");
            else 
                printf("Homem, faltam %hd anos para você se aposentar!\n", IDADE_MAXIMA_APOSENTADORIA_HOMEM - lIdade);
        }
        else 
        {
            if (lIdade - IDADE_MAXIMA_APOSENTADORIA_HOMEM == 1)
                puts("Homem, passou 1 ano da sua aposentadoria!");
            else
                printf("Homem, passou %d anos da sua aposentadoria!\n", lIdade - IDADE_MAXIMA_APOSENTADORIA_HOMEM);
        }
    } else if (lTipoAposentadoria == 'f')
    {
        if (lIdade < IDADE_MAXIMA_APOSENTADORIA_MULHER)
        {
            if (IDADE_MAXIMA_APOSENTADORIA_MULHER - lIdade == 1)
                puts("Mulher, falta 1 ano para você se aposentar!");
            else 
                printf("Mulher, faltam %hd anos para você se aposentar!\n", IDADE_MAXIMA_APOSENTADORIA_MULHER - lIdade);
        }
        else 
        {
            if (lIdade - IDADE_MAXIMA_APOSENTADORIA_MULHER == 1)
                puts("Mulher, passou 1 ano da sua aposentadoria!");
            else
                printf("Mulher, passou %d anos da sua aposentadoria!\n", lIdade - IDADE_MAXIMA_APOSENTADORIA_MULHER);
        }
    } else 
        puts("SEXO INVÁLIDO!");
        

    return 0;
} // end main