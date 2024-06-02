#include <stdio.h>

int main() {
    float area,l,w;

    printf("Enter the Value for Length: \n");
    scanf("%f",&l );
    printf("Enter the Value for Width: \n");
    scanf("%f",&w);

    area = w * l;

    printf("If the Length is %f And width is %f Though area of Rectangle will be %f",l,w,area);
}