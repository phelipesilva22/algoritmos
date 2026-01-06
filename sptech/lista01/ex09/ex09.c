// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que:
    a) Receba 2 notas de um aluno. Nenhuma delas pode ser menor que 0 nem
    maior que 10.
    b) A frequência em aula também deve ser solicitada e só devem ser aceitos
    valores entre 0 e 100, insistindo-se nessa entrada até que seja informado
    um valor válido.
    c) Calcule a média e exiba ela.
    d) Exiba "Parabéns, aprovado" se a média for maior ou igual a 6 e a
    frequência for a partir de 70% ou "Infelizmente, reprovado" em caso
    contrário.
    e) Pergunte se será cadastrado um novo aluno. Se "sim", volte para o item
    a). Em caso contrário, finalize o programa.
    Dia do programa: 05/01/2026
*/
// --- Protótipo da Função ---
char *exibirSituacaoFinal(float pMedia, float pFrequencia);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char lNovoAlunoCadastrado;
    float lNota1, lNota2, lFrequencia;

    do
    {
        puts("------------------ SPTECH SCHOOL ------------------");
        do
        {
            printf("Digite a 1ª nota: ");
            scanf("%f", &lNota1);  
            if (lNota1 < 0 || lNota1 > 10)
                puts("Nota digitada inválida. Tente novamente!\n");
        } while (lNota1 < 0 || lNota1 > 10);
        
        do
        {
            printf("Digite a 2ª nota: ");
            scanf("%f", &lNota2);  
            if (lNota2 < 0 || lNota2 > 10)
                puts("Nota digitada inválida. Tente novamente!\n");
        } while (lNota2 < 0 || lNota2 > 10);
        
        do
        {
            printf("Digite a frequência do aluno: ");
            scanf("%f", &lFrequencia);
            if (lFrequencia < 0 || lFrequencia > 100)
                puts("Frequência digitada inválida. Tente novamente!\n");
        } while (lFrequencia < 0 || lFrequencia > 100);
        
        float lMedia = (lNota1 + lNota2) / 2;
        printf("MÉDIA FINAL: %.2f\n", lMedia);
        printf("SITUAÇÃO FINAL: %s\n", exibirSituacaoFinal(lMedia, lFrequencia));

        puts("Deseja cadastrar um novo aluno? ");
        puts("sim (s) | não (n)");
        printf(">>> ");
        scanf(" %c", &lNovoAlunoCadastrado);
        lNovoAlunoCadastrado = tolower(lNovoAlunoCadastrado);
        system("clear");
    } while (lNovoAlunoCadastrado != 'n');

    puts("--- FINALIZANDO O PROGRAMA ---");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
char *exibirSituacaoFinal(float pMedia, float pFrequencia)
{
    if (pMedia >= 6 && pFrequencia >= 70)
        return "Parabéns, aprovado!";
    return "Infelizmente, reprovado!";
}