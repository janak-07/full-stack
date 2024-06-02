#include <stdio.h>

void claculatePrice(float value);

int main()
{
    float value = 100;
    claculatePrice(value);

    return 0;
}
void claculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("final price is :%f", value);
}
