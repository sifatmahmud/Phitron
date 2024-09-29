#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        // ekta line
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        // line seshe
        if (i <= n - 1)
        {
            s--;
            k += 2;
            printf("\n");
        }
        else
        {
            s++;
            k -= 2;
            printf("\n");
        }
    }

    return 0;
}