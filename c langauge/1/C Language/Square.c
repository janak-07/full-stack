#include <stdio.h>


int areaOfSquare(int side) {
    return side * side;
}

int main() {
    int side, area;

   
    printf("Enter the side length of the square: ");
    scanf("%d", &side);

  
    area = areaOfSquare(side);

    
    printf("The area of the square with side %d is %d\n", side, area);

    return 0;
}
