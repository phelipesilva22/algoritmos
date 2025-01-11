// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai
    perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre:
    a) qual é a maior idade lida
    b) quantos homens foram cadastrados
    c) qual é a idade da mulher mais jovem
    d) qual é a média de idade entre os homens
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short idade, contadorPessoas = 1, maiorIdade = 0, 
                   totHomensCadastrados = 0, somaIdadeHomens = 0, mulherMaisJovem = 0;
    char res, sexo;
    float mediaIdadeHomens;

    puts("---------------- GRUPO DOS COCOTAS ----------------");

    do
    {
        printf("PESSOA %hu\n", contadorPessoas);

        do 
        {
            printf("Sexo: (M/F) ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
            if (sexo != 'm' && sexo != 'f')
                puts("ERRO! DIGITE O SEXO CORRETAMENTE!\n");
        } while (sexo != 'm' && sexo != 'f');


        printf("Idade: ");
        scanf("%hu", &idade);

        if (contadorPessoas == 1)
            mulherMaisJovem = idade;

        if (sexo == 'm')
        {
            totHomensCadastrados++;
            somaIdadeHomens += idade;
        } else if (sexo == 'f' && idade < mulherMaisJovem)
        {
            mulherMaisJovem = idade;
        }

        if (idade > maiorIdade)
            maiorIdade = idade;

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);
        puts("----------------------------------");

        contadorPessoas++;
    } while (res != 'n');

    mediaIdadeHomens = (float)somaIdadeHomens / totHomensCadastrados;
    printf("A maior idade do grupo é: %hu anos!\n", maiorIdade);
    printf("Total de homens cadastrados foi: %hu!\n", totHomensCadastrados);
    printf("A mulher mais jovem tem a idade de: %hu anos!\n", mulherMaisJovem);
    printf("Média de idade dos homens cadastrados: %.2f!\n", mediaIdadeHomens);

    return 0;
} // end main