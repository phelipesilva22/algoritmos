// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que realize um seletor de pessoas de acordo com as características propostas na aula
    Dia do programa: 14/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res, sexo;
    unsigned short idade, cabelo, totHomens = 0, totMulheres = 0;

    do
    {
        puts("============================");
        puts("     SELETOR DE PESSOAS     ");
        puts("============================");

        do
        {
            printf("Qual o Sexo? [M/F] ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);

            if (sexo != 'm' && sexo != 'f')
                puts("SEXO INVÁLIDO\n");

        } while (sexo != 'm' && sexo != 'f');
        
        printf("Qual a idade? ");
        scanf("%hu", &idade);

        puts("Qual a cor do Cabelo? ");
        puts("---------------------");
        puts("[1] Preto");
        puts("[2] Castanho");
        puts("[3] Loiro");
        puts("[4] Ruivo");
        scanf("%hu", &cabelo);

        if (sexo == 'm' && idade > 18 && cabelo == 2)
            totHomens++;
        
        if (sexo == 'f' && (idade >= 25 && idade <= 30) && cabelo == 3)
            totMulheres++;

        printf("Quer continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res); 
        system("clear");
    } while (res != 'n');
    
    puts("-------------------------------------");
    puts(" RESULTADO FINAL ");
    puts("-------------------------------------");
    printf("Total de homens com mais de 18 e cabelos castanhos: %hu!\n", totHomens);
    printf("Total de mulheres entre 25 e 30 e cabelos loiros: %hu!\n", totMulheres);

    return 0;
} // end main