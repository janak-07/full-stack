#include <stdio.h>
#include <math.h>

float areaOfCircle (float r,float pie);

int main (){

    float r;
    float pie=3.14159;

printf("Enter the Value of r: \n");
scanf("%f",&r);

areaOfCircle (r,pie);

}

float areaOfCircle (float r,float pie){

    float area = pie * pow(r,2);

    printf("If the redius of circle is %f though %f will be the area of the circle ",r,area);

}

