// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Crie um diagrama de atividade que represente o seguinte programa:
    a) Leia o estado brasileiro onde o usuário nasceu. Só aceite estados
    válidos, insistindo novamente até que seja informado um estado brasileiro
    b) Leia a quantidade de filhos que o usuário tem, porém, ela deve ficar
    entre 0 e 15. Caso contrário, insista novamente até que fique.
    c) Caso a quantidade de filhos for 3, exiba "#nãotemtv #nãoteminternet
    #nãotemvideogame".
    d) Caso a quantidade de filhos for 2, exiba "#nãotemtv".
    e) Caso a quantidade de filhos for 1, exiba "#nãotemvideogame".
    f) Caso não tenha filhos, exiba "#tv #internet #videogame"
    g) Caso a quantidade de filhos for mais de 3, exiba
    "#cresceiemultiplicaivos"
    Dia do programa: 30/12/2025
*/
// --- Constante ---
#define MAXIMA_QTD_FILHOS 15
// --- Protótipo da Função ---
void exibirMensagem(unsigned short pQuantidadeFilhos);
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char *lEstados[] = {"Acre", 
                       "Alagoas", 
                       "Amapá", 
                       "Amazonas",
                       "Bahia", 
                       "Ceará",
                       "Distrito Federal",
                       "Espírito Santo",
                       "Goiás",
                       "Maranhão",
                       "Mato Grosso",
                       "Mato Grosso do Sul",
                       "Minas Gerais",
                       "Pará",
                       "Paraíba",
                       "Paraná",
                       "Pernambuco",
                       "Piauí",
                       "Rio de Janeiro",
                       "Rio Grande do Norte",
                       "Rio Grande do Sul",
                       "Rondônia",
                       "Roraima",
                       "Santa Catarina",
                       "Sergipe",
                       "São Paulo",
                       "Tocantins"
                    };
        char lNomeEstado[50];
        int lTotalEstados = sizeof(lEstados) / sizeof(lEstados[0]);
        unsigned short lQuantidadeFilhos;
        bool isEstadoBrasileiro = false;

        
        puts("----------------- PROGRAMA BRASILEIRO -----------------");
        do 
        {    
            printf("Digite um estado brasileiro: ");
            fgets(lNomeEstado, sizeof(lNomeEstado), stdin);
            lNomeEstado[strcspn(lNomeEstado, "\n")] = '\0';
        
            for (int i = 0; i < lTotalEstados; i++)
            {
                if (strcmp(lNomeEstado, lEstados[i]) == 0)
                {
                    isEstadoBrasileiro = true;
                    break;
                }
            }

             if (!isEstadoBrasileiro) 
                puts("Estado invalido! Tente novamente.\n");
        } while (!isEstadoBrasileiro);

       do
       {
            printf("Digite a sua quantidade de filhos: ");
            scanf("%hd", &lQuantidadeFilhos);
            if (lQuantidadeFilhos > MAXIMA_QTD_FILHOS)
                puts("Quantidade de filhos inválida! Tente novamente.\n");
       } while (lQuantidadeFilhos > MAXIMA_QTD_FILHOS);
        
       exibirMensagem(lQuantidadeFilhos);
       
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void exibirMensagem(unsigned short pQuantidadeFilhos)
{
    switch (pQuantidadeFilhos)
    {
    case 0:
        puts("#tv #internet #videogame");
        break;
    case 1:
        puts("#nãotemvideogame");
        break;
    case 2:
        puts("#nãotemtv");
        break;
    case 3:
        puts("#nãotemtv #nãoteminternet #nãotemvideogame");
        break;
    default:
        puts("#cresceiemultiplicaivos");
        break;
    }
}