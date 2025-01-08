// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Um programa de vida saudável quer dar pontos atividades físicas que podem
    ser trocados por dinheiro. O sistema funciona assim:
    - Cada hora de atividade física no mês vale pontos
    - até 10h de atividade no mês: ganha 2 pontos por hora
    - de 10h até 20h de atividade no mês: ganha 5 pontos por hora
    - acima de 20h de atividade no mês: ganha 10 pontos por hora
    - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short horasAtividade, pontos;

    puts("----------------- HEALTHY LIFE -----------------");

    printf("Quantas horas de atividade você fez no mês? ");
    scanf("%hu", &horasAtividade);

    if (horasAtividade <= 10)
        pontos = horasAtividade * 2;
    else if (horasAtividade <= 20) 
        pontos = horasAtividade * 5;
     else 
        pontos = horasAtividade * 10;
        
    printf("Total de pontos ganhados: %hu PONTOS!\n", pontos);
    printf("Total de dinheiro faturado: R$%.2f!\n", pontos * 0.05);

    return 0;
} // end main