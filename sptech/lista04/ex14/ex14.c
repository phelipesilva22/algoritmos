// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Criar um programa que auxilie uma Autoescola a identificar possíveis
    novos alunos.
    a) Solicite o nome e a idade de uma pessoa
    b) Ao clicar no botão "Avaliar aluno", se a pessoa tiver 18 anos ou mais
    emita a mensagem "NOME, vamos tirar a CNH?", mas caso contrário, emita
    a mensagem "NOME, vai jogar PlayStation!
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNome[50];
    unsigned short lIdade;

    puts("------------------ AUTOESCOLA ENGANA TROUXA ------------------");

    printf("Qual é o seu nome? ");
    fgets(lNome, sizeof(lNome), stdin);
    lNome[strcspn(lNome, "\n")] = '\0';

    printf("Idade de %s: ", lNome);
    scanf("%hd", &lIdade);

    char *lMensagem = lIdade >= 18 ? "vamos tirar a CNH?\n" : "vai jogar PlayStation!\n";
    printf("%s, %s", lNome, lMensagem);
    return 0;
} // end main