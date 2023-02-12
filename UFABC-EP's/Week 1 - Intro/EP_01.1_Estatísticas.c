/*Faça um programa que leia um inteiro N≥1 da entrada padrão. Na sequência leia N números reais. Seu programa deve imprimir, com duas casas decimais e nessa ordem:

menor valor;
maior valor;
média.
Seu programa não pode armazenar os valores em um vetor!

Exemplos
Entrada:

5
1.2 2.3 3.4 4.5 6.0
Saída:

1.20
6.00
3.48
Exercício de: Prof. Thiago F. Covões - Programação Estruturada - 2019*/

#include <stdio.h>

int main(){

    int n;
    float max;
    float min;
    float med;

    scanf("%d",&n);
    scanf("%f",&max);
    min = max;
    med = max;

    for(int i = 0;i<n-1;i++){
        float var;
        scanf("%f",&var);
        if(var<min)min=var;
        if(var>max)max=var;
        med+=var;
    }
    med/=n;

    printf("%.2f\n%.2f\n%.2f\n",min,max,med);
    return 0;
}