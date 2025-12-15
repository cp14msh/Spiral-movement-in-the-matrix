#include <stdio.h>

int main()
{
    int rowsa, colsa;
    scanf("%d %d", &rowsa, &colsa);
    int matrixA[rowsa][colsa];

    for (int i = 0; i < rowsa; i++)
    {
        for (int j = 0; j < colsa; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    int spiral[rowsa * colsa];
    int index = 0;

    int top = 0, bottom = rowsa - 1;
    int left = 0, right = colsa - 1;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            spiral[index++] = matrixA[top][j];
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            spiral[index++] = matrixA[i][right];
        }
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                spiral[index++] = matrixA[bottom][j];
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                spiral[index++] = matrixA[i][left];
            }
            left++;
        }
    }

    for (int i = 0; i < rowsa * colsa; i++)
    {
        printf("%d", spiral[i]);
        if (i < rowsa * colsa - 1)
            printf(" ");
    }
    printf("\n");

    for (int i = 0; i < rowsa * colsa; i++)
    {
        if (spiral[i] % 2 == 0)
        {
            printf("#");
        }
        else
        {
            printf("*");
        }
        if (i < rowsa * colsa - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}