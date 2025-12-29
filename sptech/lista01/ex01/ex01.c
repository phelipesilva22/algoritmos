// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa 2 notas
    b) O programa calcula a média entre elas
    c) O programa exibe a média
    Dia do programa: 28/12/2025
*/
// --- Protótipo da Função ---
float calcularMedia(float *pNota1, float *pNota2);

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNota1, lNota2;

    puts("-------------------- CÁLCULO DA MÉDIA  --------------------");
    printf("Digite a 1ª nota: ");
    scanf("%f", &lNota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &lNota2);
    
    printf("O resultado dos valores: %.2f + %.2f = %.2f!\n", lNota1, lNota2, calcularMedia(&lNota1, &lNota2));

    return 0;
} // end main

// --- Desenvolvimento da Função ---
float calcularMedia(float *pNota1, float *pNota2)
{
    return (*pNota1 + *pNota2) / 2;
}