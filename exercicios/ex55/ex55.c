// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: [DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de
    agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4
    tentativas para tentar acertar.
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short comp, num, tentativas = 1;

    puts("--------------------- ADIVINHE O NÚMERO ---------------------");

    srand(time(NULL));
    while (tentativas <= 4)
    {
        comp = rand() % 10 + 1;
        
        printf("TENTATIVA %hu\n", tentativas);
        printf("Digite o %hu número: ", tentativas);
        scanf("%hu", &num);

        do
        {
            if (num > 10)
            {   
                puts("ERRO! NÚMERO INVÁLIDO!");
                printf("Digite o %hu número: ", tentativas);
                scanf("%hu", &num);
                putchar('\n');
            }
        } while (num > 10);
        
        printf("NÚMERO SORTEADO: %hu!\n", comp);
        if (num == comp)
            puts("VOCÊ VENCEU O JOGO! MÁQUINAS SÃO INFERIORES PARA SEMPRE!");
        else 
            puts("COMPUTADOR VENCEU O JOGO! MÁQUINAS DOMINARÃO O MUNDO!"); 

        puts("------------------------------------------------------------");
        tentativas++;
    }

    return 0;
} // end main