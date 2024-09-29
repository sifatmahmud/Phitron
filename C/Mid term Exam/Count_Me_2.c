#include <stdio.h>
#include <string.h>

int main()
{
    char input_arr[100000];
    scanf("%s", input_arr);
    char vowels_arr[6] = {'a', 'e', 'i', 'o', 'u'};
    int consonant_count = 0;
    for (int i = 0; i < strlen(input_arr); i++)
    {
        int temp_count = 0;
        for (int j = 0; j < strlen(vowels_arr); j++)
        {
            if (input_arr[i] == vowels_arr[j])
            {
                temp_count++;
            }
        }
        if (temp_count == 0)
        {
            consonant_count++;
        }
    }
    printf("%d", consonant_count);

    return 0;
}