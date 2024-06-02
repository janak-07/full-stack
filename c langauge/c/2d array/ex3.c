 // waf to find  the second max of a 2d array
#include <stdio.h>

int main()
{

    int arr[2][2] ;

    int firstmax=0; 
    int secondmax=0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
      printf("enter a value");
      scanf("%d",&arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
      if (arr[i][j] > firstmax)
        {
            secondmax = firstmax;
            firstmax = arr[i][j];
        }
        else if (arr[i][j] > secondmax && arr[i][j] != firstmax)
        {   
            secondmax = arr[i][j];
        }
        }
        
    }
         
      printf("%d\n",secondmax);
 
    return 0;
}
