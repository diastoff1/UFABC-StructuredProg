/*Escreva um programa que leia uma matriz com n x n (assuma que n é par). Após isso, imprima o resultado da matriz dobrada da seguinte forma:
Entrada:

n
Dados da matriz
Saída:
Matriz após as dobras*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m[n][n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            int var;
            scanf("%d", &var);
            m[n][n] = var;
        }
    }

    while (count < 2)
    {
        if (count % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                int ind = n - 1;
                for (int j = 0; j < n / 2; j++)
                {
                    m[i][j] += m[i][ind];
                    ind--;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int ind = n - 1;
                for (int j = 0; j < n / 2; j++)
                {
                    m[i][j] += m[ind][j];
                    ind--;
                }
            }
        }
        count++;
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}