#include<stdio.h>
#include<conio.h>
    void main()
{
    int num,result=0,q,rem;
    printf("Enter the number:");
    scanf("%d",&num);
    q=num;
    while(q!=0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }
     if(result==num)
     printf("%d is a palindrome number.",num);
     else
     printf("%d is not a palindrome nmber.",num);
getch();
    
}
