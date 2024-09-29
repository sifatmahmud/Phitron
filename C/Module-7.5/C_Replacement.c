#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 2 && n <= 1000)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] >= -100000 && arr[i] <= 100000)
            {
                if (arr[i] > 0)
                {
                    arr[i] = 1;
                    printf("%d ", arr[i]);
                }
                else if (arr[i] < 0)
                {
                    arr[i] = 2;
                    printf("%d ", arr[i]);
                }
                else
                {
                    printf("%d ", arr[i]);
                }
            }
        }
    }

    return 0;
}