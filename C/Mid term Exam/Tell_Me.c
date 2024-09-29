#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 1000)
    {
        for (int j = 0; j < t; j++)
        {
            int n;
            scanf("%d", &n);
            if (n >= 1 && n <= 10000)
            {
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                int x;
                scanf("%d", &x);
                if (x >= 0)
                {
                    int count = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (a[i] == x)
                        {
                            count++;
                        }
                    }
                    if (count > 0)
                    {
                        printf("YES\n");
                    }
                    else
                    {
                        printf("NO\n");
                    }
                }
            }
        }
    }

    return 0;
}