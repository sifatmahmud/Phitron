#include <stdio.h>

int main()
{
    // ----- for input of array 01 -------
    int arr1_n;
    scanf("%d", &arr1_n);
    int arr1[arr1_n];
    for (int i = 0; i < arr1_n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // ----- for input of array 02 -------
    int arr2_n;
    scanf("%d", &arr2_n);
    int arr2[arr2_n];
    for (int i = 0; i < arr2_n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // ----- for arr_ans -------

    int arr_ans[arr1_n + arr2_n];

    // -------- copying first array -------
    for (int i = 0; i < arr1_n; i++)
    {
        arr_ans[i] = arr1[i];
    }

    // ------ copying 2nd array --------

    int i = arr1_n;
    for (int j = 0; j < arr2_n; j++)
    {
        arr_ans[i] = arr2[j];
        i++;
    }

    // ------- print answer array -------
    for (int i = 0; i < arr1_n + arr2_n; i++)
    {
        printf("%d ", arr_ans[i]);
    }

    return 0;
}
