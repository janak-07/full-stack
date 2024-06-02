#include <stdio.h>

int main() {
    int first=0;
    int second=1;
    int n,result;

       printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 0; i <=n; i++)
    {
        printf("%d",first);
        result=first + second;
        first = second;
        second=result;


    }
    
}