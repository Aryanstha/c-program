#include<stdio.h>
#include<string.h>
int main()
{
    char nm[100][20];
    char tmp[20];
    int r,i,j,m,n,l;
    printf("How many records?\n");
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {
        printf("Input Name:");
        scanf("%s",&nm[i]);
    }
    printf("\n\n\nWithout sorting:\n");
    for(j=0;j<r;j++)
    {
        printf("%s\n",nm[j]);
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
