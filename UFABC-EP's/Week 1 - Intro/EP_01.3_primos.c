/*
Recebendo como entrada dois valores inteiros, calcular a quantidade de números primos entre esses dois valores (incluindo eles).

Lembre-se, o número 2 é primo!
*/

#include <stdio.h>
#include<stdbool.h>

bool primo(int n){
    if(n <= 1) return false;

    for(int i=2;i<n;i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){

    int count=0;
    int start;
    int end;
    scanf("%d",&start);
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        if(primo(i))count++;
    }

    printf("%d",count);

    return 0;
}