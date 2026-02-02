// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: No processo seletivo da faculdade Mentes Brilhantes, o aluno é
    aprovado se sua nota no ENEM foi a partir de 800 ou se ele fizer o
    vestibular interno e tirar pelo menos 700. Crie um programa que será
    usado por essa instituição.
    a) Solicite a nota do ENEM do aluno
    b) Solicite a nota do vestibular interno do aluno
    c) Ao clicar em "Avaliação", deve ser exibido um alert com o texto
    "Parabéns! Aprovado", caso suas notas, segundo as regras, o aprovem
    d) Caso contrário, exiba um alert com a frase "Tente semestre que vem!"
    Dia do programa: 01/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lNotaEnem, lNotaVestibularInterno;

    puts("----------------- MENTES BRILHANTES -----------------");

    printf("Qual foi a sua nota do ENEM? ");
    scanf("%d", &lNotaEnem);

    printf("Qual foi a sua nota no vestibular interno? ");
    scanf("%d", &lNotaVestibularInterno);

    char *lIsAprovado = lNotaEnem >= 800 || lNotaVestibularInterno >= 700 ? "Parabéns! Aprovado\n" : "Tente semestre que vem!\n";
    printf("%s", lIsAprovado);
        
    return 0;
} // end main