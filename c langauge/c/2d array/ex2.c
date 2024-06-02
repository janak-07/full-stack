#include <stdio.h>
//Q.... wap to find min of 2d array
int main (){
 
int arr[2][2];
 int min = arr[0][0];

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter a value %d %d",i,j);
        scanf("%d",&arr[i][j]);
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        if(arr[i][j]<min){
        min=arr[i][j];  
    }
    }
    
}
 printf("%d",min);

    return 0;

}