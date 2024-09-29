#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10000];
        scanf("%s", s);
        int count_capital = 0;
        int count_smaller = 0;
        int count_digit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                count_capital++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                count_smaller++;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                count_digit++;
            }
        }
        printf("%d %d %d\n", count_capital, count_smaller, count_digit);
    }

    return 0;
}