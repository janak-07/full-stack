#include <stdio.h>
//Q.. firstnum and secondnum are given and find thirdnum
int main()
{
    int firstarr[3][3];
    int secondarr[3][3];
    int thirdarr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter first value %d %d :", i, j);
            scanf("%d", &firstarr[i][j]);
        }
    }
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ", firstarr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter second value %d %d", i, j);
            scanf("%d", &secondarr[i][j]);
        }
    }
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ", secondarr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            thirdarr[i][j]=firstarr[i][j]+secondarr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", thirdarr[i][j]);
         }
        printf("\n");
    }

    return 0;
}