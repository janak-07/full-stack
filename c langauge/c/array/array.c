#include<stdio.h>
// wap to find the maximum number in an array
int main (){
 
int arr[4]={8,12,2,6,};
 int max = arr[0];

  int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of arr %d\n",size);

 for (int i = 1; i < size; i++){
    if(arr[i]>max){   
        max=arr[i];  
    }
 }
 
 printf("%d",max);
 
    return 0;

}