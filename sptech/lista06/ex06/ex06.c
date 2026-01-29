// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte uma nota de um aluno
    b) Pergunte a frequência de um aluno
    c) Ao clicar em "Avaliar aluno"...
    d) Caso a nota for a partir de 6 e a frequência for a partir de 75, exibir um
    alert com a frase "Parabéns! Aprovado!", caso contrário, exibir um alert
    com "Infelizmente, não foi desta vez"
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNotaAluno, lFrequenciaAluno;

    puts("-------------------- ESCOLA JAVALI CANSADO --------------------");

    printf("Nota do aluno: ");
    scanf("%f", &lNotaAluno);

    printf("Qual é a frequência do aluno? ");
    scanf("%f", &lFrequenciaAluno);
    
    char *lSituacaoAluno = lNotaAluno >= 6 && lFrequenciaAluno >= 75 ? "Parabéns! Aprovado!\n" : "Infelizmente, não foi desta vez!\n";
    printf("%s", lSituacaoAluno);
    
    return 0;
} // end main