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
int cadastroRespostas();
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis --- 
    char nome[TAM][50];
    unsigned short somaNota = 0, nota[TAM];
    float mediaTurma;

    cadastroGabarito();

    for (int i = 0; i < TAM; i++)
    {
        system("clear");
        puts("------------------------");
        printf("ALUNO %d\n", i + 1);
        puts("------------------------");
        printf("Nome: ");
        fgets(nome[i], sizeof(nome), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
        nota[i] = cadastroRespostas();
        somaNota += nota[i];
    }

    mediaTurma = (float)somaNota / TAM;
    system("clear");
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

int cadastroRespostas()
{  
    unsigned short notaFinal = 0;
    puts("RESPOSTAS DADAS");
    for (int i = 0; i < 5; i++)
    {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &res[i]);
        getchar();
        if (gab[i] == res[i])
            notaFinal += 2;
    }
    return notaFinal;
} // end cadastroRespostas