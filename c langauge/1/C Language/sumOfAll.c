#include <stdio.h>

int mySum(int n);


int main() {

    int n,sum;

    printf("Enter any number between 1 to 10: ");
    scanf("%d",&n);

    mySum(n);

}

int mySum(int n){

    int sum = 0;
    for (int i = 1; i <= n ; i++){
        sum += i;
        


    printf("%d \n",i);
        
    }
    printf("%d \n",sum);

       
}