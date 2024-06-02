
#include <stdio.h>
int main()
{
    int first=0  ;
    int second =1;
    int n=10;
    int result;
     for(int i=1;i<=n;i++)
     {
        printf("%d\n",first);
        result=first+second;
        first=second;
        second=result;
     }
  
   return 0;
}