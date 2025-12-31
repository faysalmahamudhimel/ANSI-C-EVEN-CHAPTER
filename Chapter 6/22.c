#include<stdio.h>
int main()
{

   int i,num,count=0,n;


   for(n=2;n<=200;n++)
   {
      num=1;

   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           num=0;
           break;
       }}
       if(num)
       {

      count++;
       }
    }
           printf("Total prime number's between 100 to 200=%d",count);
       return 0;
    
    }