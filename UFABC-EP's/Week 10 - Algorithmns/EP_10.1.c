#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // imprime o vetor original
    printf("%d", arr[0]);
    for (int k = 1; k < n; k++) {
        printf(" %d", arr[k]);
    }
    printf("\n");

    int i, j, key, comparisons = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            comparisons++;
        }
        arr[j + 1] = key;

        // imprime o vetor após cada iteração do loop mais externo
        printf("%d", arr[0]);
        for (int k = 1; k < n; k++) {
            printf(" %d", arr[k]);
        }
        printf("\n");
    }

    // imprime o vetor ordenado
    printf("%d", arr[0]);
    for (int k = 1; k < n; k++) {
        printf(" %d", arr[k]);
    }
    printf("\n");

    // imprime o número de comparações
    printf("%d\n", comparisons);

    return 0;
}