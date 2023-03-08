#include <stdio.h>
#include <stdbool.h>

void readM(int n, int m[][n])
{
    int var;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &var);
            m[i][j] = var;
        }
    }
}

bool verifyM(int n, int m[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int temp = m[i][j];
            for (int k = j; k < n - 1; k++)
            {
                if (temp == m[i][k + 1] && temp != 0)
                    return false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int temp = m[j][i];
            for (int k = j; k < n - 1; k++)
            {
                if (temp == m[k + 1][i] && temp != 0)
                    return false;
            }
        }
    }

    return true;
}

int main()
{
    int n = 9;
    int m[n][n];

    readM(n, m);
    if (verifyM(n, m))
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}