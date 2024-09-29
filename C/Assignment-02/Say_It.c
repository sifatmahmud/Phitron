#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d. I Want More Assignments\n", i + 1);
        }
    }

    return 0;
}