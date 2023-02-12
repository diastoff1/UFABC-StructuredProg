/*Implemente a função logaritmo, que recebe um valor x e um valor n. A função deve calcular o valor de ln(x) usando n termos da série Maclaurin, conforme fórmula a seguir. 

O valor de x está na faixa (0, 2]. Nesta fórmula, x deve estar na faixa (-1, +1].

Observação: não utilize math.h e não use vetor.

A função deve seguir o seguinte protótipo:

double logaritmo(double x, int n);
Importante: submeta apenas a função. Não inclua o main, não use printf/puts, math.h e vetor.*/

#include <stdio.h>
//#include "logaritmo.h"

double expo(double x, int exp){
    double res = 1;
    for(int i=0;i<exp;i++){
        res*=x;
    }
    return res;
}

double logaritmo(double x, int n) {
    x = x-1;
    double den = 1;
    double res = 0;
    int exp = 1;
    for(int i=0;i<n;i++){
        res+=((expo(x,exp))/den);
        exp++;
        if(i%2==0)den++;
        else den--; 
        den*=-1;
    }
    return res;
}