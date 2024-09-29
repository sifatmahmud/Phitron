#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;
    if (row != col)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else if (i + j == row - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}