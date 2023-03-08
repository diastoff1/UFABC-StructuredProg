// #include "dec2bin.h"
#include <stdio.h>

/*Desenvolva uma função recursiva para converter um número natural em base decimal para base binária. A função deve ter o seguinte protótipo:

    int dec2bin(int n_decimal);
Importante: submeta apenas a função dec2bin. Não use variáveis globais. Não inclua o main e não use printf/puts nas funções submetidas.*/

int dec2bin(int n_decimal)
{
    if (n_decimal == 0)
        return 0;
    else
        return (n_decimal % 2) + 10 * (dec2bin(n_decimal / 2));
}