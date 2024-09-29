#include <stdio.h>
void fun(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    int x = n % 10;
    fun(n / 10);
    printf("%d ", x);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("%d", 0);
        }

        printf("\n");
    }

    return 0;
}