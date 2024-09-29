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
        }

        if (n % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i -= 2)
            {

                printf("%d ", a[i]);
                if (a[i] >= 1 && a[i] <= 1000)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            for (int i = n - 2; i >= 0; i -= 2)
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}