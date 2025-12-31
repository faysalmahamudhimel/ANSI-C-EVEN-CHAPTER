#include<stdio.h>
int main()
{
   int n,i;
   float  a[100],sum=0;

   printf("Enter a number of n = ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)

{
    scanf("%f",&a[i]);
     sum=sum+a[i]*a[i];

}

printf("Sum=%.2f",sum);



    return 0;

}