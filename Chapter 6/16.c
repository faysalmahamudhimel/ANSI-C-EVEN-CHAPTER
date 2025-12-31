#include<stdio.h>
int main()
{
    int a,b,c,max,x,y;
    printf("Enter three number for solder angle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        max=a;
        x=b;
        y=c;
    }

    else if(b>a && b>c)
    {
        max=b;
        x=a;
        y=c;
    }
    else{

        max=c;
        x=a;
        y=b;
    }
    if(max*max==x*x+y*y)

        printf("The side from a right angle triangle=%d",max);
    else
        printf("The side do not from right angle triangle");

    return 0;
}