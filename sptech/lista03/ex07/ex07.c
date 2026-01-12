// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que:
    a) Tenha os botões “Receber 100” e “Pagar 50”.
    b) Ao clicar em “Receber 100”, atualize o saldo do usuário e exiba a
    mensagem “Transferência de R$100 recebida! Saldo atual: R$Y”.
    c) Ao clicar em “Pagar 50”, atualize o saldo do usuário e exiba a mensagem
    “Pagamento de R$50 efetuado! Saldo atual: R$Y”.
    OBS: o valor do saldo se inicia em 0, para depois ir
    reduzindo/incrementando de acordo com a operação realizada
    Dia do programa: 08/01/2026
*/
float lSaldo = 0.0;
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lResp;
    unsigned short lOpcao;

    do 
    {
        puts("--------------------- TRANSFERÊNCIA BANCÁRIA ---------------------");
        puts("[1] - Receber 100");
        puts("[2] - Pagar 50");
        printf("Escolha a sua opção: ");
        scanf("%hd", &lOpcao);

        
        switch (lOpcao)
        {
        case 1:
            lSaldo += 100;
            printf("Transferência de R$100 recebida! Saldo atual: R$%.2f!\n", lSaldo);
            break;
        case 2:
            lSaldo -= 50;
            printf("Pagamento de R$50 efetuado! Saldo atual: R$%.2f!\n", lSaldo);
            break;
        default:
            puts("OPÇÃO INVÁLIDA! TENTE NOVAMENTE!!");
            break;
        }

        puts("Deseja continuar? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &lResp);
        lResp = tolower(lResp);
        system("clear");
    } while (lResp != 'n');

    puts("--- FINALIZANDO O PROGRAMA ---");

    return 0;
} // end main