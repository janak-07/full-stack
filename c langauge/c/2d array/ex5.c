// transpose of a  

#include <stdio.h>
int main()
{
    printf("hello");

    int rows = 2;
    int cols = 3;
    int arr[rows][cols];
    int transposeMatrix[cols][rows];

    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter value for %d %d :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // for printing  the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposeMatrix[i][j] = arr[j][i];
        }
    }

    // for printing  the array tranpose
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transposeMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}