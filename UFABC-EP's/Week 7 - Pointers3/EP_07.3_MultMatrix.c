#include <stdio.h>
#include <stdlib.h>

int calc(int i, int j, int n_c1, int n_l2,int **m_a, int **m_b){
    int k = 0;
    int var = 0;
    int aux;
    while(k < n_c1){
        aux = m_a[i][k] * m_b[k][j];
        var += aux;
        k++;
    }
    return var;
}

int main(){
    int n_l1, n_c1;
    scanf("%d", &n_l1);
    scanf("%d", &n_c1);

    int **m_a= malloc(sizeof(int*) * n_l1);

    for(int i = 0; i < n_l1; i++){
        *(m_a + i) = malloc(sizeof(int) * n_c1);
        for (int j = 0; j < n_c1; j++){
            scanf("%d", &*(*(m_a + i) + j));
        }
    }

    int n_l2, n_c2;
    scanf("%d", &n_l2);
    scanf("%d", &n_c2);

    int **m_b = malloc(sizeof(int *) * n_l2);
    for(int i = 0; i < n_l2; i++){
        m_b[i] = malloc(sizeof(int) * n_c2);
        for(int j = 0; j < n_c2; j++){
            scanf("%d", &m_b[i][j]);
        }
    }

    for(int i = 0; i < n_l1; i++){
        for (int j = 0; j< n_c2; j++){
            printf("%d ", calc(i,j,n_c1,n_l2,m_a,m_b));
        }
        printf("\n");
    }

    for(int i = 0; i < n_l1; i++){
        free(*(m_a+i));
    }
    for(int i = 0; i < n_l2; i++){
        free(*(m_b+i));
    }

    free(m_b); free(m_a);

    return 0;
}