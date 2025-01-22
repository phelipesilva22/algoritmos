// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que leia um gabarito de uma prova ler as respostas do aluno, Ao final, mostre os acertos dos alunos e a média da turma
    Dia do programa: 21/01/2025
*/
#define TAM 3
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
    unsigned short somaNota, somaNotaMedia = 0, nota[TAM];
    float mediaTurma;

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

        somaNota = 0;
        for (int j = 0; j < 5; j++)
        {
            if (gab[j] == res[j])
            {
                somaNota += 2;
            }
        }
        somaNotaMedia += somaNota;
        nota[i] = somaNota;
    }

    mediaTurma = (float)somaNotaMedia / TAM;
    puts("NOTAS FINAIS");
    puts("------------------------");
    for (int i = 0; i < TAM; i++)
    {
        printf("%-10s %hu.0\n", nome[i], nota[i]);
    }
    puts("------------------------");
    printf("Média da turma: %.1f\n", mediaTurma);

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