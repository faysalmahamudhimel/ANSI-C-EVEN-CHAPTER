#include<stdio.h>
int main()
{
    int i,sum=0,count=0;

    for(i=0;i<=100;i++)
    {
        if(i%6==0 && i%4!=0)
          {
              sum=sum+i;
            count++;}
    }
    printf("Sum=%d",sum);
    printf("\nCount=%d",count);
    return 0;
}