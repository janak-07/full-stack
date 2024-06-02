#include <stdio.h>
//wap to find the greatest of 3 number you have to take us the 3 number form user input
int main()
{
    int a;
    int b;
    int c;

    printf("enter value");
    scanf("%d", &a);

    printf("enter value");
    scanf("%d", &b);

    printf("enter value");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is big");
    }
    else if (b > a && b > c)
    {
        printf("b is big");
    }
    else
    {
        printf("c is big");
    }



 return 0;
}