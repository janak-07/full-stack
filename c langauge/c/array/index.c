#include<stdio.h>
int main(){
    printf("hello\n");
   int arr[5];
int sum=0;
int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
   }
// traversing of array 

for(int i=0;i<size;i++){
 sum=sum+arr[i];
    }
   printf("sum is %d\n",sum);


return 0 ;

}