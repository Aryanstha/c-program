#include <stdio.h>
void main()
{
int age;
char nm[20], add[50];
FILE *fp;
//file write
fp = fopen ("record.dat","a");
fprintf (fp, "%s %d %s\n","Gutka",15,"Ratnapark");
fclose (fp);
//file reading
fp = fopen ("record.dat", "r");
while(feof(fp)==0)
{
fscanf (fp, "%s %d %s",&nm,&age,&add);
printf ("Name:%s\n",nm);
printf ("Age:%d\n",age);
printf ("Address:%s\n",add);
}
fclose (fp);
}
