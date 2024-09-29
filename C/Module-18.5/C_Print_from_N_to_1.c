#include <stdio.h>
int first = 0;
int printing(int n, int i)
{
    if (i == n + 1)
    {
        return 0;
    }

    printing(n, i + 1);
    if (first)
    {
        printf(" ");
    }
    printf("%d", i);
    first = 1;
}
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    printing(n, i);
    return 0;
}