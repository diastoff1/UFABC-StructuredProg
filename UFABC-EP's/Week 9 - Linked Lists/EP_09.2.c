#include <stdlib.h>
// #include "lista.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares)
{
    LinkedNode *ptr = inicio;
    *qtd_impares = 0;
    *qtd_pares = 0;
    while (ptr != NULL)
    {
        if ((*ptr).data % 2 == 0)
            *qtd_pares += 1;
        else
            *qtd_impares += 1;
        ptr = ptr->next;
    }
}