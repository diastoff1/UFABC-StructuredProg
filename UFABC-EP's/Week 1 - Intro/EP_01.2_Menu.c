/*Faça um programa conforme descrito a seguir:

 1.    Leia um código de operação:

·         1: soma dois números (a + b)

·         2: soma três números (a + b + c)

·         3: multiplicação de dois números (a * b)

·         0: sair

2.    Se o usuário digitar a operação sair, o programa mostra o menor resultado obtido e encerra;

3.    Caso contrário, solicitará a entrada dos números (a e b ou a, b e  c) e imprimirá o resultado da operação (soma ou multiplicação); Após isso, o programa volta ao item 1 (ler código de operação).

Observação: inclua uma quebra de linha após a impressão do resultado.

Exemplo 1:

Entrada

Saída

1

300

207

0

507

507

 

Exemplo 2:

Entrada

Saída

1

-2

1

3

2

90

2

80

2

5

0

-1

180

87

-1

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int var;
    scanf("%d",&var);
    int *min= malloc(sizeof(int));
    int count=0;

    while(var != 0){
        int a;
        int b;
        int c;
        int res;
        if (var == 1){
            scanf("%d",&a);
            scanf("%d",&b); 
            res = a+b;   
        }
        if (var == 2){
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
            res = a+b+c;
        }
        if (var == 3){
            scanf("%d",&a);
            scanf("%d",&b);
            res = a*b;
        }
        if(count ==0){*min=res;count++;}
        if(res<*min)*min=res;

        printf("%d\n",res);
        scanf("%d",&var);
    }

    printf("%d",*min);

    return 0;
}
