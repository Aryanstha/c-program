#include<stdio.h>
    int main(){
            int num, factor=0;
            
            printf("Enter a number:");
            scanf("%d",&num);
            
            for(int i=1;i<=num;i++)
            {
                    if(num%i==0)
                    {
                            factor++;
                    }
            }
              if(factor==2)
                 printf("%d is prime number.",num);
              else
                 printf("%d is composite number.",num);
        return 0;         
    }
