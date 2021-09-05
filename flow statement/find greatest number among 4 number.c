#include<stdio.h> 
        int main() 
 { 
        int a,b,c,d; 
        printf("Enter the Four Numbers :"); 
        scanf("%d %d %d %d",&a,&b,&c,&d); 
        if(a>b) 
         { 
              if(a>c) 
               { 
                  if(a>d) 
                   {   
                      printf("%d greatest number.",a); 
                    } 
                  else 
                   { 
                      printf("%d is greatest number.",d); 
                    } 
                } 
           } 
               else if(b>c) 
                       { 
                            if(b>d) 
                              { 
                                  printf("%d is greatest number.",b); 
                               } 
                             else 
                              { 
                                  printf("%d is greatest number.",d); 
                              } 
                        } 
                else if(c>d) 
                       { 
                              printf("%d is greatest number.",c); 
                        } 
               else 
                { 
                     printf("%d is greatest number.",d); 
                } 
                     return 0; 
 } 
