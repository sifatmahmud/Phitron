#include <stdio.h>
#include <limits.h>

int mini(int a[], int n)
{
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}

int maxi(int a[], int n)
{
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }
    return maximum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d %d", mini(a, n), maxi(a, n));
    return 0;
}