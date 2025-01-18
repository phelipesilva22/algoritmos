// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Faça um programa que tenha um procedimento chamado Contador() que recebe
    três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
    programa principal deve solicitar a digitação desses valores e passá-los ao
    procedimento, que vai mostrar a contagem na tela.
    Ex: Para os valores de início (4), fim (20) e incremento(3) teremos
    Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM
    Dia do programa: 18/01/2025
*/
// --- Protótipo da Função ---
void Contador(int i, int f, int a);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int inicio, fim, incremento;

    puts("---------------- CONTADOR PROCEDIMENTO ----------------");

    printf("Início: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    printf("Incremento: ");
    scanf("%d", &incremento);

    printf("Contagem: ");
    Contador(inicio, fim, incremento);
    puts("FIM!");

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Contador(int i, int f, int a)
{

    if (i <= f)
    {
        while (i <= f)
        {
            if (i + a > f)
                printf("%d ", i);
            else 
                printf("%d >> ", i);
            i += a;
        }
    } else if (i >= f)
    {
        while (i >= f)
        {
              if (f + a > i)
                printf("%d ", i);
            else 
                printf("%d >> ", i);
            i -= a;
        }
    }
} // end Contador