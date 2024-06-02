#include <stdint.h>

int main()
{

    int winningNumber = 19;
    int userInput;

    printf("enter any number\n");
    scanf("%d", &userInput);

    if (userInput == winningNumber)
    {
        printf("you win the game give us a party\n");
    }
    else if (userInput > winningNumber)
    {
        printf("too high\n");
    }
    else if (userInput < winningNumber)
    {
        printf("too low\n");
    }
    else
    {
        printf("not a valid number\n");
    }
    return 0;
}