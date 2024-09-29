#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            // Even
            even++;
        }
        else
        {
            // odd
            odd++;
        }
        if (a > 0)
        {
            // positive
            pos++;
        }
        else if (a < 0)
        {
            // Negative
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d", neg);

    return 0;
}