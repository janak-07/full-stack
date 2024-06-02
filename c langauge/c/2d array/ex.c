#include <stdio.h>
// Q..wap to find the sum of all the element of a 2d array
int main()
{
    int arr[3][3];

    int sum = 0;
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
             scanf("%d",&arr[i][j]);
        }
     
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
      
    }
      printf("sum is :%d\n", sum);

    return 0;
}