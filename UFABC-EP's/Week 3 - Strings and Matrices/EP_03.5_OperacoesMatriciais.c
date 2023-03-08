/*Faça uma calculadora com Operações Matriciais
PESO DA QUESTÃO: 2

Implemente as seguintes operações:
Soma
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
A soma é realizada diretamente elemento a elemento.
Transposta
A função recebe uma matriz a e retorna uma matriz resp com a resposta.
Concatenação Horizontal e Vertical
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
A concatenação horizontal copia a matriz a e junta com a matriz b em sua direita.
A concatenação vertical copia a matriz a e junta com a matriz b logo abaixo.
Multiplicação
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
Lembre-se: Multiplicação de matrizes não é elemento à elemento como na soma.
Detalhes de implementação
Considere que ambas as matrizes a e b tenham a mesmas dimensões, definida pelos parâmetros n_linhas e n_colunas da função.
Não é preciso informar a dimensão resultante da matriz resp.
Considere que todas as matrizes já tenham as dimensões necessárias para todas as operações.
MAX_LINHAS e MAX_COLUNAS são constantes (no caso, ambas valem 50).*/

// #include "stdio.h"

#include <stdio.h>

void soma(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao soma da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposta(int m[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para a matrizes "a".
    //   "n_linhas" - quantidade de colunas a ambas matrizes "a".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de matriz transposta de "a" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[j][i] = m[i][j];
        }
    }
}

void concatena_horizontal(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de concatenacao horizontal da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = n_colunas; j < n_colunas * 2; j++)
        {
            resp[i][j] = b[i][j - n_colunas];
        }
    }
}

void concatena_vertical(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de concatenacao vertical da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j];
        }
    }

    for (int i = n_linhas; i < n_linhas * 2; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = b[i - n_linhas][j];
        }
    }
}

void multiplicacao(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de multiplicacao das matrizes "a" * "b" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            for (int k = 0; k < n_colunas; k++)
            {
                resp[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
