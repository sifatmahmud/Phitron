#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1000 && n <= 9999)
    {
        int second = floor(n / 10);
        int third = floor(n / 100);
        int fourth = floor(n / 1000);
        printf("%d", n % 10);
        printf("%d", second % 10);
        printf("%d", third % 10);
        printf("%d", fourth % 10);
    }

    return 0;
}