#include <stdio.h>
     int sum (int number);

    void main()
    {
      int n;

        printf("How many number : ");
        scanf("%d", &n);

       printf("sum the %d numbers is : %d ",n,sum(n));
     }
   int sum(int number){

  int i, add=0;

  for(i=1; i<=number; i++){
    add+=i;
  }
  return add;
}