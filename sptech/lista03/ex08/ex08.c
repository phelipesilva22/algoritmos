// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que:
    a) Solicite o valor a ser depositado/retirado pelo usuário
    b) Tenha os botões “Depositar” e “Retirar”. Ao clicar em algum deles, exibe
    um alerta com uma das mensagens abaixo, de acordo com o botão que foi
    clicado:
    - Depósito de R$X efetuado! Saldo atual: R$Y
    - Retirada de R$X efetuada! Saldo atual: R$Y
    OBS: o valor do saldo atual se inicia em 0, para depois ir
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
    float lValorUsuario;

    do 
    {
        puts("--------------------- TRANSFERÊNCIA BANCÁRIA ---------------------");

        printf("Digite o valor: R$");
        scanf("%f", &lValorUsuario);

        puts("[1] - Depositar");
        puts("[2] - Retirar");
        printf("Qual operação vocẽ deseja fazer? ");
        scanf("%hd", &lOpcao);

        
        switch (lOpcao)
        {
        case 1:
            lSaldo += lValorUsuario;
            printf("Depósito de R$%.2f efetuado! Saldo atual: R$%.2f!\n", lValorUsuario, lSaldo);
            break;
        case 2:
            lSaldo -= lValorUsuario;
            printf("Retirada de R$%.2f efetuada! Saldo atual: R$%.2f!\n", lValorUsuario, lSaldo);
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