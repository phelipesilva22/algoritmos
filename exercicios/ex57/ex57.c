// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
    No final, mostre o total de salários pagos aos homens e o total pago às
    mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
    sempre que ler os dados de um funcionário.
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res, sexo;
    unsigned short cont = 1;
    float salario;

    puts("-------------- SALÁRIO DOS FUNCIONÁRIOS --------------");

    do
    {
        printf("FUNCIONÁRIO %hu\n", cont);
        printf("Valor do salário: R$");
        scanf("%f", &salario);

        printf("Sexo: (M/F)");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);


        puts("Deseja continuar? ");
        puts("(s) | (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);

        cont++;
    } while (res != 'n');
    

    return 0;
} // end main