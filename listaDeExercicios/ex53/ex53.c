// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
    a) Quantos homens foram cadastrados
    b) Quantas mulheres foram cadastradas
    c) A média de idade do grupo
    d) A média de idade dos homens
    e) Quantas mulheres tem mais de 20 anos
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char sexo;
    unsigned short qtdPessoas = 1, idade, totHomensCadastrados = 0, totMulheresCadastradas = 0, 
                   somaIdade = 0, qtdMulheresMaisDe20 = 0, somaIdadeHomens = 0;
    float mediaIdade, mediaIdadeHomens;

    puts("------------------ GRUPO DOS COCOTAS ------------------");

    while (qtdPessoas <= 5)
    {
        printf("Digite a %huº idade: ", qtdPessoas);
        scanf("%hu", &idade);

        do
        {
            printf("Sexo: (M/F) ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);

            if (sexo != 'm' && sexo != 'f')
                puts("ERRO! SEXO DIGITADO INCORRETAMENTE!");
                
        } while (sexo != 'm' && sexo != 'f');
        
 
        if (sexo == 'm')
        {
            somaIdadeHomens += idade;
            totHomensCadastrados++;
        } else  if (sexo == 'f')
        {
            totMulheresCadastradas++;
            if (idade > 20)
                qtdMulheresMaisDe20++;
        }

        somaIdade += idade;
        qtdPessoas++;
        putchar('\n');    
    }

    mediaIdade = (float)somaIdade / 5;
    if (totHomensCadastrados > 0)
        mediaIdadeHomens = (float)somaIdadeHomens / totHomensCadastrados;
    
    puts("------------------------------------------------------------");
    printf("Total de homens cadastrados: %hu!\n", totHomensCadastrados);
    printf("Total de mulheres cadastradas: %hu!\n", totMulheresCadastradas);
    printf("Média da idade do grupo: %.2f!\n", mediaIdade);
    if (totHomensCadastrados > 0)
        printf("Média da idade dos homens: %.2f!\n", mediaIdadeHomens);
    else 
        puts("Nenhum homem cadastrado!");
    printf("Quantidade de mulheres com mais de 20 anos: %hu!\n", qtdMulheresMaisDe20);
    puts("------------------------------------------------------------");

    return 0;
} // end main