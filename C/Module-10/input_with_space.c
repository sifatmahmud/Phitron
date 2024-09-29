#include <stdio.h>
#include <string.h>

int main()
{
    // ----- gets() ------
    // char a[18];
    // gets(a);
    // printf("%s", a);

    // ----- fgets() ------
    char a[100];
    fgets(a, 19, stdin);
    printf("%s", a);

    return 0;
}