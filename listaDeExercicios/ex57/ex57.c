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
    float salario, totSalarioHomens = 0.0, totSalarioMulheres = 0.0;

    puts("-------------- SALÁRIO DOS FUNCIONÁRIOS --------------");

    do
    {
        printf("FUNCIONÁRIO %hu\n", cont);
        printf("Valor do salário: R$");
        scanf("%f", &salario);

        do
        {
            printf("Sexo: (M/F) ");
            scanf(" %c", &sexo);
            sexo = tolower(sexo);
            
            if (sexo != 'm' && sexo != 'f')
                puts("ERRO! SEXO DIGITADO INCORRETAMENTE!");
        } while (sexo != 'm' && sexo != 'f');
        
        if (sexo == 'm')
            totSalarioHomens += salario;
        else if (sexo == 'f')
            totSalarioMulheres += salario;

        puts("Deseja continuar? ");
        puts("(s) | (n)");
        printf(">>> ");
        scanf(" %c", &res);
        res = tolower(res);

        puts("--------------------------------------------");
        cont++;
    } while (res != 'n');
    
    printf("Total de salários dos homens: %.2f!\n", totSalarioHomens);
    printf("Total de salários das mulheres: %.2f!\n", totSalarioMulheres);

    return 0;
} // end main