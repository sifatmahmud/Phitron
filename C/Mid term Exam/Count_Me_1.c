#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int repeat_2 = 0;
    int repeat_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            repeat_2++;
        }
        else if (a[i] % 2 == 0)
        {
            repeat_2++;
        }
        else if (a[i] % 3 == 0)
        {
            repeat_3++;
        }
    }
    printf("%d %d", repeat_2, repeat_3);

    return 0;
}