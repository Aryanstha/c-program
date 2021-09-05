#include <stdio.h>
int main()
{
    int num,i;
    for(num=1;num<=2;num++)
    {
        printf("Multiplication Table of %d\n",num);
        for (i = 1; i <= 10; i++)
             printf("%d*%d=%d\n", num, i, num * i);
    
    }
    return 
