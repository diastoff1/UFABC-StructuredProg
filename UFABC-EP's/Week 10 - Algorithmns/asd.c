#include <stdio.h>

void insertion_sort(int n, int vetor[]) {
    int i, j, chave, comparacoes = 0;
    for (i = 1; i < n; i++) {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            vetor[j+1] = vetor[j];
            j--;
            comparacoes++;
        }
        vetor[j+1] = chave;
        for (int k = 0; k < n; k++) {
            printf("%d ", vetor[k]);
        }
        printf("\n");
    }
    printf("%d\n", comparacoes);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    insertion_sort(n, vetor);
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}