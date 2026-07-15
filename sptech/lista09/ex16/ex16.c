// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa que simule a entrada de caronas num carro:
    a) Pergunte ao usuário quantas pessoas, vão entrar no carro
    b) Ao clicar num botão "#Partiu Carona"...
    c) Exiba, debaixo do botão, frases como estas:
    Entrou o 1º passageiro (que é o(a) motorista)
    Entrou o 2º passageiro
    Entrou o 3º passageiro
    Entrou o 4º passageiro
    Entrou o 5º passageiro
    O 6º passageiro terá que esperar!
    O 7º passageiro terá que esperar!
    d) Note que, sempre na frase do 1º passageiro, deve constar ao lado que é
    motorista
    e) A partir do 6º passageiro, a frase muda, pois o carro só comporta 5
    passageiros
    Dia do programa: 14/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short lQtdPessoas;

    puts("-------------------- SIMULAÇÃO DE CARONA --------------------");

    printf("Quantas pessoas vão entrar no carro? ");
    scanf("%hd", &lQtdPessoas);

    printf("Entrou o 1º passageiro (motorista)\n");
    for (int i = 2; i <= lQtdPessoas; i++)
    {
        if (i <= 5)
            printf("Entrou o %dº passageiro\n", i);
        else
            printf("O %dº passageiro terá que esperar!\n", i);
    }

    return 0;
} // end main