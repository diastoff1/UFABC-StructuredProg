/*Faça um programa que leia um inteiro N da entrada padrão. Na sequência leia N números inteiros e imprima SIM se os números estão em ordem crescente e NAO caso contrário. Você não deve utilizar vetores para resolver esse exercício.

Obs: não esqueça de imprimir a quebra de linha após o SIM e NÃO.

ENTRADA	SAÍDA
4	SIM
1 3 7 9	 
ENTRADA	SAÍDA
4	NAO
1 8 7 9	 

Exercício de: Prof. Thiago F. Covões - Programação Estruturada - 2019*/

#include <stdio.h>

int main(){
    int n;
    int min;
    scanf("%d",&n);
    scanf("%d",&min);

    for(int i=0;i<n-1;i++){
        int var;
        scanf("%d",&var);
        if(var<min){
            printf("NAO\n");
            return 0;
        }
        min = var;
    }

    printf("SIM\n");
    return 0;
}