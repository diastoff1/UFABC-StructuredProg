/*Implemente um programa que lê um inteiro positivo n, e verifique se n é igual ao produto de 3 números inteiros consecutivos. 
Por exemplo, 120 atende ao critério, pois 4x5x6 = 120. Se atender, imprima "SIM", caso contrário, imprima "NAO" (e coloque uma quebra de linha depois).*/

#include <stdio.h>

int main()
{
    int n;
    int res=0;
    int count=1;
    scanf("%d",&n);

    while(res<=n){
        if(res==n) {
            printf("SIM\n");
            return 0;
        }
        res=count*(count+1)*(count+2);
        count++;
    }
    printf("NAO\n");
    return 0;
}