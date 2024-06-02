#include <stdio.h>

int main (){

    int income,tax;

    printf("Enter the income ");
    scanf("%d",&income);

    if (income>=0 && income<=10000){
        tax = (income*5)/100 ;
        printf("ifyour income is %d than %d is your tex",income,tax);
    }else if (income>=10001 && income<=20000){
       tax = (income*10)/100 ;
        printf("ifyour income is  %d than %d is your tex",income,tax);
    }else if (income>=20001 && income<=30000){
        tax = (income*15)/100 ;
        printf("ifyour income is %d than %d is your  tex",income,tax); 
    }else{
        tax = (income*20)/100 ;
        printf("ifyour income is %d than %d is your tex",income,tax);
    }
    
    return 0;

}