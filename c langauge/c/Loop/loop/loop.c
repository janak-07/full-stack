#include <stdio.h>
int main()
// writ a program the table of two
{
    // for (int i = 1; i <= 10; i++)
    // {
    // printf("%d\n",2*i);
    // }


// Q. write a program to find the sum of first 10 number 
    // int sum =0;
    // for (int i = 1; i <= 10; i++){
    //     sum+=i;
    // }
    //     printf("%d\n", sum);

    int n;
    printf("enter number");
    scanf("%d",&n);

    int sum=0;
    for (int i = 1; i <= n; i++)
    {
    sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}