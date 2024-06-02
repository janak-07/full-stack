#include <stdio.h>

int main (){

    int Price,discount,finalPrice;

    printf("Enter the Price ");
    scanf("%d",&Price);

    if (Price>=0 && Price<=100){
        discount = (Price*5)/100 ;
        finalPrice = Price - discount;
        printf("ifyour Price is %d than %d is your Discount and %d is your final price",Price,discount,finalPrice);
    }else if (Price>=101 && Price<=500){
       discount = (Price*10)/100 ;
       finalPrice = Price - discount;
        printf("ifyour Price is  %d than %d is your Discount and %d is your final price",Price,discount,finalPrice);
    }else{
        discount = (Price*15)/100 ;
        finalPrice = Price - discount;
        printf("ifyour Price is %d than %d is your Discount and %d is your final price",Price,discount,finalPrice);
    }
    
    return 0;

}