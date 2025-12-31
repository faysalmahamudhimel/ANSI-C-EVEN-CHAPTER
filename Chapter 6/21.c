#include<stdio.h>
int main()
{
    int num,count,i;
    printf("Enter a number for know prime or not:");
    scanf("%d",&num);

    count=0;

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Number is prime");

    }
    else{
        printf("Number is not prime");
    }

    return 0;
}