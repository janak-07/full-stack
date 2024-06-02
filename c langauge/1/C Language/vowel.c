#include <stdio.h>

int main (){
    char vowel;

    printf("Enter a single character: ");
    scanf("%c",&vowel);

  if (vowel>=65 && vowel<=90){
        printf(" %c is Upper case Character & ",vowel);

        
        if ((vowel=='A')||(vowel=='E')||(vowel=='I')||(vowel=='O')||(vowel=='U')){
          printf("It's vowel ");  
        }else{
            printf("It's Constent ");
        }

  }else if (vowel>=97 && vowel<=119){
        printf("%c is Lower case Character & ",vowel);
    
        if ((vowel=='a')||(vowel=='e')||(vowel=='i')||(vowel=='o')||(vowel=='u')){
          printf("It's vowel ");  
        }else{
            printf("It's Constent ");
        }
        
    }else{
        printf("It's not a Character");
        
    }
    
}




