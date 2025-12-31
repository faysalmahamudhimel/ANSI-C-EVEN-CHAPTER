#include<stdio.h>
int main()
{
    int x;
    printf("Enter an x:");
    scanf("%d",&x);
if(x<0)
    goto negative;
    printf("Your number is positive=%d",x);
     goto end;
negative:

    printf("Your number is negative=%d",x);
end:
    return 0;
}