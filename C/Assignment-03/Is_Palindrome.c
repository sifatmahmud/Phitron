#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int string_len = strlen(s);
    char s2[1000];
    int j = string_len - 1;
    for (int i = 0; i < string_len; i++)
    {
        s2[i] = s[j];
        j--;
    }
    // ------------------ compare -----------------
    int count = 0;
    for (int i = 0; i < string_len; i++)
    {
        if (s[i] == s2[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }

    if (count == string_len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[1000];
    scanf("%s", s);
    int return_function = is_palindrome(s);
    if (return_function == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}