#include <stdio.h>
//Q..write a program to find if a character  by user is uppercase or not 
int main() {
    char ch;
    
    printf("Enter a character ");
    scanf("%c", &ch);
    
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }
    
    return 0;
}
