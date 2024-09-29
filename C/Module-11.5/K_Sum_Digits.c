#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 1000000)
    {
        char a[n];
        scanf("%s", a);

        int sum = 0;
        for (int i = 0; i < strlen(a); i++)
        {
            if ((a[i] - 48) >= 0 && (a[i] - 48) <= 9)
            {
                sum = sum + (a[i] - 48);
            }
        }
        printf("%d", sum);
    }

    return 0;
}