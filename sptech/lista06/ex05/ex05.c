// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte uma nota de um aluno
    b) Ao clicar em "Avaliar aluno"...
    c) Caso a nota seja menor que 6, exibir um alert com a frase "Aluno não
    aprovado"
    d) Caso a nota seja entre 8,5 e 10, exibir um alert com a frase "Aluno
    Exemplar!"
    e) Caso a nota seja entre 6 e menor que 8,5, exibir um alert com a frase
    "Aluno comum e aprovado"
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNotaAluno;

    puts("-------------------- ESCOLA JAVALI CANSADO --------------------");

    printf("Nota do aluno: ");
    scanf("%f", &lNotaAluno);

    if (lNotaAluno < 6)
        puts("Aluno não aprovado!");
    else if (lNotaAluno < 8.5)
        puts("Aluno comum e aprovado!");
    else if (lNotaAluno <= 10)
        puts("Aluno Exemplar!"); 
    else
        puts("Nota fora do intervalo permitido!");

    return 0;
} // end main