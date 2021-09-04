#include<stdio.h>
   int main(){
       int num;
     
          printf("Enter a number:");
          scanf("%d",&num);
     
         if(num%2==0)
            printf("%d is Even Number.",num);
        else
            printf("%d is Odd Number.",num);
            
    return 0;
   }
===============================================================================================================================================================================
//even or odd using ternary operator///////
#include<stdio.h>
   int main(){
       int num;
     
          printf("Enter a number:");
          scanf("%d",&num);
     
         (num%2==0) ? 
            printf("%d is Even Number.",num):
            printf("%d is Odd Number.",num);
            
    return 0;
   }
