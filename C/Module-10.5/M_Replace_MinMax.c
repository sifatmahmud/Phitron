#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 2 && n <= 1000)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        // ---------- getting Minimum and Maximum value,index ------------
        int min = INT_MAX;
        int max = INT_MIN;
        int index_min = 0;
        int index_max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                index_min = i;
            }
            else if (a[i] > max)
            {
                max = a[i];
                index_max = i;
            }
        }

        // ---------- swap minimum to maximum and maximum to minimum valu ------------
        int temp = a[index_min];
        a[index_min] = a[index_max];
        a[index_max] = temp;

        // -------- printing array after swap -----------
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}