#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 100000)
    {
        int arr[n];
        long long int sum_pos = 0;
        long long int sum_neg = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 1000 && arr[i] >= -1000)
            {
                if (arr[i] >= 0)
                {
                    sum_pos = sum_pos + arr[i];
                }
                else
                {
                    sum_neg = sum_neg + arr[i];
                }
            }
        }
        printf("%lld %lld", sum_pos, sum_neg);
    }

    return 0;
}