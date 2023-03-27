/*Escreva um programa que leia dois vetores de inteiros. Assuma que os dois vetores estão ordenados em ordem crescente. Depois, o programa deve imprimir todos os números lidos em ordem crescente, intercalando os valores dos dois vetores. Por exemplo, se os vetores lidos forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.



Entrada:

n1 (quantidade de elementos no vetor 1)
elementos do vetor 1
n2 (quantidade de elementos no vetor 2)
elementos do vetor 2
Saída:

elementos dos vetores 1 e 2 intercalados em ordem crescente 
(inclua um caractere espaço entre cada elemento, também inclua uma quebra de linha ao final)


Importante: o programa não pode usar colchetes, portanto, será necessário utilizar artimética de ponteiros para acessar os elementos dos vetores. Para alocar os vetores, use malloc.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    int *v1 = malloc(sizeof(int) * n1);

    for (int i = 0; i < n1; i++)
    {
        int var;
        scanf("%d", &var);
        *(v1 + i) = var;
    }

    scanf("%d", &n2);
    int *v2 = malloc(sizeof(int) * n2);

    for (int i = 0; i < n2; i++)
    {
        int var;
        scanf("%d", &var);
        *(v2 + i) = var;
    }

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (*(v1 + i) < *(v2 + j))
        {
            printf("%d ", *(v1 + i));
            i++;
        }
        else
        {
            printf("%d ", *(v2 + j));
            j++;
        }
    }

    while (i < n1)
    {
        printf("%d ", *(v1 + i));
        i++;
    }

    while (j < n2)
    {
        printf("%d ", *(v2 + j));
        j++;
    }

    printf("\n");

    free(v1);
    free(v2);

    return 0;
}