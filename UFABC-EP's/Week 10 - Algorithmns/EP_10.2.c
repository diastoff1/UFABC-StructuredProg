#include <stdio.h>
#include <stdlib.h>

void print(int n, int *v){
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
        if(i != n-1) printf(" ");
    }
    printf("\n");
}

int main(){

    int n, min_ind, count=0;
    scanf("%d", &n);
    int *v = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", (v + i));
    }

    print(n,v);

    for (int i = 0; i < n-1; i++) {
        min_ind = i;
        int j;
        for (j = i+1; j < n; j++) {
            if (v[j] < v[min_ind]) {
                min_ind = j;
            }
        }
        if (min_ind != i) {
            int temp = v[i];
            v[i] = v[min_ind];
            v[min_ind] = temp;
            count++;
        }
        print(n,v);
    }

    print(n,v);

    printf("%d\n",count);

    free(v);

    return 0;
}