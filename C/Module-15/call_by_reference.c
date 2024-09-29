#include <stdio.h>
void fun(int *p)
{
    // *p = 50;
    // printf("p er value - %p\n", p);
    printf("main x er value - %d\n", *p);
}
int main()
{
    int x = 100;
    printf("x er address - %p\n", &x);
    fun(&x);
    printf("x er value - %d\n", x);
    return 0;
}