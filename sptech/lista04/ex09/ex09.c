// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Estima-se que os usuários de conteúdo de Streaming gastem cerca de
    100 milhões de horas por dia nesse tipo de entretenimento.
    Em média um episódio de seriado americano do estilo SITCOM (Friends,
    How I Met Your Mother, Dois Homens e Meio, etc.) tem 22min de duração.
    Sabendo disso, crie um programa o qual:
    a) Peça ao usuário para informar a última série (SITCOM) que ele assistiu
    b) Peça ao usuário para informar o total de episódios que ele já assistiu da
    série
    c) Tenha um botão "Verificar nível" que exiba abaixo dele a seguinte frase:
    "Vejo que você gosta da série X"
    E se o usuário já gastou mais de 30 horas na série informada, exiba
    também: "Uau, você realmente gosta dessa série!".
    Obs: Considere 22min como o tempo de duração de 1 episódio.
    Dia do programa: 19/01/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lUltimaSerie[50];
    int lQtdTotalEpisodios;
    float lDuracaoEpisodiosHoras;
    
    puts("--------------------- STREAMING DE MILHÕES ---------------------");

    printf("Qual foi a última série que você assistiu? ");
    fgets(lUltimaSerie, sizeof(lUltimaSerie), stdin);
    lUltimaSerie[strcspn(lUltimaSerie, "\n")] = '\0';

    printf("Qual é o total de episódios da série %s? ", lUltimaSerie);
    scanf("%d", &lQtdTotalEpisodios);

    lDuracaoEpisodiosHoras = (lQtdTotalEpisodios * 22) / 60;
    printf("Vejo que você gosta da série %s!\n", lUltimaSerie);
    if (lDuracaoEpisodiosHoras > 30)
        puts("Uau, você realmente gosta dessa série!");

    return 0;
} // end main