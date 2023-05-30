//#include "discos.h"
#include <stdio.h>
#include <stdlib.h>

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos) {
    int i = 0;
    for (i; i < n_discos; i++){
        if (novo_disco.velocidade < discos[i].velocidade || (novo_disco.velocidade == discos[i].velocidade && novo_disco.aceleracao < discos[i].aceleracao) || novo_disco.velocidade == discos[i].velocidade && novo_disco.aceleracao == discos[i].aceleracao && novo_disco.autonomia < discos[i].autonomia){            
            break;
        }
    }

    int j = n_discos;
    while (j > i){
        discos[j] = discos[j-1];
        j--;
    }

    discos[i] = novo_disco;
}