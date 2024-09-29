#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        // input section
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // sorting section
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }

        // -----------------
        int flag = 0;
        int cm = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == cm)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag)
        {
            printf("%d\n", a[0]);
            continue;
        }

        // printing section
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                continue;
            }
            else
            {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
