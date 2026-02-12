// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Augusto Bivio é aluno SPTech e bolou um critério para
    indicar em quais empresa teria preferência em ir trabalhar. Seus critérios
    são: A bolsa deve ser pelo menos 1800 ou o VR pelo menos 20 ou deve ficar
    a no máximo 30 minutos de tempo de deslocamento da faculdade. Se um desses 3 critérios for ok, a empresa está entre suas preferências. Assim,
    crie um programa o qual:
    a) Solicite o nome da empresa
    b) Solicite o valor da bolsa da empresa
    c) Solicite o valor do VR da empresa
    d) Solicite o tempo de descolamento da empresa para a SPTech
    e) Ao clicar em "É preferida?", mostre uma dessas mensagens na própria
    página, abaixo do botão:
    "A empresa X é uma de suas preferências", caso a empresa atenda a pelo
    menos um dos critérios aqui explicados
    "A empresa X está fora da sua lista", caso contrário
    Dia do programa: 11/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNomeEmpresa[50];
    float lValorBolsa, lValorVR;
    int lTempoDeslocamento;
    
    puts("-------------------- SUPER ESTAGIÁRIO --------------------");

    printf("Qual é a empresa que você deseja estagiar? ");
    fgets(lNomeEmpresa, sizeof(lNomeEmpresa), stdin);
    lNomeEmpresa[strcspn(lNomeEmpresa, "\n")] = '\0';

    printf("Qual é o valor da bolsa da empresa %s? R$", lNomeEmpresa);
    scanf("%f", &lValorBolsa);

    printf("Qual é o valor do VR da empresa %s? R$", lNomeEmpresa);
    scanf("%f", &lValorVR);

    printf("Qual é o tempo de deslocamento da empresa para a SPTECH? ");
    scanf("%d", &lTempoDeslocamento);

    if (lValorBolsa >= 1800 || lValorVR >= 20 || lTempoDeslocamento <= 30)
        printf("A empresa %s é uma de suas preferências!\n", lNomeEmpresa);
    else
        printf("A empresa %s está fora da sua lista!\n", lNomeEmpresa);

    return 0;
} // end main