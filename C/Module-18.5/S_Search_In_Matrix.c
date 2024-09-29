#include <stdio.h>

int main()
{
    // input section
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    // ------------------------------------

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == a[i][j])
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}