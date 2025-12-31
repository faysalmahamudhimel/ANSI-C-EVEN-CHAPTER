#include<stdio.h>
int main()
{

   float i,n,sum,term;
   printf("Enter a value for number of n:");
   scanf("%f",&n);

   sum = 0;
   term=1/n;
   for(i=1;i<=n;i++)
   {
       sum=sum+term;
   }

    printf("Sum=%f",sum);

    return 0;
}