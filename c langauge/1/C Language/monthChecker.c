#include <stdio.h>

int main()
{

    int month;

    printf("enter value between 1-12: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:printf("january");
        break;
    case 2:printf("Fabruary");
        break;
    case 3:printf("March");
        break;
    case 4:printf("April");
        break;
    case 5:printf("May");
        break;
    case 6:printf("june");
        break;
    case 7:printf("july");
        break;
    case 8:printf("August");
        break;
    case 9:printf("September");
        break;
    case 10:printf("October");
        break;
    case 11:printf("November");
        break;
    case 12:printf("December");
        break;
    
    default:printf("Invalid Number");
        break;
    }
}
