#include <stdio.h>
int main()
{
   char nm[10][30],post[35],salary[15]
   FILE *fpw;
   fpw = fopen("C:\\employee.dat","w");

   if(fpw == NULL)
   {
      printf("Error");   
      exit(1);             
   }

   printf("Enter name: ");
   scanf("%s",&nm);
   
   printf("Enter post:");
   scanf("%s"&post);
   
   printf("Enter salary:");
   scanf("%s",&salary);

   fprintf(fpw,"%s",nm);
   fprintf(fpw,"%s",post);
   fprintf(fpw,"%s",salary);
   fclose(fpw);

   return 0;
}