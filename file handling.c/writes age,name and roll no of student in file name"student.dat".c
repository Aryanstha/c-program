#include <stdio.h>
void main()
{

char nm[20];
int age;
int roll;
FILE *fptr;
//file write
fptr = fopen ("record.dat","w+");

 printf("Enter Name of Student:");
 scanf("%s", &nm);  
  fprintf(fptr, "Name= %s\n", nm);
 printf("Enter age:");
 scanf("%d",&age);
 fprintf(fptr,"Age=%d\n", age);
 
 printf("Enter Roll_no:");
 scanf("%d",&roll);
 fprintf(fptr,"Roll_no=%d\n",roll);

fclose (fptr);
}
