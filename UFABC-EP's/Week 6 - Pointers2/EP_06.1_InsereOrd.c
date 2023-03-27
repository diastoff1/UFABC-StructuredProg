#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    scanf("%d", &len);
    double *vector = (double*) malloc(len * sizeof(double));
    int count = 0;
    int var = 0;
    scanf("%d", &var);

    while(var != -1){
        vector[count] = (double) var;
        for(int i = 0; i <= count-1;i++){
            for(int j = 0; j <= count-1-i; j++){
                if (vector[j] > vector[j+1]){
                    double temp = vector[j];
                    vector[j] = vector[j+1];
                    vector[j+1] = temp;
                }
            }
        }
        for(int i = 0; i <= count;i++){
            printf("%.1lf ", vector[i]);
        }
        printf("\n");
        scanf("%d", &var);
        count++;
    }
    free(vector);
    return 0;
}