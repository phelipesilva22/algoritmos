// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Na franquia de desenhos animados “Dragon Ball”, existe a raça
    guerreira “Saiyajin”, que pode se transformar para obter diferentes níveis
    de poder.
    Crie um programa que demonstre como o poder de guerreiros Sayajins
    aumenta na medida em que se transformam:
    a) Solicite o "ki base" (força base) do guerreiro Sayajin;
    b) Abaixo, deve haver o texto "Transformar em...";
    c) Abaixo, devem haver os botões "SSJ", "SSJ2", "SSJ3", lado a lado entre si;
    d) Ao clicar num dos botões, é calculado o novo ki do Sayajin conforme a
    regra de cada transformação:
    SSJ: ki base x 50
    SSJ2: ki base x 100
    SSJ3: ki base x 200
    e) O valor do novo ki deve aparecer abaixo com uma frase como esta:
    Após se transformar em X, o ki desse Sayajin passa a ser de Y
    Onde X é o nome da transformação (SSJ, SSJ2 ou SSJ3) e Y é o valor
    calculado em d)
    Dia do programa: 13/01/2026
*/
#define KI_SSJ1 50
#define KI_SSJ2 100
#define KI_SSJ3 200
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lResposta;
    int lForcaSayajin, lOpcao;

    do 
    {
        puts("------------------ DRAGON BALL ------------------");
        puts("[1] - FORÇA SUPER SAYAJIN 1");
        puts("[2] - FORÇA SUPER SAYAJIN 2");
        puts("[3] - FORÇA SUPER SAYAJIN 3");
        puts("[4] - TODOS OS SUPER SAYAJINS");
        printf("Escolha a sua opção: ");
        scanf("%d", &lOpcao);
        
        printf("Informe o seu ki base guerreiro sayajin: ");
        scanf("%d", &lForcaSayajin);
        
        switch (lOpcao)
        {
            case 1:
                printf("Após se transformar em SSJ1, o ki desse sayajin passa a ser de %d!\n", lForcaSayajin * KI_SSJ1);  
                break;
            case 2:
                printf("Após se transformar em SSJ2, o ki desse sayajin passa a ser de %d!\n", lForcaSayajin * KI_SSJ2);  
                break;
            case 3:
                printf("Após se transformar em SSJ3, o ki desse sayajin passa a ser de %d!\n", lForcaSayajin * KI_SSJ3);  
                break;
            case 4:
                printf("Após se transformar em SSJ1, o ki desse sayajin passa a ser de %d!\nApós se transformar em SSJ2, o ki desse sayajin passa a ser de %d!\nApós se transformar em SSJ3, o ki desse sayajin passa a ser de %d!\n", lForcaSayajin * KI_SSJ1, lForcaSayajin * KI_SSJ2, lForcaSayajin * KI_SSJ3);  
                break;
            default:
                puts("OPÇÃO INVÁLIDA! TENTE NOVAMENTE!!");
                break;
        }
        
        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &lResposta);
        lResposta = tolower(lResposta);
        system("clear");
    } while (lResposta != 'n');

    puts("--- FINALIZANDO O PROGRAMA ---");

    return 0;
} // end main