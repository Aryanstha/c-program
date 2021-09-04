#include<stdio.h>
#include<conio.h>
        int main(){
      
            int i;
            struct employee
    {
           char name[20];
           char post[15];

     }
           e[5];
           for(i=0;i<5;i++)
            {
              printf("\nEnter Name:");
              scanf("%s",e[i].name);

                printf("Enter Post:");
                scanf("%s",e[i].post);
            }
                  printf("\nName and Post of employee are:");
                  for(i=0;i<5;i++)
                {
                   printf("\nName=%s\tPost=%s",e[i].name,e[i].post);
                }
return 0;
}
