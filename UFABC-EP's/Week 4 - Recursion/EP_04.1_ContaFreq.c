/*Desenvolva uma função recursiva contafreq que recebe dois números naturais e indique a frequência com que o segundo número aparece no primeiro. O segundo número sempre será menor do que 10.

Por exemplo, contafreq(12343, 3) = 2.

A sua função deverá ter o seguinte protótipo:

int contafreq(int num, int digito);*/

// #include "contafreq.h"
#include <stdio.h>

int contafreq(int num, int digito)
{
    if (num == 0)
        return 0;
    else if (num % 10 == digito)
        return 1 + contafreq(num / 10, digito);
    else
        return contafreq(num / 10, digito);
}