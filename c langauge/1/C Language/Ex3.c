#include <stdio.h>

int main (){

    int firstAngle , secondAngle , thirdAngle ;

    printf("Enter Frist Angle ") ;
    scanf("%d",&firstAngle) ;
    printf("Enter Second Angle ") ;
    scanf("%d",&secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("your Third Angle is %d" , thirdAngle);

}