#include<stdio.h>
void main()
{
    char of[128],nf[128],fn[128];
    int ch,chk;
    puts("1,File Rename");
    puts("2,Remove File");
    puts("3,Exit");
    printf("Your Choice:");
    scanf("%d",&ch);
    getchar();
    switch(ch)
    {
    case 1:
        printf("Input Old File Name:");
        gets(of);
        printf("Input New File Name:");
        gets(nf);
        chk=rename(of,nf);
        if(chk==0)
            printf("Rename success!\n");
        else
            printf("Rename Unsuccess!\n");
        break;
    case 2:
        printf("To delete,Input file name:");
        gets(fn);
        chk=remove(fn);
        if(chk==0)
            printf("Remove success!\n");
        else
            printf("Remove Unsuccess!\n");
        break;
    case 3:
        puts("Good Bye!!");
        exit(1);
    default:
        puts("Unknown Choice!!");
        puts("Good Bye!!");
    }
}
