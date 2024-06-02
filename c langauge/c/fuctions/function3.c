//Q..write a function to calculate area of a square, a circle ,a rectangle ?

#include <stdio.h>
float squaerArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{

    float side = 20;
    printf("area is %f\n ", squaerArea(side));

    float rad = 10;
    printf("area is %f\n", circleArea(rad));

    float a = 5;
    float b = 3;
    printf("area is %f\n", rectangleArea(a, b));
    return 0;
}

float squaerArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}