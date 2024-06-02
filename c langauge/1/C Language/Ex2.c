#include <stdio.h>

int main (){

    float salary,hra,da,ta ;
    
    printf("Enter Base salary ") ;
    scanf("%f",&salary) ;
    printf("Enter Hra ") ;
    scanf("%f",&hra) ;
    printf("Enter Da ");
    scanf("%f",&da);
    printf("Enter Ta ");
    scanf("%f",&ta);



    float grossSalary = salary+(salary* (hra/100))+(salary* (da/100))+(salary* (ta/100)) ;

    printf("Your gross Salary is %f",grossSalary);
    
    return 0;
}