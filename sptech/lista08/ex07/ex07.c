// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
/*
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Melhore o exercício 4, de tal forma que:
    a) Sempre que ocorrer uma falha na autenticação, deve aparecer abaixo da
    frase de "Falha de autenticação" uma outra frase, como esta:
    Você ainda tem 2 tentativa(s)
    b) A ideia é que o usuário tem 3 tentativas de autenticação. Sempre que
    errar novamente na autenticação, o "contador" de tentativas reduz em 1 na
    tela.
    c) Uma vez que se esgotarem as tentativas, deve surgir mais uma frase
    abaixo, que seria
    Usuário BLOQUEADO! Procure seu gerente!
    d) Em caso de usuário bloqueado, não adianta nem tentar fazer uma
    autenticação com as credenciais corretas, que nada mais acontecerá
    e) Caso o usuário autentique com sucesso, sem que tenham sido
    queimadas as 3 tentativas, a mensagem de autenticação aparece
    normalmente e a frase com a quantidade de tentativas deve sumir da tela
    e deve ser "reiniciada" para as próximas falhas
    Dia do programa: 19/02/2026
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char login[50], lSenha[50], lInformacaoPessoal[50], lRes;
    unsigned short lTentativas;

    do
    {  
        puts("----------------------- BANCO MELETE -----------------------");
        printf("Digite seu login: ");
        fgets(login, sizeof(login), stdin);
        login[strcspn(login, "\n")] = '\0';
        
        printf("Digite sua senha: ");
        fgets(lSenha, sizeof(lSenha), stdin);
        lSenha[strcspn(lSenha, "\n")] = '\0';

        printf("Digite uma informação pessoal: ");
        fgets(lInformacaoPessoal, sizeof(lInformacaoPessoal), stdin);   
        lInformacaoPessoal[strcspn(lInformacaoPessoal, "\n")] = '\0';

        if (strcasecmp(login, "ana") == 0 && 
         strcasecmp(lSenha, "braga") == 0 && 
         (strcasecmp(lInformacaoPessoal, "1949") == 0 || strcasecmp(lInformacaoPessoal, "louro jose") == 0))
        {
            puts("Usuário autenticado!");
            lTentativas = 3;
        }
        else
        {
            puts("Falha na autenticação!");
        
            lTentativas--;
            if (lTentativas > 0)    
                printf("Você ainda tem %hd tentativa(s)!\n", lTentativas);
            else
            {
                puts("Usuário BLOQUEADO! Procure seu gerente!");
                break;
            }
        }

        printf("Deseja continuar tentando? ");
        scanf(" %c", &lRes);
        getchar();
        system("clear");
        
    } while (lRes != 'n');

    return 0;
} // end main