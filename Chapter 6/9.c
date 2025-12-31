#include<stdio.h>
int main()
{
    int i,sum=0,count=0;
    for(i=101;i<200;i++)
    {

        if(i%7==0)
        {  count++;
            sum=sum+i;
        }

    }
    printf("Count=%d",count);
 printf("Sum=%d",sum);
return 0;
}