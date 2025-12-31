// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa a frente e a lateral de um terreno retangular
    b) O programa calcula a área do terreno
    c) O programa exibe “#terrenopequeno” se a área for menor que 100, exibe
    “#terrenomedio” se a área estiver entre 100 e 250 ou exibe
    “#terrenogrande” caso a área for maior que 250
    Dia do programa: 31/12/2025
*/  
// --- Protótipo da Função ---
float calcularAreaTerreno(float pFrenteTerreno, float pLateralTerreno);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lFrenteTerreno, lLateralTerreno;

    puts("------------------ CÁLCULO DO TERRENO RETANGULAR ------------------");

    printf("Qual é a medida da frente do terreno em m²? ");
    scanf("%f", &lFrenteTerreno);

    printf("Qual é a medida da lateral do terreno em m²? ");
    scanf("%f", &lLateralTerreno);

    float lAreaTerreno = calcularAreaTerreno(lFrenteTerreno, lLateralTerreno);
    printf("A área do terreno é: %.2fm²!\n", lAreaTerreno);

    if (lAreaTerreno < 100)
        puts("#terrenopequeno");    
    else if (lAreaTerreno <= 250)
        puts("#terrenomedio");
    else
        puts("#terrenogrande");

    return 0;
} // end main

// --- Desenvolvimento da Função ---
float calcularAreaTerreno(float pFrenteTerreno, float pLateralTerreno)
{
    return pFrenteTerreno * pLateralTerreno;
}