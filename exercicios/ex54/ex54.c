// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando
    no final:
    a) Qual foi a média de altura do grupo
    b) Quantas pessoas pesam mais de 90Kg
    c) Quantas pessoas que pesam menos de 50Kg tem menos de 1.60m
    d) Quantas pessoas que medem mais de 1.90m pesam mais de 100Kg.
    Dia do programa: 10/01/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    unsigned short qtdPessoas = 1, qtdPessoasAcima90Kg = 0, qtdPessoasMenos50Kge160m = 0, qtdPessoasMais100Kge190m = 0;
    float peso, altura, somaAltura = 0.0, mediaAltura = 0.0;

    puts("------------------ GRUPO DOS COCOTAS ------------------");

    while (qtdPessoas <= 7)
    {
        printf("PESSOA %hu\n", qtdPessoas);
        printf("Peso (kg): ");
        scanf("%f", &peso);

        printf("Altura (m): ");
        scanf("%f", &altura);
        puts("----------------------------------------------------");

        somaAltura += altura;
        if (peso > 90)
            qtdPessoasAcima90Kg++;

        if (peso < 50 && altura < 1.60)
            qtdPessoasMenos50Kge160m++;

        if (peso > 100 && altura > 1.90)
            qtdPessoasMais100Kge190m++;

        qtdPessoas++;
    }
    mediaAltura = somaAltura / 7;
    
    printf("Média da altura do grupo: %.2fm²!\n", mediaAltura);
    printf("Total de pessoas com mais de 90kg: %hu!\n", qtdPessoasAcima90Kg);
    printf("Total de pessoas com menos de 50kg e 1.60m: %hu!\n", qtdPessoasMenos50Kge160m);
    printf("Total de pessoas com mais de 100kg e 1.90m: %hu!\n", qtdPessoasMais100Kge190m);
    puts("----------------------------------------------------");

    return 0;
} // end main