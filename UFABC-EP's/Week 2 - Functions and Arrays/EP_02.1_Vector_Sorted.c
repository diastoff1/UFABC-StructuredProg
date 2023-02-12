/*Faça um programa que fique lendo números inteiros positivos:

• Cada número deverá ser inserido ordenado (ordem crescente) em um vetor (assuma que haverá no máximo 100 números).
• Após cada inserção, imprima o vetor completo. O programa encerra quando o usuário digitar o número -1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa).

Exemplo de funcionamento:
Digite: 5
5
Digite: 8
5 8
Digite: 2
2 5 8
Digite: 7
2 5 7 8
Digite: -1
*/

#include <stdio.h>

void sort(int count,int array[]){
    int size = count + 1;
    
    for(int i = 0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(array[j+1]<array[j]){int temp=array[j+1];array[j+1]=array[j];array[j]=temp;}
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){

    int array[100];
    int n;
    int count=0;

    scanf("%d",&n);
    while(n != -1){
        array[count] = n;
        sort(count,array);
        count++;
        scanf("%d",&n);
    }

    return 0;
}