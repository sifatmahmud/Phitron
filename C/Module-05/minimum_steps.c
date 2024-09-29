#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0 && x <= 10000000)
    {
        int a = floor(x / 3);
        int b = (x % 3);
        if (b % 2 == 0)
        {
            int moves = (a + b) - 1;
            printf("%d", moves);
        }
        else
        {
            int moves = a + b;
            printf("%d", moves);
        }
    }
    return 0;
}