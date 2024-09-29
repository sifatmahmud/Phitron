#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], s2[1000];
    scanf("%s", s);
    strcpy(s2, s);
    int i = 0, j = strlen(s2) - 1;
    while (i < j)
    {
        char temp = s2[i];
        s2[i] = s2[j];
        s2[j] = temp;
        i++;
        j--;
    }
    if (strcmp(s, s2) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}