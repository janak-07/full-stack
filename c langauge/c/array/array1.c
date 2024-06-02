// waf to find the select maximum in an array
#include <stdio.h>

int main()
{

    int arr[6] = {12, 8, 24, 6, 4, 15};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of arr %d\n",size);

    int firstmax = arr[0]; 
    int secondmax = arr[0];



    for (int i = 1; i < size; i++)
    {
        if (arr[i] > firstmax)
        {
            secondmax = firstmax;
            firstmax = arr[i];
        }
        else if (arr[i] > secondmax && arr[i] != firstmax)
        {   
            secondmax = arr[i];
        }
    }
      printf("%d\n""%d",firstmax,secondmax);
 
    return 0;
}