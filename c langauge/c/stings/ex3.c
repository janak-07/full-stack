#include <stdio.h>
// Q..wap that a string input from the user and manually counts the number of vowels in the string
int countvowels(char str[]);
int main()
{

  char str[] = "my name is janak";
  printf("vowel are :%d", countvowels(str));

  return 0;
}

int countvowels(char str[])
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| 
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
     {
      count++;
    }
  }

  return count;
}
