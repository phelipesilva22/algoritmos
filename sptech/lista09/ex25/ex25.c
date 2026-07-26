// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um programa o qual:
    a) Receba o limite inferior da amostragem. Esse número que ser maior que
    1, caso contrário emitir mensagem explicativa e não seguir em frente.
    b) Receba o limite superior da amostragem. Esse número que ser menor
    que 100 e maior que o limite inferior (item a), caso contrário emitir
    mensagem explicativa e não seguir em frente
    c) Receba o número para testar a divisibilidade, esse número tem que
    estar entre 3 e 10, caso contrário, emitir mensagem explicativa e não
    seguir em frente.
    d) Tenha num botão "Contar" que quando clicado exiba todos os números
    divisíveis pelo número informado no item c), desde o limite inferior (item
    a.) até o limite superior (item b.). Exibir esses números um ao lado do outro
    separados por uma vírgula e um espaço (, ).
    e) Ao final, sem apagar as mensagens anteriores mostre as seguintes
    mensagens:
    QUANTIDADE TOTAL DE NÚMEROS EXIBIDOS: 99
    SOMATÓRIO DOS NÚMEROS EXIBIDOS: 999
    MÉDIA DOS NÚMEROS EXIBIDOS: 99,99
    MAIOR NÚMERO EXIBIDO: 99
    MENOR NÚMERO EXIBIDO: 99
    Dia do programa: 22/07/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int lLimiteInferior, lLimiteSuperior, lNumeroDivisivel, lMaiorNumero = 0, lMenorNumero = 0, lQuantidade = 0, lSomatorio = 0;
    float lMedia;

    puts("-------------- OPERAÇÃO MÚLTIPLO --------------");
    
    printf("Digite o limite inferior: ");
    scanf("%d", &lLimiteInferior);

    if (lLimiteInferior < 1)
    {
        puts("NÚMERO INFERIOR INVÁLIDO! TENTE NOVAMENTE!");
        return 0;
    }

    printf("Digite o limite superior: ");
    scanf("%d", &lLimiteSuperior);

    if (lLimiteSuperior < lLimiteInferior || lLimiteSuperior > 100)
    {
        puts("NÚMERO SUPERIOR INVÁLIDO! TENTE NOVAMENTE!");
        return 0;
    }
    
    printf("Digite o número da divisibilidade: ");
    scanf("%d", &lNumeroDivisivel);

    if (lNumeroDivisivel < 3 || lNumeroDivisivel > 10)
    {
        puts("NÚMERO FORA DO INTERVALO DESEJADO (3 E 10). TENTE NOVAMENTE!");
        return 0;
    }

    for (int i = lLimiteInferior; i <= lLimiteSuperior; i++)
    {
        if (i % lNumeroDivisivel == 0)
        {
            if (lQuantidade == 0)
            {
                lMenorNumero = i;
                lMaiorNumero = i;
                printf ("%d", i);
            } 
            else 
            {
                printf(", %d", i);
                lMaiorNumero = i;
            }
            lQuantidade++;
            lSomatorio += i;

        }
    }

    if (lQuantidade > 0)
    {
        lMedia = (float) lSomatorio / lQuantidade;
        puts("\n\n----------------- ESTATÍSTICAS -----------------");
        printf("QUANTIDADE TOTAL DE NÚMEROS EXIBIDOS: %d\n", lQuantidade);
        printf("SOMATÓRIO DOS NÚMEROS EXIBIDOS: %d\n", lSomatorio);
        printf("MÉDIA DOS NÚMEROS EXIBIDOS: %.2f\n", lMedia);
        printf("MAIOR NÚMERO EXIBIDO: %d\n", lMaiorNumero);
        printf("MENOR NÚMERO EXIBIDO: %d\n", lMenorNumero);
    }
    else
        printf("\nNenhum número divisível por %d foi encontrado no intervalo informado.\n", lNumeroDivisivel);

    return 0;
} // end main