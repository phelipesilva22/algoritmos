// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
    a) Qual é a média de idade do grupo
    b) Quantas pessoas tem mais de 18 anos
    c) Quantas pessoas tem menos de 5 anos
    d) Qual foi a maior idade lida
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short qtdPessoas = 1, idade, totPessoasMais18 = 0, totPessoasMenos5 = 0, maiorIdade = 0, somaIdade = 0;
    float mediaIdade;

    puts("------------------ GRUPO DOS COCOTAS ------------------");

    while (qtdPessoas <= 10)
    {
        printf("Digite a %huº idade: ", qtdPessoas);
        scanf("%hu", &idade);
        somaIdade += idade;
        mediaIdade = somaIdade / 10;

        if (idade > 18)
            totPessoasMais18++;

        if (idade < 5)
            totPessoasMenos5++;

        if (idade > maiorIdade)
            maiorIdade = idade;

        qtdPessoas++;
    }
    puts("------------------------------------------------");
    printf("A média da idade do grupo: %.2f!\n", mediaIdade);
    printf("Total de pessoas com mais de 18 anos: %hu!\n", totPessoasMais18);
    printf("Total de pessoas com menos de 5 anos: %hu!\n", totPessoasMenos5);
    printf("A maior idade foi: %hu!\n", maiorIdade);
    puts("------------------------------------------------");

    return 0;
} // end main