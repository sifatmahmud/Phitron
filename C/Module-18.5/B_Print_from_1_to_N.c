#include <stdio.h>

int printing(int n, int i)
{
    if (i == n + 1)
    {
        return 0;
    }

    printf("%d\n", i);
    printing(n, i + 1);
}
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    printing(n, i);
    return 0;
}