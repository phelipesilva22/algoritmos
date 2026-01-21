// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite 2 notas de um aluno
    b) Ao clicar em "Verificar situação", calcule sua média e...
    c) Caso a média seja a partir de 6, exiba um alert com "Parabéns,
    aprovado!"
    d) Caso a média seja menor que 6, exiba um alert com "Tente outra vez..."
    Dia do programa: 21/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNota1, lNota2;

    puts("-------------------- ESCOLA JAVALI CANSADO --------------------");

    printf("Digite a 1º nota: ");
    scanf("%f", &lNota1);

    printf("Digite a 2º nota: ");
    scanf("%f", &lNota2);
    
    printf("Média: %.2f!\n", (lNota1 + lNota2) / 2);
    char *lMensagemSituacaoAluno = (lNota1 + lNota2) / 2 < 6 ? "Tente outra vez...\n" : "Parabéns, aprovado!\n";
    printf("%s", lMensagemSituacaoAluno);

    return 0;
} // end main