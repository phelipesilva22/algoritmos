// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa o salário de estagiário e o valor da faculdade.
    b) O programa calcula a média diária salário líquido (salário – faculdade).
    Considerar 30 dias
    c) Caso a média seja menor que 15, exibir “#controletotal”
    d) Caso a média esteja entre 15 e 20, exibir “#ragazzonosabado”
    e) Caso a média seja maior que 20 e menor 25, exibir “#cinemanamorada”
    f) Caso a média é de 25 a 30, exibir “#novogame”
    g) Caso a média seja maior que 30, exibir “#tobonito”
    Dia do programa: 31/12/2025
*/
// --- Protótipo da Funções ---
float calcularSalarioDiario(float pSalarioEstagiario, float pValorMensalidade);
char *exibirMensagem(float pMediaSalarial);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lSalarioEstagiario, lValorMensalidade;

    puts("---------------- FINANÇAS MENSAIS ESTAGIÁRIO ----------------");

    printf("Qual é o valor do salário do estagiário? R$");
    scanf("%f", &lSalarioEstagiario);

    printf("Qual é o valor da mensalidade da faculdade? R$");
    scanf("%f", &lValorMensalidade);

    float lValorSalarioDiario = calcularSalarioDiario(lSalarioEstagiario, lValorMensalidade);
    printf("A média diária do seu salário é R$%.2f!\n", lValorSalarioDiario);

    printf("Mensagem final: %s!\n", exibirMensagem(lValorSalarioDiario));

    return 0;
} // end main

// --- Desenvolvimento da Funções ---
float calcularSalarioDiario(float pSalarioEstagiario, float pValorMensalidade)
{
    return (pSalarioEstagiario - pValorMensalidade) / 30.0;
}

char *exibirMensagem(float pMediaSalarial)
{
    if (pMediaSalarial < 15)
        return "#controletotal";
    else if (pMediaSalarial < 20)
        return "#ragazzonosabado";
    else if (pMediaSalarial < 25)
        return "#cinemanamorada";
    else if (pMediaSalarial < 30)
        return "#novogame";
    return "#tobonito";
}