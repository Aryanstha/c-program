#include <stdio.h>  
int main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Welcome to Nepal.\n");//writing data into file  
   fclose(fp);//fclose will close the file.
   return 0;
} 
