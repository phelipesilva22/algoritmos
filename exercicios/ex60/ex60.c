// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
    O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
    a) O nome da pessoa mais velha
    b) O nome da mulher mais jovem
    c) A média de idade do grupo
    d) Quantos homens tem mais de 30 anos
    e) Quantas mulheres tem menos de 18 anos
    Dia do programa: 11/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50], pessoaMaisVelha[50], mulherMaisJovem[50], sexo, res;
    unsigned short idade, contadorPessoas = 1, somaIdadeGrupo = 0, idadePessoaMaisVelha = 0, 
                   idadeMulherMaisJovem = 0, totHomensAcima30 = 0, totMulheresMenos18 = 0;
    float mediaIdadeGrupo = 0.0;

    puts("---------------- GRUPO DOS COCOTAS ----------------");

    do
    {
        printf("Pessoa %hu\n", contadorPessoas);
        printf("Digite um nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        

        printf("Idade de %s: ", nome);
        scanf("%hu", &idade);

        do 
        {
            printf("Sexo: (M/F) ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
            if (sexo != 'm' && sexo != 'f')
                puts("ERRO! DIGITE O SEXO CORRETAMENTE!\n");
        } while (sexo != 'm' && sexo != 'f');
        
        somaIdadeGrupo += idade;

        if (idade > idadePessoaMaisVelha)
        {
            strcpy(pessoaMaisVelha, nome);
            idadePessoaMaisVelha = idade;
        }

        if (contadorPessoas == 1)
        {
            strcpy(mulherMaisJovem, nome);
            idadeMulherMaisJovem = idade;
        }

        if (sexo == 'f' && idade < idadeMulherMaisJovem)
        {
            strcpy(mulherMaisJovem, nome);
            idadeMulherMaisJovem = idade;
        }

        if (sexo == 'm' && idade > 30)
            totHomensAcima30++;
        else if (sexo == 'f' && idade < 18)
            totMulheresMenos18++; 

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);

        contadorPessoas++;
        puts("----------------------------------");
        getchar();
    } while (res != 'n');

    mediaIdadeGrupo = (float)somaIdadeGrupo / (contadorPessoas - 1);
    printf("Pessoa mais velha: %s com %hu anos!\n", pessoaMaisVelha, idadePessoaMaisVelha);
    printf("Mulher mais jovem: %s com %hu anos!\n", mulherMaisJovem, idadeMulherMaisJovem);
    printf("Média de idade do grupo: %.2f!\n", mediaIdadeGrupo);
    printf("Total de homens com mais de 30 anos: %hu!\n", totHomensAcima30);
    printf("Total de mulheres com menos de 18 anos: %hu!\n", totMulheresMenos18);
    
    return 0;
} // end main