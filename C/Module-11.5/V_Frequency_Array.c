#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int counting[m + 1];

    for (int i = 0; i < n; i++)
    {
        counting[a[i] + 1]++;
    }

    for (int i = 0; i < m + 1; i++)
    {
        printf("%d\n", counting[i]);
    }

    return 0;
}