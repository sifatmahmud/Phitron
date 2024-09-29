#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_sum = primary_sum + a[i][j];
            }
            if (i + j == n - 1)
            {
                secondary_sum = secondary_sum + a[i][j];
            }
        }
    }

    int difference = abs(primary_sum - secondary_sum);
    printf("%d", difference);

    return 0;
}