#include <stdlib.h>
// #include "comparar_listas.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode *next;
};

int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2)
{
    LinkedNode *ptr1 = inicio_lista1;
    LinkedNode *ptr2 = inicio_lista2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data != ptr2->data)
            return 0;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if (ptr1 != ptr2)
        return 0;
    return 1;
}