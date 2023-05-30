//#include "primos.h"

#include <stdlib.h>
#include <math.h> 

typedef struct ListaNumeros ListaNumeros;
struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros, n_primos;
};

int primo(int n){
    if (n <= 0) return 0;
    int max = sqrt(n);
    for (int i = 2; i <= max; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

void separar_numeros_primos(ListaNumeros *lista) {
    int *index_primos = malloc(sizeof(int) * lista-> n_numeros);
    int k = 0;
    for (int i = 0; i < lista->n_numeros; i++){
        if(primo(lista->numeros[i])){
            index_primos[k] = i;
            k++;
        }
    }
    lista->primos = malloc(sizeof(int) * k);
    for(int i = 0; i < k; i++){
        lista->primos[i] = lista->numeros[index_primos[i]];
    }
    int *numeros2 = malloc(sizeof(int) * (lista->n_numeros) - k);
    int j = 0, l = 0;
    for(int i = 0; i < (lista->n_numeros); i++){
        if(index_primos[j] == i){
            j++;
            continue;
        }
        numeros2[l] = lista->numeros[i];
        l++;
    }
    free(lista->numeros);
    free(index_primos);
    lista->numeros = numeros2;
    lista->n_primos = k;
    lista->n_numeros -= k;
}