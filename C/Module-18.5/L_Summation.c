#include <stdio.h>
long long int sum = 0;
long long int summation(int a[], int n, int i)
{
    if (i == n)
    {
        return sum;
    }

    sum = sum + a[i];
    summation(a, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int final_sum = summation(a, n, 0);
    printf("%lld", final_sum);

    return 0;
}