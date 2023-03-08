/*Implemente uma função que receba uma string (vetor de caracteres) contendo uma frase e remova a palavra de índice i do vetor passado no parâmetro frase da função. Considere que a primeira palavra tem índice 1. Ao remover uma palavra, é necessário remover caracteres espaço adjacentes à palavra removida. A string de entrada possui no máximo 100 caracteres e pode conter pontuação.

Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts e não use string.h.

Protótipo da função:

void remover_palavra(int i, char frase[]);*/

// #include "remover_palavra.h"
#include <stdio.h>

void remover_palavra(int i, char frase[])
{
    int ind = 0;
    int count = 1;

    if (i != 1)
    {
        while (frase[ind] != '\0')
        {
            if (frase[ind] == ' ')
                count++;
            ind++;
            if (count == i)
                break;
        }
    }

    int count2 = 0;
    while (frase[ind] != ' ' && frase[ind] != '\0')
    {
        int aux = ind;
        if (frase[ind] == ',' || frase[ind] == '.' || frase[ind] == ':')
        {
            while (frase[aux - 1] != '\0')
            {
                frase[aux - 1] = frase[aux];
                aux++;
            }
            count2++;
            break;
        }
        while (frase[aux] != '\0')
        {
            frase[aux] = frase[aux + 1];
            aux++;
        }
    }

    if (count2 == 0)
    {
        while (frase[ind] != '\0')
        {
            frase[ind] = frase[ind + 1];
            ind++;
        }
    }
}