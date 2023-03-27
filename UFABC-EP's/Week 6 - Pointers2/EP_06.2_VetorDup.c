/*Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno). Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v).

Protótipo da função:

int* duplica_impares(int *v, int n_entrada, int *n_retorno);

Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.



Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.

Entrada:

n
elementos do vetor
Saída:

elementos do vetor de entrada
elementos do vetor de retorno*/

#include <stdlib.h>

int *duplica_impares(int *v, int n_entrada, int *n_retorno)
{
    int count = 0;
    for (int i = 0; i < n_entrada; i++)
    {
        count++;
        if (v[i] % 2 != 0)
        {
            count++;
        }
    }

    int *vr = malloc(sizeof(int) * count);
    int j = 0;
    for (int i = 0; i < n_entrada; i++)
    {
        if (*(v + i) % 2 != 0)
        {
            *(vr + j) = *(v + i);
            j++;
            *(vr + j) = *(v + i);
            j++;
        }
        else
        {
            *(vr + j) = *(v + i);
            j++;
        }
    }
    return vr;
}