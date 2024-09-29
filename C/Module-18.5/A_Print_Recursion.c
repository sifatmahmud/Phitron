#include <stdio.h>

int printing(int n, int i)
{
    if (i == n)
    {
        return 0;
    }

    printf("I love Recursion\n");
    printing(n, i + 1);
}
int main()
{
    int n, i = 0;
    scanf("%d", &n);
    printing(n, i);
    return 0;
}