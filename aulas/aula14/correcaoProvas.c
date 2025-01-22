// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia um gabarito de uma prova ler as respostas do aluno, Ao final, mostre os acertos dos alunos e a média da turma
    Dia do programa: 21/01/2025
*/
#define TAM 2
char gab[5];
char res[5];
// --- Protótipo das Funções ---
void cadastroGabarito();
void cadastroRespostas();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis --- 
    char nome[TAM][50];
    unsigned short somaNota = 0, nota[TAM];

    cadastroGabarito();
    system("clear");

    for (int i = 0; i < TAM; i++)
    {
        puts("------------------------");
        printf("ALUNO %d\n", i + 1);
        puts("------------------------");
        printf("Nome: ");
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        cadastroRespostas();
        system("clear");
    }

    for (int i = 0; i < 5; i++)
    {
         if (gab[i] == res[i])
         {
            somaNota += 2;
            for (int i = 0; i < TAM; i++)
                nota[i] = somaNota;
         }
    }


    puts("NOTAS FINAIS");
    puts("------------------------");
    for (int i = 0; i < TAM; i++)
    {
        printf("%s %hu.0!\n", nome[i], nota[i]);
    }

    return 0;
} // end main

// --- Desenvolvimento das Funções ---
void cadastroGabarito()
{
    puts("--------------------------------");
    puts(" PASSO 1 - Cadastro do Gabarito ");
    puts("--------------------------------");

    for (int i = 0; i < 5; i++)
    {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gab[i]);
        getchar();
    }
} // end cadastroGabarito

void cadastroRespostas()
{  
    puts("RESPOSTAS DADAS");
    for (int i = 0; i < 5; i++)
    {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &res[i]);
        getchar();
    }
} // end cadastroRespostas