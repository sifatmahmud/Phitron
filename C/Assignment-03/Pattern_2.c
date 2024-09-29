#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        // ekta line
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = i; j >= k; j--)
        {
            printf("%d", j);
        }
        // line seshe
        s--;
        printf("\n");
    }

    return 0;
}