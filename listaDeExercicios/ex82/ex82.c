// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em
    um vetor. No final, mostre:
    a) Qual é a média da turma
    b) Quantos alunos estão acima da média da turma
    c) Qual foi a maior nota digitada
    d) Em que posições a maior nota aparece
    Dia do programa: 17/01/2025
*/
#define TAM 10
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short posMaiorNota = 0, totAlunosAcimaMedia = 0;
    
    float min = 1.0, max = 10.0, randomFloat, nota[TAM], 
          somaNota = 0.0, maiorNota = 0.0, mediaNota;

    puts("-------------------- 1ª ADSA --------------------");

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        nota[i] = randomFloat = min + ((float)rand() / (RAND_MAX + 1.0)) * (max - min);
        printf("%dª nota: %.1f\n", i + 1, nota[i]);
        somaNota += nota[i];
    }

    mediaNota = somaNota / TAM;
    puts("-------------------------------------------------");
    printf("Média das notas: %.2f!\n", mediaNota);

    for (int i = 0; i < TAM; i++)
    {
         if (nota[i] > mediaNota)
            totAlunosAcimaMedia++;
    }

    printf("Total de alunos acima da média: %hu!\n", totAlunosAcimaMedia);
    for (int i = 0; i < TAM; i++)
    {
         if (nota[i] > maiorNota)
         {
            maiorNota = nota[i];
            posMaiorNota = i + 1;
         }
    }
    printf("Maior nota digitada foi: %.1f!\n", maiorNota);
    printf("Posição da maior nota: [%hu]!\n", posMaiorNota);
    puts("-------------------------------------------------");

    return 0;
} // end main