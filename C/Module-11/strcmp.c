#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int valu = strcmp(a, b);
    if (valu < 0)
    {
        printf("A is smaller\n");
    }
    else if (valu > 0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("Same\n");
    }

    return 0;
}