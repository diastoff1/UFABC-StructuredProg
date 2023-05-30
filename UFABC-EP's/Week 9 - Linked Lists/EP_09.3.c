#include <stdlib.h>
//#include "inverter.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

LinkedNode* inverter_lista(LinkedNode *inicio) {
    LinkedNode *ptr1 = inicio;
    LinkedNode *ptr2 = NULL;
    LinkedNode *ptr3 = NULL;

    while (ptr1 != NULL){
        ptr2 = ptr1->next;
        ptr1->next = ptr3;
        ptr3 = ptr1;
        ptr1 = ptr2;
    }

    return ptr3;
}