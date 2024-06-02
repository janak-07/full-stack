#include <stdio.h>
//Q...write a program that promtum the user to enter a string and then prints the string back to the consol using puts
int main() { 
    char input[100];
     
    printf("Enter a string: ");
     
    if (fgets(input, sizeof(input), stdin) != NULL) {
         char length = 0;
        while (input[length] != '\0' && input[length] != '\n') {
            length++;
        }
        if (input[length] == '\n') {
            input[length] = '\0';  
        }
        
       
        puts("You entered:");
        puts(input);
    } else {
       
        printf("Error reading input.\n");
    }

return 0;
}
