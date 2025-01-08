// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um algoritmo que leia o valor inicial da contagem, o valor final e o
    incremento, mostrando em seguida todos os valores no intervalo:
    Ex: Digite o primeiro Valor: 3
    Digite o último Valor: 10
    Digite o incremento: 2
    Contagem: 3 5 7 9 Acabou!
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
    while (inicio <= fim)
    {
        printf("%d ", inicio);
        inicio += incremento;
    }

    puts("Acabou!");
    return 0;
} // end main