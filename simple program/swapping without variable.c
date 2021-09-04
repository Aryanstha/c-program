#include<stdio.h>
   int main(){
       int a,b;
     
          printf("Enter a 1st number:");
          scanf("%d",&a);
     
             printf("Enter a 2st number:");
             scanf("%d",&b);
     
              printf("\nbefore swapping:%d %d",a,b);
      a=a+b;
      b=a-b;
      a=a-b;
        
     printf("\nafter swapping:%d %d",a,b);
     
   return 0;
  }