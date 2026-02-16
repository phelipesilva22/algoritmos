// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um pequeno sistema de avaliação de atendimento, o
    qual:
    a) Pergunte a nota para o atendimento
    b) Ao clicar num botão "Avaliar atendimento", pode uma dessas frases
    abaixo do botão:
    b.1) "Nota inválida", caso a nota não esteja entre 0 e 10
    b.2) "Não aprovado", caso a nota for entre 0 e menor que 5
    b.3) "Neutro", caso a nota for entre 5 e 6
    b.4) "Aprovado", caso a nota for mais que 6
    Dia do programa: 12/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNotaAtendimento;

    puts("--------------------- SISTEMA ATENDIMENTO ---------------------");
    
    printf("Qual nota você dava para o atendimento? ");
    scanf("%f", &lNotaAtendimento);

    if (lNotaAtendimento < 0 || lNotaAtendimento > 10)
        puts("Nota inválida!");
    else if (lNotaAtendimento < 5)
        puts("Não aprovado!");
    else if (lNotaAtendimento <= 6)
        puts("Neutro!");
    else 
        puts("Aprovado!");

    return 0;
} // end main