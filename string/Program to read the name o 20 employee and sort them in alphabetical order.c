#include<stdio.h>
#include<string.h>
int main()
{
    char nm[100][20];
    char tmp[20];
    int r=20,i,j,m,n,l;

    for(i=0;i<r;i++)
    {
        printf("Input Name of employee:");
        scanf("%s",&nm[i]);
    }
    
    printf("\n\n\nAfter sorting:\n");
    for(m=0;m<r;m++)
    {
        for(n=0;n<r;n++)
        {
            if(strcmp(nm[n-1],nm[n])>0)
            {
                strcpy(tmp,nm[n-1]);
                strcpy(nm[n-1],nm[n]);
                strcpy(nm[n],tmp);
            }
        }
    }
    for(l=0;l<r;l++)
    {
        printf("%s\n",nm[l]);
    }
    return 0;
}
