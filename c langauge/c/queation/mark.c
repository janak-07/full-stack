#include <stdio.h>

int main()
{
    float physics, chemistry, biology, math, computer;
    float totalmarks, percentage;
    char grade;

    printf("Enter marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks of Biology: ");
    scanf("%f", &biology);

    printf("Enter marks of Math: ");
    scanf("%f", &math);

    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    totalmarks = physics + chemistry + biology + math + computer;
    percentage = (totalmarks / 500) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("Percentage:%f\n", percentage);
    printf("Grade: %c\n", grade);

    // int number;

    // printf("Enter a number: ");
    // scanf("%d", &number);

    
    // if (number % 10 == 0 && number % 4 == 0)
    // {
    //     printf(" is divisible by both 10 and 4.\n");
    // }
    // else
    // {
    //     printf("is not divisible by both 10 and 4.\n");
    // }

    return 0;
}