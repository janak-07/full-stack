// #include <stdio.h>
// //
// int main()
// {
//     char ch;

//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//     {
//         printf("%c is a vowel.\n", ch);
//     }
//     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("%c is a consonant.\n", ch);
//     }
//     else
//     {
//         printf("%c is not a valid alphabet.\n", ch);
//     }

//     return 0;
// }

#include <stdio.h>

 

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the entered character is a letter
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        // Call the isVowel function to check if it's a vowel
        if (isVowel(character))
            printf("%c is a vowel.\n", character);
        else
            printf("%c is a consonant.\n", character);
    }
    else
    {
        printf("Invalid input. Please enter a valid alphabet character.\n");
    }

    return 0;
}
