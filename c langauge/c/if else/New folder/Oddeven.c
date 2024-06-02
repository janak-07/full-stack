#include <stdio.h>

int main(){


// int number;
// printf("enter a number");
// scanf("%d",&number);

// if (number % 2 ==0)
// {
//     printf("even");
// }
// else
// {
//     printf("odd");
// }

int number;
///Q.. write a program to check whether a number is positive,negative and zero
printf("enter number");
scanf("%d",&number);

if ( number>0)
{
    printf("number is positive");
}
else if(number<0){
    printf("number is negative");
}
else{
    printf("number is zero");
}

    return 0;
}