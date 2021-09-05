#include<stdio.h>
#include<conio.h>
int recursion(int a)
{
    if(a==0)
        return 1;
    return (a*recursion(a-1));
}
void main()
{
    int i,j;
    printf("Enter number for factorial:");
    scanf("%d",&i);
    j=recursion(i);
    printf("Factorial Number:%d\n",j);

}
