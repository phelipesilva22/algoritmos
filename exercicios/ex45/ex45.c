// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: O programa anterior vai ter um problema quando digitarmos o primeiro valor
    maior que o último. Resolva esse problema com um código que funcione em qualquer
    situação.
    Dia do programa: 08/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---

    int inicio, fim, incremento;

    puts("------------- INTERVALO DE CONTAGEM -------------");

    printf("Digite o primeiro valor: ");
    scanf("%d", &inicio);

    printf("Digite o último valor: ");
    scanf("%d", &fim); 

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    printf("Contagem: ");

    if (inicio <= fim)
    {
        while (inicio <= fim)
        {
            printf("%d ", inicio);
            inicio += incremento;
        }
    } else 
    {
        while (inicio >= fim)
        {
            printf("%d ", inicio);
            inicio -= incremento;
        }
    }

    puts("Acabou!");

    return 0;
} // end main