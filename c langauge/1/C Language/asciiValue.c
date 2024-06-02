#include <stdio.h>

int main (){
    char ascii;

    printf("Enter any Single Character");
    scanf("%c",&ascii);

    if (ascii>=65 && ascii<=90){
        printf(" %c is a Upper case Character",ascii);
    }else if (ascii>=97 && ascii<=119){
        printf("%c is the Lower case Character",ascii);
    }else{
        printf("It's not a character ");
    }
    
    

}