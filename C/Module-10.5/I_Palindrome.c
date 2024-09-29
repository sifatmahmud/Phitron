#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", &s);

    int s_lenght = strlen(s);
    char s_revers[1000];
    for (int i = 0; i < s_lenght; i++)
    {
        s_revers[i] = s[i];
    }

    printf("%s", s_revers);
    // for (int i = 0, j = s_lenght - 1; i < j; i++, j--)
    // {
    //     char temp = s_revers[i];
    //     s_revers[i] = s_revers[j];
    //     s_revers[j] = temp;
    // }

    // if (s_revers == s)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }

    return 0;
}