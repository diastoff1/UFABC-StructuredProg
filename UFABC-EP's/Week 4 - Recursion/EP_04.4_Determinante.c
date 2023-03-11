/*Exercício adaptado de Prof. Fernando Teubl - Programação Estruturada 2020


Determinante é uma função que transforma uma matriz quadrada em um número real.

O determinante de uma matriz de ordem 1 (apenas um elemento) é o único elemento da matriz.
Para matrizes maiores, pode-se calcular o determinante com a seguinte fórmula:

det(A)=∑j=1nai,j×(−1)i+jdet(Ai,j)*/

#include <stdio.h>

int pot(int n, int exp)
{
    if (exp == 1)
        return n;
    else
        return n * pot(n, exp - 1);
}

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n - 1][n - 1], int c)
{
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        int k = 0;
        while (k < n - 1)
        {
            if (j == c)
            {
                j++;
                continue;
            }
            m_saida[i - 1][k] = m_entrada[i][j];
            j++;
            k++;
        }
    }
}

float calcula_determinante(int n, float m_entrada[n][n])
{
    float det = 0;
    if (n == 1)
    {
        det = m_entrada[0][0];
    }
    else
    {
        float m_sub[n - 1][n - 1];
        for (int c = 0; c < n; c++)
        {
            remove_primeira_linha_e_coluna_c(n, m_entrada, m_sub, c);
            det += m_entrada[0][c] * pot(-1, c + 2) * calcula_determinante(n - 1, m_sub);
        }
    }
    return det;
}

int main()
{
    // Implementar
    int n;
    scanf("%d", &n);
    float m_ent[n][n];
    float var;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &var);
            m_ent[i][j] = var;
        }
    }
    printf("%.2f\n", calcula_determinante(n, m_ent));
    return 0;
}