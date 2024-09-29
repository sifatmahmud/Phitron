#include <stdio.h>
void sum_func(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d", sum);
}
int main()
{
    sum_func();
    return 0;
}