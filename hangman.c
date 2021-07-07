#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    forca(int estado)
{
    if (estado == 0)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 1)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 O");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 2)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 O");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 3)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|               \\ 0");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 4)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|               \\ 0 /");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 5)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|               \\ 0 /");
        printf("\n|                 |");
        printf("\n|                  \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 6)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|               \\ 0 /");
        printf("\n|                 |");
        printf("\n|                / \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|      You lost the game.\n");
        printf("\n-");
    }
}

int main(void)
{
    int erros = 0;
    char letra;
    char p_sec[100];//palavra secreta
    char p_tela[100];//palavra para tela

    printf("JOGADOR 1: ");
    printf("Palavra secreta: ");
    fgets(p_sec, 100, stdin);

    printf("A palavra secreta é: %s", p_sec);
    printf("A palavra tem %lu caracteres", strlen(p_sec)-1);

    for (int i = 0; i < 30; i++)
        printf("\n");

    strcpy(p_tela, p_sec);//copia p_sec para p_tela
    //retira o último caracter de p_tela
    //que está a mais devido a captura ser com fgets()
    //substitui letras por '_'
    for (int i = 0; i < strlen(p_tela)-1; i++)
        p_tela[i] = '_';

    while (1)
    {
        int sera_que_errou = 1;
        //imprimir a forca
        forca(erros);
        //imprimir os underline/underscores '_' para cada letra da palavra secreta
        printf("\nAdivinha: ");
        for (int i = 0; i < strlen(p_tela); i++)
            printf("%c ", p_tela[i]);
        //recebe a letra
        printf("\nLetra: ");
        scanf("%c", &letra);
        
        //se letra correta atualiza a palavra na tela
        //verifica se a letra é correta

        for (int i = 0; i < strlen(p_tela); i++)
        {
            if (letra == p_sec[i])//correto
            {
                p_tela[i] = letra;
                sera_que_errou = 0;
            }
        }
        //se não, incrementa erros
        if (sera_que_errou == 1)
            erros++;
        //verificar se o jogo acabou
        if (erros == 6)
        {
            //perdeu
            forca(erros);
            break;
        }
    }
    

    return (0);
}
