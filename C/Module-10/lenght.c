#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    // ------ for loop -----
    // int count = 0;
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // ------- while loop -------
    // int count = 0;
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    // --------- built in function ------

    int st = strlen(a);
    printf("%d\n", st);

    return 0;
}