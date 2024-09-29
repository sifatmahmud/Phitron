#include <stdio.h>

int sum(int a, int b)
{
    int sum1 = a + b;
    return sum1;
}

int main()
{
    int s = sum(20, 10);
    printf("%d\n", s);
    printf("%d\n", sum(100, 200));
    return 0;
}