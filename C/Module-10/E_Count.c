#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];
    scanf("%s", s);

    int lenght_s = strlen(s);
    int count = 0;
    for (int i = 0; i < lenght_s; i++)
    {
        // printf("%d\n", s[i]-'0');
        count = count + (s[i] - '0');
    }
    printf("%d", count);

    return 0;
}