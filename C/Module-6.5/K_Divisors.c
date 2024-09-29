#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 10000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}