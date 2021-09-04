// factorial of number using for loop.
#include <stdio.h>
int main(){
           int i,num,fact=1;
                
                printf("Enter a number:");
                scanf("%d",&num);
                
                for(i=1;i<=num;i++)
                {
                        fact=fact*i;
                }
                printf("Factorial of %d is: %d",num,fact);
        return 0;        
        }
============================================================================================================================
  // factorial of number using while loop.
#include <stdio.h>
          int main(){
                  int i=1,num, fact=1;
                  
                  printf("Enter a number:");
                  scanf("%d",&num);
                  
                  while(i<=num)
                  {
                          fact=fact*i;
                          i++;
                  }
            printf("Factorial of %d is %d.",num,fact);
           return 0;
          }
          
