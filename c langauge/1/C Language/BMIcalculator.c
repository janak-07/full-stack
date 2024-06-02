#include <stdio.h>

int main (){

    float height,weight,bmi;

    printf("Enter your height & weight: ");
    scanf("%f %f",&height,&weight);
    
    height= height*0.3048;

    bmi = weight/ (height*height);

    if (bmi<18.5){
        printf("Under weight %f",bmi);
    }else if (bmi>=18.5 && bmi<=24.9){
        printf("Normal weight %f",bmi);
    }else if (bmi>=25 && bmi<=29.9){
        printf("Over weight %f",bmi);
    }else if (bmi>=30){
        printf("Obese  %f",bmi);
    }else{
        printf("Invalide value");
    }
    
    return 0;
}
