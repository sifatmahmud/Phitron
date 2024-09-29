#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        long long int m;
        long long int a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int m1 = a * b * c;
        if (m % m1 == 0)
        {
            printf("%lld\n", m / m1);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}