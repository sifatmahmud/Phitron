#include <stdio.h>
int printing(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printing(a, n);

    return 0;
}