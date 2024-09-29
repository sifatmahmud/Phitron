#include <stdio.h>

int main()
{
    int n, k, s;
    scanf("%d", &n);
    if (n >= 1 && n <= 99)
    {
        k = 1;
        s = n - 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = s; j >= 1; j--)
            {
                printf(" ");
            }
            s--;
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            k = k + 2;
            printf("\n");
        }
    }

    return 0;
}