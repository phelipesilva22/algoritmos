// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) O usuário informa 2 notas
    b) O programa calcula a média entre elas
    c) O programa exibe a "#partiuestágio" caso a média seja maior ou igual a 5 e "#partiutentardenovo" em caso contrário
    Dia do programa: 28/12/2025
*/
// --- Protótipo da Funções ---
float calcularMedia(float pNota1, float pNota2);
char *ExibirMensagem(float pMedia);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float lNota1, lNota2;

    puts("-------------------- CÁLCULO DA MÉDIA + VAGA DE ESTÁGIO --------------------");
    printf("Digite a 1ª nota: ");
    scanf("%f", &lNota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &lNota2);
    
    float lMedia = calcularMedia(lNota1, lNota2);
    printf("A média dos valores é %.2f!\n", lMedia);
    printf("Sua situação das férias é %s!\n", ExibirMensagem(lMedia));

    return 0;
} // end main

// --- Desenvolvimento da Funções ---
float calcularMedia(float pNota1, float pNota2)
{
    return (pNota1 + pNota2) / 2;
}

char *ExibirMensagem(float pMedia)
{
    return pMedia >= 5 ? "#partiuEstagio": "#partiuTentaDeNovo";
}