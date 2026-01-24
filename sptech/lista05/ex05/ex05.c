// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite a nota do aluno;
    b) Ao clicar em "Classificar aluno", exiba uma dessas mensagens em um
    alert:
    "Aluno precisa de muita ajuda", caso a nota for menor que 5.
    "Aluno na média", caso a nota for entre 5 até 7.
    "Aluno na acima da média", caso a nota for maior que 7 até 9.5.
    "Aluno fora da curva", caso a nota for maior que 9.5.
    Dia do programa: 24/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNotaAluno;

    puts("---------------------- CLASSIFICAÇÃO ALUNOS ----------------------");

    printf("Qual foi a sua nota final? ");
    scanf("%f", &lNotaAluno);

    if (lNotaAluno < 5)
        puts("ALUNO PRECISA DE MUITA AJUDA!");
    else if (lNotaAluno <= 7)
        puts("ALUNO NA MÉDIA!");
    else if (lNotaAluno <= 9.5)
        puts("ALUNO ACIMA DA MÉDIA!");
    else 
        puts("ALUNO FORA DA CURVA!");

    return 0;
} // end main