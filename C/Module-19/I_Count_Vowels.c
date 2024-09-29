#include <stdio.h>
#include <string.h>

int vowel = 0;
void fun(char s[], int i, int l)
{

    // Base case
    if (i == l)
    {
        return;
    }
    // -------------------

    if (s[i] == 'a' || s[i] == 'A')
    {
        vowel++;
    }
    else if (s[i] == 'e' || s[i] == 'E')
    {
        vowel++;
    }
    else if (s[i] == 'i' || s[i] == 'I')
    {
        vowel++;
    }
    else if (s[i] == 'o' || s[i] == 'O')
    {
        vowel++;
    }
    else if (s[i] == 'u' || s[i] == 'U')
    {
        vowel++;
    }

    fun(s, i + 1, l);
}
int main()
{
    char s[200];
    fgets(s, 200, stdin);
    fun(s, 0, strlen(s));
    printf("%d", vowel);

    return 0;
}