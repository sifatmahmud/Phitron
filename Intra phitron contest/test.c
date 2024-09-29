

#include <stdio.h>
#include <limits.h>

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

        // working section
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mx)
            {
                mx = a[i];
            }
        }

        // printing section
        printf("%d\n", mx);
    }

    return 0;
}