// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite a quantidade de votos que o "Candidato A" teve na eleição
    b) Solicite a quantidade de votos que o "Candidato B" teve na eleição
    c) Solicite a quantidade de votos brancos que houveram na eleição
    d) Solicite a quantidade de votos nulos que houveram na eleição
    e) Ao clicar em "Resultado da Eleição", exibir textos conforme o exemplo
    abaixo:
    Total de votos: 200
    Candidato A: 40% (80 votos)
    Candidato B: 35% (70 votos)
    Inválidos: 25% (50 votos)
    A quantidade de votos "Inválidos" é a soma de brancos e nulos - valores
    colhidos nos itens c) e d) -
    Não se preocupe em mostrar primeiro o "vencedor". Não temos como
    saber isso com o que aprendemos na programação até aqui ;)
    Mostre os candidatos na ordem que quiser.
    Dia do programa: 08/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdVotosCandidatoA, lQtdVotosCandidatoB, lQtdVotosBrancos, lQtdNulos, lQtdVotosTotal = 0, lQtdVotosInvalidos = 0;

    puts("---------------- ELEIÇÕES 2026 ----------------");

    printf("Quantos votos o candidato A teve? ");
    scanf("%d", &lQtdVotosCandidatoA);

    printf("Quantos votos o candidato B teve? ");
    scanf("%d", &lQtdVotosCandidatoB);

    printf("Quantos votos brancos a eleição teve? ");
    scanf("%d", &lQtdVotosBrancos);

    printf("Quantos votos nulos a eleição teve? ");
    scanf("%d", &lQtdNulos);

    lQtdVotosTotal = lQtdVotosCandidatoA + lQtdVotosCandidatoB + lQtdVotosBrancos + lQtdNulos;
    lQtdVotosInvalidos = lQtdVotosBrancos + lQtdNulos;


    printf("Total de votos: %d!\n", lQtdVotosTotal);
    printf("Candidato A: %.2f%% (%d votos)!\n", (double) lQtdVotosCandidatoA / lQtdVotosTotal * 100, lQtdVotosCandidatoA);
    printf("Candidato B: %.2f%% (%d votos)!\n", (double) lQtdVotosCandidatoB / lQtdVotosTotal * 100, lQtdVotosCandidatoB);
    printf("Inválidos: %.2f%% (%d votos)!\n", (double) lQtdVotosInvalidos / lQtdVotosTotal * 100, lQtdVotosInvalidos);

    return 0;
} // end main