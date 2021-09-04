#include<stdio.h>
   int main(){
       int a,b, temp;
     
          printf("Enter a 1st number:");
          scanf("%d",&a);
     
             printf("Enter a 2st number:");
             scanf("%d",&b);
     
              printf("\nbefore swapping:%d %d",a,b);
       
       temp = a;
          a = b;
          b = temp;
        
     
     printf("\nafter swapping:%d %d",a,b);
     
   return 0;
  }