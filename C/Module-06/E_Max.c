#include <stdio.h>

int main()
{
    int number1;
    int numbers;
    int big_number = 0;
    scanf("%d", &number1);
    if (number1 >= 1 && number1 <= 1000)
    {
        for (int i = 1; i <= number1; i++)
        {
            scanf("%d", &numbers);
            if (numbers > big_number)
            {
                big_number = numbers;
            }
        }
        printf("%d", big_number);
    }

    return 0;
}