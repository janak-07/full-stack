#include <stdio.h>
#include <string.h>
int main()
{
    // string
    printf("hello\n");
    int count = 0;
    int i = 0;
    char fullName[50];
    printf("enter your name\n");
    fgets(fullName, 50, stdin);
    puts(fullName);
    int length = strlen(fullName);
    printf("length is %d\n", length);
    while (i < length - 1)
    {
        count += 1;
        i++;
    }
    printf("count is %d\n", count);

    // char name[7]="sonal";
    // for(int i=0;name[i]!='\0';i++){
    // printf("str at %d is %c\n",i,name[i]);
    // }

    return 0;
}
