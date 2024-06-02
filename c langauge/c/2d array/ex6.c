#include <stdio.h>

int main()
{

    int firstarr[2][2];
    int secondarr[2][2];
    int thirdarr[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            printf("enter first value %d %d :", i, j);
            scanf("%d", &firstarr[i][j]);
            }
            
        }
         for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            
            printf("%d ", firstarr[i][j]);
            }
            printf("\n");
        }

         for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            printf("enter second value %d %d :", i, j);
            scanf("%d", &secondarr[i][j]);
            }
            
        }
         for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            
            printf("%d ", secondarr[i][j]);
            }
            printf("\n");
        }
          for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
            thirdarr[i][j]=firstarr[i][j]*secondarr[i][j];
             }
        }
         for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t", thirdarr[i][j]);
         }
        printf("\n");
    }

    return 0;
}