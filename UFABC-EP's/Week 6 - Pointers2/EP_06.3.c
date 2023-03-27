/*Cria uma função que procura um trecho de texto na frase e cria uma nova string com todo o conteúdo da frase a partir do trecho indicado. Por exemplo, para frase="Frase de teste." e trecho="de", a função deve criar uma nova string "de teste.". A função deve retornar NULL se não encontrar o trecho na frase. A função deve retornar uma nova string e não deve alterar o vetor com a frase passada para a função.

A função deve ter o seguinte protótipo:

char* avanca_palavra(char *frase, char *trecho)


Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/fscanf/fprintf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.

Formato do caso de teste: esse é o formato dos casos de teste que aparecem ao avaliar a atividade; não inclua impressão de dados no código, essa impressão é feita automaticamente pelo sistema de correção de acordo com o retorno da função submetida.

Entrada:

frase
trecho
Saída:

frase de entrada
string retornada pela função

Exercício adaptado de Prof. Fernando Teubl - Programação Estruturada 2020*/

#include <stdio.h>
#include <stdlib.h>

char *avanca_palavra(char *frase, char *trecho)
{
    int tam_f = 0, tam_t = 0;
    while (frase[tam_f] != '\0')
    {
        tam_f++;
    }
    while (trecho[tam_t] != '\0')
    {
        tam_t++;
    }
    int i, k = 0, count = 0;
    for (i = 0; i < tam_f; i++)
    {
        if (frase[i] == trecho[k])
        {
            int j = i;
            while (frase[j] == trecho[k])
            {
                j++;
                k++;
                count++;
            }
            if (count == tam_t)
            {
                char *nova_frase = (char *)malloc((tam_f - i + 1) * sizeof(char));
                int m = i;
                int n = 0;
                while (frase[m] != '\0')
                {
                    nova_frase[n] = frase[m];
                    m++;
                    n++;
                }
                nova_frase[n] = '\0';
                return nova_frase;
            }
            count = 0;
            k = 0;
        }
    }
    return NULL;
}

int main()
{
    char *frase = "Qualquer frase alea";
    char *trecho = "ase ale";
    char *resultado = avanca_palavra(frase, trecho);
    printf("frase: %s\n", frase);
    printf("resultado: %s\n", resultado);
    return 0;
}