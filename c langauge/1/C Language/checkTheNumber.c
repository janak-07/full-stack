#include <stdio.h>

int main() {
    int a;

    printf("enter a value that could be positive, Negative or zero: ");
    scanf("%d",&a);

    if (a>0){
        printf("%d Is a Positive Number ",a);

    }else if (a<0){
        printf("%d Is a Negetive Number ",a);

    }else if (a==0){
        printf("%d Is a Null ",a);
    }else{
        printf("It's not a number");
    }
    
    
}