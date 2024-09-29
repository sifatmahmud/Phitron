#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    scanf("%s\n%s", s, t);
    int lenght_s = strlen(s);
    int lenght_t = strlen(t);
    printf("%d %d\n", lenght_s, lenght_t);
    printf("%s %s", s, t);
    return 0;
}