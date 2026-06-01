// Factorial of a number


#include<stdio.h>
 int main()
 {
    int n;
    int i;
   
    int fact = 1;

   
    printf("Enter Number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact = fact*i;

    }
    printf("Factorial =%d\n",fact);

    return 0;
}