#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], result[3][3],sum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr2[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += arr1[k][j]*arr2[j][i];
            }
            result[k][i] = sum; 
        }
    }
    
    printf("\nResultant matrix: \n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}