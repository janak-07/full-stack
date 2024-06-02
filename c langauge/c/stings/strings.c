#include <stdio.h>
int main()
{
    // string
    printf("hello\n");
    char str1[50] = "Hello world";
    char str2[11] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd', '\0'};
    char myName[50];
    char fullName[30];
    printf("char is %c\n", str1[0]);
    printf("char is %c\n", str1[1]);
    printf("char is %c\n", str1[2]);    
    // printf("enter a string\n");
    // scanf("%s",myName);
    // printf("entered string is %s\n",myName);
    printf("enter your full name\n");
    // gets(fullName);
    fgets(fullName, 30, stdin);
    puts(fullName);

    return 0;
}
