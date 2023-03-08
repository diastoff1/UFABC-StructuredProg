/*Faça um programa que leia uma frase (no máximo 100 caracteres) e imprima a quantidade de palavras na frase lida.

Entrada:
Este eh um teste.

Saída:
4
*/

#include <stdio.h>

int main()
{
    char phrase[100];
    int length = 0;
    int count = 1;

    fgets(phrase, 100, stdin);
    printf("%s", phrase);

    while (phrase[length] != '\0')
    {
        if (phrase[length] == ' ')
            count++;
        length++;
    };

    printf("%d", count);

    return 0;
}
