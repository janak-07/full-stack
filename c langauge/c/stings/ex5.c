#include <stdio.h>
// Q..wap that takes a string input from the user and manually copies it to  another string
int main() {
   
    char input[100];
    
 
    printf("Enter a string: ");
    
   
    fgets(input, sizeof(input), stdin);
    
    
    int length = 0;
    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }
    if (input[length] == '\n') {
        input[length] = '\0';
    }

    
    char copiedString[100];
    
   
    for (int i = 0; i <= length; ++i) {
        copiedString[i] = input[i];
    }
    
     printf("Copied string: %s\n", copiedString);
return 0;
}