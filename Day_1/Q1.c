// SUM OF 1ST N NATURAL NUMBER


#include<stdio.h>
 int main()
 {
    int n;
    int i;
    int sum = 0;

   
    printf("Enter N:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum +i;

    }
    printf("sum =%d",sum);

    return 0;
}