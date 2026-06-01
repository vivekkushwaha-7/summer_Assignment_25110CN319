// COUNT DIGITS IN A NUMBER

#include<stdio.h>
 int main()
 {
    int n;
    int count =0;
   
    printf("Enter Number:");
    scanf("%d",&n);


    while (n>0)
    {
n = n/10 ;
count++;

    }

    printf("Digits=%d\n",count);
    return 0;
 }