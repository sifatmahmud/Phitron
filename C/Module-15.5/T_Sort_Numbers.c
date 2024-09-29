#include <stdio.h>

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d ", &a[i]);
    }

    int a1 = a[0];
    int a2 = a[1];
    int a3 = a[2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n%d\n%d\n%d", a1, a2, a3);

    return 0;
}