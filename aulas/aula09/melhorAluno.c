// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer o programa que mostre o melhor aluno da turma
    Dia do programa: 12/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short qtdAlunos, cont = 1;
    char nomeAluno[50], melhorAluno[50];
    float notaAluno, melhorNota = 0.0;

    puts("------------------------");
    puts(" Escola Santa Paciência ");
    puts("------------------------");

    printf("Quantos alunos a turma tem? ");
    scanf("%hu", &qtdAlunos);
  
    while (cont <= qtdAlunos)
    {
        puts("---------------");
        printf("ALUNO %hu\n", cont);
        getchar();
        printf("Nome do aluno: ");
        fgets(nomeAluno, sizeof(nomeAluno), stdin);
        nomeAluno[strcspn(nomeAluno, "\n")] = '\0';

        printf("Nota de %s: ", nomeAluno);
        scanf("%f", &notaAluno);

        if (notaAluno > melhorNota)
        {
            melhorNota = notaAluno;
            strcpy(melhorAluno, nomeAluno);
        }
        cont++;
        
    }
    puts("---------------");
    printf("O melhor aproveitamento foi de %s com a nota %.1f!\n", melhorAluno, melhorNota);

    return 0;
} // end main