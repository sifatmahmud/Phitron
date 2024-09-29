#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // -------- custom logic to concatenate -----------
    // int k = strlen(a);
    // int lenght_b = strlen(b);

    // for (int i = 0; i <= lenght_b; i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }

    // ----------- built in function ------------

    strcat(a, b);
    printf("%s %s", a, b);

    return 0;
}