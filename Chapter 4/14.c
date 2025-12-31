#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    int x;
    for(x=0;x<=180;x+=15)
    {
        printf("%d %.2f %.2f\n",x,sin(x*pi/180),cos(x*pi/180));
    }
    return 0;
}