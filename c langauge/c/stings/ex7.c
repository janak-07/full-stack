#include <stdio.h>
#include <string.h>
// int main(){
//  printf("hello\n");
//  char name[100];
//  int count=0;
//  printf("enter your name\n");
// //  scanf("%s",name);
// fgets(name,100,stdin);
//  printf("your name is %s\n",name);
// for(int i=0;name[i]!='\0';i++){
//     count++;
//     printf("char val at index %d is %c: \n",i,name[i]);
// }
// printf("value of count is %d\n",count);
// }

// // reversing of arr
// int arr[]={2,5,6,7,8,9};
// int first,second;
// // {8,7,6,5,2}
// int size=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<size/2;i++){
//     first=arr[i];
//     second=arr[size-i-1];
//     arr[i]=second;
//     arr[size-i-1]=first;
// }

// for(int i=0;i<size;i++){
//     printf("value at index %d is %d : \n",i,arr[i]);
// }
// return 0;
// }

// Q..write a function to reveres an arr

void reverse (int arr[],int n);
void printarr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr, 9);
    printarr(arr, 9);
    return 0;
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = arr[i];
        int secondvalue = arr[n - i - 1];
        arr[i] = secondvalue;
        arr[n - i - 1] = firstvalue;
    }
}