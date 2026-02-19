// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que avalie o desempenho de um aluno, o
    qual:
    a) Solicite a nota e a frequência do aluno
    b) Ao clicar em "Analisar aluno", faça as seguintes ações...
    c) Caso a nota não seja válida, ou seja, caso não esteja entre 0 e 10, exiba
    um alert "Onde já se viu nota <0 ou >10?!" e limpe qualquer outro resultado
    que já estiver aparecendo na tela
    d) Caso a frequência não seja válida, ou seja, caso não esteja entre 0 e 100,
    exiba um alert "Onde já se viu frequência <0 ou >100?!" e limpe qualquer
    outro resultado que já estiver aparecendo na tela
    e) Caso a nota estiver entre 0 e menor que 6, exiba na tela essa frase:
    "Aluno ficou abaixo da média"
    f) Caso a nota estiver entre 6 e 8, exiba na tela essa frase: "Aluno ficou na
    média"
    g) Caso a nota estiver entre mais que 8 e 10, exiba na tela essa frase: "Aluno
    acima da média"
    h) Caso o aluno tiver frequência a partir de 75, exiba na tela "Aluno
    aprovado por frequência" ou "Aluno reprovado por frequência", em caso
    contrário
    Dia do programa: 18/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNota, lFrequencia;


    puts("--------------------- ESCOLA DOS MALOKAS ---------------------");

    printf("Digite sua nota: ");
    scanf("%f", &lNota);

    printf("Digite a sua frequência: ");
    scanf("%f", &lFrequencia);

    if (lNota < 0 || lNota > 10)
    {
        puts("Onde já se viu nota <0 ou >10?!");
        return 0;
    } else if (lFrequencia < 0 || lFrequencia > 100)
    {
        puts("Onde já se viu frequência <0 ou >100?!");
        return 0;
    } else 
    {
        if (lNota < 6)
            puts("Aluno ficou abaixo da média!");
        else if (lNota < 8)
            puts("Aluno ficou na média!");
        else 
            puts("Aluno acima da média");

        char *lMensagemFrequencia = lFrequencia >= 75 ? "Aluno aprovado por frequência!\n" : "Aluno reprovado por frequência\n";
        printf("%s", lMensagemFrequencia);
    }

    return 0;
} // end main