// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO DE ALGORITMOS - AULA 10: ESTRUTURAS DE REPETIÇÃO (2) ---
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Fazer um programa que mostre um super contador de 0 à 1o e de 10 à 0
    Dia do programa: 13/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short op, num;

    do
    {
        system("clear");
        puts("\n=====================");
        puts("|      M E N U      |");
        puts("=====================");
        puts("| [1] De 1 a 10 |");
        puts("| [2] De 10 a 1 |");
        puts("| [3] Sair |");
        scanf("%hu", &op);

        switch (op)
        {
        case 1:
            num = 1;
            while (num <= 10)
            {
                if (num == 10)
                    printf("%hu", num);
                else 
                    printf("%hu.. ", num);
                num++;
            }
            break;
        case 2:
            num = 10;
            do
            {
                if (num == 1)
                    printf("%hu", num);
                else 
                    printf("%hu.. ", num);
                num--;
            } while (num >= 1);
            break;    
        case 3:
            puts("SAINDO...");
            break;
        default:
           puts("OPÇÃO INVÁLIDA!!");
            break;
        }
    } while (op != 3);

    return 0;
} // end main