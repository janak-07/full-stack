#include <stdio.h>

// Q..write a program the factorial of a number ?
int main()
{

    // int factorial;

    // printf("enter number ");
    // scanf("%d", &factorial);
    // int sum = 1;
    // for (int i = 1; i <= factorial; i++)
    // {

    //     sum = sum * i;
    // }
    // printf("%d", sum);

    int factorial;
    printf("enter number");
    scanf("%d", &factorial);
    int sum = 1;
    for (int i = 1; i <= factorial; i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);

    return 0;
}
