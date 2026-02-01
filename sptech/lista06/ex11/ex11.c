// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um minissistema de recarga do "cartão fidelidade" do metrô de São
    Paulo em que:
    a) Solicite ao usuário que informe a quantidade de passagens que deseja
    adquirir
    b) Ao clicar em "Comprar", caso a quantidade seja entre 8 e 50, implemente
    as regras entre os itens c), d) e e). Caso contrário, exiba apenas o alert
    "Quantidade inválida para o Fidelidade!"
    c) Caso a quantidade for entre 8 e 19, aplique um desconto de 3% no valor
    da passagem de metrô
    d) Caso a quantidade for entre 20 e 49, aplique um desconto de 5% no valor
    da passagem de metrô
    e) Caso a quantidade for 50, aplique um desconto de 7% no valor da
    passagem de metrô
    f) Considere que o valor da passagem é R$4,40
    g) Caso a quantidade de passagens veja válida, conforme a regra em b),
    exiba o valor total a pagar numa frase abaixo do botão "Comprar";
    Ex: 50 passagens devem exibir "Total a pagar: R$204.60"
    Dia do programa: 31/01/2026
*/
#define VALOR_PASSAGEM 4.40
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lQtdPassagens;
    float lValorPassagem;
    
    puts("----------------------- CARTÃO FIDELIDADE -----------------------");

    printf("Quantas passagens você deseja adquirir? ");
    scanf("%d", &lQtdPassagens);

    if (lQtdPassagens < 8 || lQtdPassagens > 50)
    {
        puts("Quantidade inválida para o Fidelidade!");
        return 0;
    } else 
    {
        lValorPassagem = (VALOR_PASSAGEM * lQtdPassagens);
        if (lQtdPassagens > 7 && lQtdPassagens < 20)
            lValorPassagem -= lValorPassagem * 0.03; 
        else if (lQtdPassagens > 19 && lQtdPassagens < 50)
            lValorPassagem -= lValorPassagem * 0.05;
        else if (lQtdPassagens == 50)
            lValorPassagem -= lValorPassagem * 0.07; 
    }

    printf("Total a pagar: R$%.2f!\n", lValorPassagem);

    return 0;
} // end main