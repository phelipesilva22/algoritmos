// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Solicite o valor da passagem de ônibus;
    b) Solicite a quantidade de viagens que o usuário faz por mês;
    c) Solicite a distância do trabalho dele até sua casa (em km);
    d) Ao clicar em "Calcular VT" calcule e exiba na tela quanto o usuário
    gastará por mês com transporte com uma frase como esta:
    Você vai gastar R$X por mês com transporte.
    Obs: considere que uma viagem de Uber (99, cabify, etc) custa R$0,75 por
    km (ou seja, uma viagem de 10km custará R$7,50).
    Obs: considere que o número de viagens de Uber (99, cabify, etc) que o
    usuário faz por mês é de 10% do número de viagens total (ou seja, se ele
    indicar que faz 50 viagens, considere 45 de ônibus e 5 de transporte de aplicativo).
    Dia do programa: 11/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lValorPassagem, lDistanciaTrabalho, lGastoMensalTransporte;
    unsigned short lQtdViagens, lNumeroViagensTransportePublico, lNumeroViagemAplicativo;

    puts("-------------------- GASTO TRANSPORTE PÚBLICO --------------------");

    printf("Qual é o valor da passagem de Ônibus? R$");
    scanf("%f", &lValorPassagem);

    printf("Quantas viagens você no mês? ");
    scanf("%hd", &lQtdViagens);

    printf("Qual é a distância do seu trabalho para a sua casa em KM? ");
    scanf("%f", &lDistanciaTrabalho);

    lNumeroViagensTransportePublico = lQtdViagens - (lQtdViagens * 0.10);
    lNumeroViagemAplicativo = lQtdViagens - lNumeroViagensTransportePublico;

    lGastoMensalTransporte = (lDistanciaTrabalho * 0.75 * lNumeroViagemAplicativo) + (lNumeroViagensTransportePublico * lValorPassagem);
    printf("Você vai gastar R$%.2f com transporte!\n", lGastoMensalTransporte);

    return 0;
} // end main