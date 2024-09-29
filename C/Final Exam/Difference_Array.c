#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // Copying arra a to aray b
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // sorting array b
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        // difference input in array c
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
        }

        // printing difference array c
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(c[i]));
        }
        printf("\n");
    }

    return 0;
}