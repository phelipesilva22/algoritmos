// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Paty é muito estudiosa e sua meta é sempre ser uma aluna fora de série.
    Na faculdade onde estuda, os "fora de série" são os alunos com média
    acima de 9,4. Portanto, para ajudá-la, crie um programa o qual:
    a) Pergunte o valor de 3 notas
    b) Ao clicar num botão "Analisar desempenho", calcule a média entre as
    notas e exiba na tela a frase "Sua média foi de X", onde X é a média
    calculada
    c) Somente caso a média for acima de 9,4 exibir também a frase
    "Parabéns, você é fora de série!"
    Dia do programa: 13/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNota1, lNota2, lNota3, lMedia;

    puts("---------------- MÉDIA PARA ANORMAIS ----------------");

    printf("Digite a 1ª nota: ");
    scanf("%f", &lNota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &lNota2);

    printf("Digite a 3ª nota: ");
    scanf("%f", &lNota3);

    lMedia = (lNota1 + lNota2 + lNota3) / 3;
    printf("A sua média foi de %.2f!\n", lMedia);

    if (lMedia > 9.4)
        puts("Parabéns, você é fora de série!");

    return 0;
} // end main