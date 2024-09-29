#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] >= 0)
            {
                continue;
            }
                }
        int x;
        int y = 0;
        scanf("%d", &x);
        if (x >= 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    x = a[i];
                    printf("%d", i);
                    break;
                }
                else
                {
                    y += 1;
                    continue;
                }
            }
            if (y == n)
            {
                printf("%d", -1);
            }
        }
    }

    return 0;
}