#include <stdlib.h>

int *duplica_impares(int *v, int n_entrada, int *n_retorno) {
    int count = 0;
    for (int i = 0; i < n_entrada; i++) {
        count++;
        if (v[i] % 2 != 0) {
            count++;
        }
    }

    int *vr = malloc(sizeof(int) * count);
    int j = 0;
    for(int i = 0; i < n_entrada;i++){
        if(*(v + i) % 2 != 0){
            *(vr + j) = *(v + i);
            j++;
            *(vr + j) = *(v + i);
            j++;
        }
        else{
            *(vr + j) = *(v + i);
            j++;
        }
    }
    return vr;
}