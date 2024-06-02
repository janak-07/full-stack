#include <stdio.h>

int sumTwoNumbers(int a, int b);
int multiplyTwoNumbers(int a, int b);
int main()
{

    int a, b;
    printf("enter a\n");
    scanf("%d", &a);

    printf("enter b\n");
    scanf("%d", &b);

   
    sumTwoNumbers(a, b);

    multiplyTwoNumbers(a, b);
    return 0;
}

int sumTwoNumbers(int a, int b)
{
    int ans = a + b;
    printf("add result %d\n", ans);
    return ans;
}
int multiplyTwoNumbers(int a, int b)
{
    int ans = a * b;
    printf("multiply result %d\n", ans);
}
