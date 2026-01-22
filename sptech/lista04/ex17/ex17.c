// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicita a frequência do aluno
    b) Ao clicar em "Analisar frequência", deve aparecer, abaixo dele:
    A imagem de um turista, caso a frequência for menor que 50 OU
    A imagem de um aluno estudioso, caso a frequência for a partir de 50
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lFrequenciaAluno;

    puts("---------------- FREQUÊNCIA SPTECHERS ----------------");

    printf("Frequência do aluno: ");
    scanf("%f", &lFrequenciaAluno);

    char *lMensagem = lFrequenciaAluno < 50 ? "Aluno turista 🌍\n" : "Aluno estudioso 😜\n";
    printf("%s", lMensagem);

    return 0;
} // end main