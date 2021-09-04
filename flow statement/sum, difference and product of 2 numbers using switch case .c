#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,ch;
    printf("\n Enter 1st Number :");
    scanf("%d",&a);
    printf("\n Enter 2nd Number :");
    scanf("%d",&b);
    printf("\n Enter Your Choice: ( 1. Sum:  2. Difference :  3. Product: ):");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            {
                printf("\n The sum of %d+%d = %d",a,b,a+b);
                break;
            }
            case 2:
            {
                printf("\n The difference of %d-%d = %d",a,b,a-b);
                break;
            }
            case 3:
            {
                printf("\n The product of %d*%d= %d",a,b,a*b);
                break;
            }
            default:
            {
                printf("\n out of range");
            }
    }
    return 0;
}
