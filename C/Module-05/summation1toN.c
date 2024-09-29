#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n && n <= 1000000000)
    {
        long long int sum = (long long int)n * (n + 1) / 2;
        printf("%lld", sum);
    }
    return 0;
}