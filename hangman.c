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
        printf("\n|              \\ 0");
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
        printf("\n|              \\ 0 /");
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
    char p_sec[100];//palavra secreta

    printf("Player 1: \n");
    printf("Word secret: ");
    fgets(p_sec, 100, stdin);

    printf("The word secret is: %s", p_sec);//depois criar um sistema para validar se essa realmente é a palavra desejada
    printf("The word have %lu characteres: ", strlen(p_sec)-1);

    system("clear");

    for (int i = 0; i < strlen(p_sec)-1; i++)
        printf("_ ");

    int erros = 0;

    while (1)
    {
        
        //imprimir a forca
        forca(erros);
        //imprimir os underline/underscores '_' para cada letra da palavra secreta
        printf("\nAdivinhe: ");

        for (int i = 0; i < strlen(p_sec)-1; i++)
        {
            printf("_ ");
        }
            break;
        //receba a letra
        printf("\nLetra: ");
        char letra;
        scanf("%c", &letra);
        //se a letra for correta atualiza palavra na tela
        //senao, incrementa erros
        //verifica se o jogo acabou
    }

    

    forca(6);

    return (0);
}
