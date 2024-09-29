#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int first = x;
    while (first >= 10)
    {
        int ans = first / 10;
        first = ans;
    }
    printf("%d", first);
    return 0;
}