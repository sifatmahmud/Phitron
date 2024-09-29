#include <stdio.h>

int main()
{
    int x;

    do
    {
        scanf("%d", &x);
        if (x >= 1000 && x <= 9999)
        {
            if (x == 1999)
            {
                printf("Correct\n");
            }
            else
            {
                printf("Wrong\n");
            }
        }
    } while (x != 1999);

    return 0;
}