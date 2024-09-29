#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        long long int a[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            sum = sum + a[i];
        }
        if (sum < 0)
        {
            sum *= -1;
        }
        printf("%lld", sum);
    }

    return 0;
}