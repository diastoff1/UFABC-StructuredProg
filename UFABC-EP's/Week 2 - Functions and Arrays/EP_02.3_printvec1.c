/*Implemente a função imprime_vetor, que recebe um vetor de números inteiros. A função deve imprimir o vetor em forma de triângulo. Por exemplo, o vetor 1, 2, 3, 4, 5, 6 seria impresso como:

1
2 3
4 5 6
Observação: há um caractere espaço separando cada número por linha, mas não há um caractere espaço ao final de cada linha (após o último número).

A função deve seguir o seguinte protótipo:

void imprime_vetor(int vetor[], int qtd);
Importante: submeta apenas a função. Não inclua o main.*/

#include <stdio.h>
//#include "imprime_vetor.h"

void imprime_vetor(int vetor[], int qtd) {
    int c1 = 0;
    int c2 = 0;
    int c3 = 2;
    int c4 = 1;
    while (c2<=qtd){
        for(int i=c1;i<=c2;i++){
            if(i!=c2) printf("%d ", vetor[i]);
            else printf("%d", vetor[i]);
        }
        printf("\n");
        c2+=c3;
        c1+=c4;
        c3++;
        c4++;
    }
}
