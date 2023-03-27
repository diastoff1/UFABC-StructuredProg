#include <stdio.h>
#include <stdlib.h>

char *avanca_palavra(char *frase, char *trecho) {
    int tam_f = 0, tam_t = 0;
    while(frase[tam_f] != '\0'){
        tam_f++;
    }
    while(trecho[tam_t] != '\0'){
        tam_t++;
    }
    int i, k = 0, count = 0;
    for(i = 0; i < tam_f;i++){
        if(frase[i] == trecho[k]){
            int j = i;
            while (frase[j] == trecho[k]){
                j++;
                k++;
                count++;
            }
             if (count == tam_t){
                char *nova_frase = (char*) malloc((tam_f - i + 1) * sizeof(char));
                int m = i;
                int n = 0;
                while(frase[m] != '\0'){
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

int main(){
    char* frase = "Qualquer frase alea";
    char* trecho = "ase ale";
    char* resultado = avanca_palavra(frase, trecho);
    printf("frase: %s\n", frase);
    printf("resultado: %s\n", resultado);
    return 0;
}