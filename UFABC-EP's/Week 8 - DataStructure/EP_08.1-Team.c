//#include "estruturas.h"
#include <stdio.h>  
#include <stdlib.h>

struct TimeFutebol{
    char *nome;
    int pontos, gols, vitorias, derrotas, empates;
};

int main() {
    struct TimeFutebol dt;
    dt.nome = malloc(sizeof(char) * 10);
    scanf("%s", dt.nome);
    scanf("%d", &dt.pontos);
    scanf("%d", &dt.gols);
    scanf("%d", &dt.vitorias);
    scanf("%d", &dt.derrotas);
    scanf("%d", &dt.empates);
    imprimir(dt);
    
    return 0;
}