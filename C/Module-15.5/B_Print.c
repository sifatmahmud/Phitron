#include <stdio.h>
void printing_num(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printing_num(n);
    return 0;
}