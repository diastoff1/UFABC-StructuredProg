/*Considere o superfatorial de um número N como o produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 é:

superfatorial(4) = 1! * 2! * 3! * 4! = 288

Faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial desse número.

A função deve ter o seguinte protótipo:

long superfatorial(int n);*/

#include <stdio.h>

long fatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

long superfatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return fatorial(n) * superfatorial(n - 1);
}