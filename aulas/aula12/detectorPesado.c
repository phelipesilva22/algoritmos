// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    --- CURSO DE ALGORITMOS - AULA 12: PROCEDIMENTOS ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa 
    Dia do programa: 16/01/2025
*/
// --- Protótipo da Função ---
void topo(float mP);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[50], maisPesado[50];
    float peso, maiorPeso = 0.0;

    topo(maiorPeso);
    for (int i = 1; i <= 5; i++)
    {
        printf("PESSOA %d\n", i);
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite o peso de %s: ", nome);
        scanf("%f", &peso);
        
        if (peso > maiorPeso)
        {
            maiorPeso = peso;
            strcpy(maisPesado, nome);
        } 
        topo(maiorPeso);
        getchar();
    }

    topo(maiorPeso);
    printf("A pessoa mais pesada foi %s, com %.1fKG!\n", maisPesado, maiorPeso);

    return 0;
} // end main

// --- Desenvolvimento da Função ---
void topo(float mP)
{
      system("clear");
    puts("------------------------------------");
    puts(" D E T E C T O R   DE   P E S A D O ");
    printf(" Maior peso até agora: %.1fKG!\n", mP);
    puts("------------------------------------");
} // end topo