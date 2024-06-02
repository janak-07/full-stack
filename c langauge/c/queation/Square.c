#include <stdio.h>

int main()
{
  int side1;
  int side2;

  printf("enter the side length of the side1");
  scanf("%d", &side1);

  printf("enter the side length of the side2");
  scanf("%d", &side2);

  int side = side1 + side2;
  printf("%d\n", side);

  return 0;
}