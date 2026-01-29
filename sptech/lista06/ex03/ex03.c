// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Pergunte uma nota de um aluno
    b) Ao clicar em "Avaliar aluno"...
    c) Caso a nota for entre 0 e 10, exibir um alert com a frase "Nota válida!"
    d) Caso a nota não estiver no intervalo definido em c), exibir um alert com a
    frase "Onde já se viu nota menor que 0 e maior que 10?!"
    Dia do programa: 28/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNotaAluno;

    puts("-------------------- ESCOLA JAVALI CANSADO --------------------");

    printf("Nota de aluno: ");
    scanf("%f", &lNotaAluno);

    char *lMensagem = lNotaAluno >= 0 && lNotaAluno <= 10 ? "Nota válida!\n" : "Onde já se viu nota menor que 0 e maior que 10?!\n";
    printf("%s", lMensagem);

    return 0;
} // end main