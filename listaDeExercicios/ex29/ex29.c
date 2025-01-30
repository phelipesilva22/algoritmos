// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um programa que leia o nome de um funcionário, seu salário,
    quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
    acordo com a tabela a seguir:
    - Até 3 anos de empresa: aumento de 3%
    - entre 3 e 10 anos: aumento de 12.5%
    - 10 anos ou mais: aumento de 20%
    Dia do programa: 07/01/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char funcionario[50];
    unsigned short anosDeEmpresa;
    float salario;

    puts("------------- REAJUSTE SALARIAL SINQIA DOWN -------------");

    printf("Qual é o seu nome? ");
    fgets(funcionario, sizeof(funcionario), stdin);
    funcionario[strcspn(funcionario, "\n")] = '\0';

    printf("%s, qual é o seu salário: R$", funcionario);
    scanf("%f", &salario);

    printf("%s, quantos anos você trabalha na empresa? ", funcionario);
    scanf("%hu", &anosDeEmpresa);

    if (anosDeEmpresa <= 3)
    {
        puts("--- REAJUSTE DE 3% ---");
        printf("%s, seu novo salário é: R$%.2f!\n", funcionario, salario * 1.03);
    } else if (anosDeEmpresa < 10)
    {
        puts("--- REAJUSTE DE 12.5% ---");
        printf("%s, seu novo salário é: R$%.2f!\n", funcionario, salario * 1.125);
    } else 
    {
           puts("--- REAJUSTE DE 20% ---");
        printf("%s, seu novo salário é: R$%.2f!\n", funcionario, salario * 1.20);
    }

    return 0;
} // end main