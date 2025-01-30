// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
    Dia do programa: 07/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char jogador1[50], jogador2[50];
    unsigned short opJog1, opJog2;

    puts("--------------- JOGO DO JOKENPO ---------------");
    puts("[1] - PEDRA");
    puts("[2] - PAPEL");
    puts("[3] - TESOURA");
    puts("----------------------------------------");

    printf("Nome do 1º jogador: ");
    fgets(jogador1, sizeof(jogador1), stdin);
    jogador1[strcspn(jogador1, "\n")] = '\0';

    printf("Nome do 2º jogador: ");
    fgets(jogador2, sizeof(jogador2), stdin);
    jogador2[strcspn(jogador2, "\n")] = '\0';

    printf("Escolha do %s: ", jogador1);
    scanf("%hu", &opJog1);
   
    printf("Escolha do %s: ", jogador2);
    scanf("%hu", &opJog2);

    if (opJog1 > 3 || opJog2 > 3)
    {
        puts("OPÇÕES INVÁLIDAS!");
        return 0;
    }

    if ((opJog1 == 1 && opJog2 == 1) || (opJog1 == 2 && opJog2 == 2) || (opJog1 == 3 && opJog2 == 3))
        puts("RESULTADO DO JOGO: EMPATE!");
    else if (opJog1 == 1 && opJog2 == 2)
        printf("%s ESCOLHEU PEDRA X %s ESCOLHEU PAPEL!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador2);
    else if (opJog1 == 1 && opJog2 == 3)
        printf("%s ESCOLHEU PEDRA X %s ESCOLHEU TESOURA!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador1);
    else if (opJog1 == 2 && opJog2 == 1)
        printf("%s ESCOLHEU PAPEL X %s ESCOLHEU PEDRA!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador1);
    else if (opJog1 == 2 && opJog2 == 3)
        printf("%s ESCOLHEU PAPEL X %s ESCOLHEU TESOURA!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador2);
    else if (opJog1 == 3 && opJog2 == 1)
        printf("%s ESCOLHEU TESOURA X %s ESCOLHEU PEDRA!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador2);
    else
        printf("%s ESCOLHEU TESOURA X %s ESCOLHEU PAPEL!\nRESULTADO DO JOGO: %s VENCEU!\n", jogador1, jogador2, jogador1);

    puts("----------------------------------------");

    return 0;
} // end main