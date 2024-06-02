#include <stdio.h>

int main (){

    float f,c ;

    printf("Enter the tempreture in celcius ");
    scanf("%f",&c);

    f = (c*9/5)+32 ;

    printf("tempreture in fahrenheit %f",f);
}