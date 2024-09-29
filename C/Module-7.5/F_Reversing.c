#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 1000)
    {
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
            if (ar[i] >= 0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}