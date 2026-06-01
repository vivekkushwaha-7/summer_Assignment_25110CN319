// MULTIPLICATION TABLE OF A NUMBER
#include<stdio.h>
 int main()
 {
    int n;
    int i;
   
    printf("Enter Number:");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
printf("%d * %d =%d  \n",n,i,n*i);

    }
    return 0;
 }