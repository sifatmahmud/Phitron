#include <stdio.h>

int main()
{
    int i = 10;
    int x = i++;
    printf("%d %d", x, i);
    return 0;
}