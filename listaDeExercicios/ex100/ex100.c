// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Melhore o exercício 96, criando além da função Media() uma outra função
    chamada Situacao(), que vai retornar para o programa principal se o aluno está
    APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como
    parâmetro o resultado retornado pela função Media().
    Dia do programa: 19/01/2025
*/
// --- Protótipo da Função ---
float Media(float n1, float n2);
char *Situacao(float med);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char nome[40], sexo, res;
    float nota1, nota2, resMedia;

    do
    {
        puts("------------------- MÉDIA FINAL -------------------");
        printf("Nome do aluno: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        
        do
        {
            printf("Sexo de %s: [M/F] ", nome);
            scanf(" %c", &sexo);
            sexo = tolower(sexo);

            if (sexo != 'm' && sexo != 'f')
                puts("SEXO INVÁLIDO! TENTE NOVAMENTE!!\n");
        } while (sexo != 'm' && sexo != 'f');
    
        putchar('\n');
        printf("Primeira nota de %s: ", nome);
        scanf("%f", &nota1);

        printf("Segunda nota de %s: ", nome);
        scanf("%f", &nota2);

        resMedia = Media(nota1, nota2);

        printf("\nA média final é: %.1f!\n", resMedia);
        for (long unsigned int i = 0; i < strlen(nome); i++)
            nome[i] = toupper(nome[i]);
        
        if (sexo == 'f' && resMedia < 5)
            printf("%s ESTÁ REPROVADA!\n", nome);
            
        else if (sexo == 'f' && resMedia > 7)
            printf("%s ESTÁ APROVADA!\n", nome);
        else
            printf("%s ESTÁ %s!\n", nome, Situacao(resMedia));

        printf("Quer continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        getchar();
        system("clear");
    } while (res != 'n');
    
    return 0;
} // end main

// --- Desenvolvimento da Função ---
float Media(float n1, float n2)
{
    return (n1 + n2) / 2;
} // end Media

char *Situacao(float med)
{
    if (med < 5)
        return "REPROVADO";
    else if (med < 7)
        return "EM RECUPERAÇÃO";
    return "APROVADO";
} // end Situacao