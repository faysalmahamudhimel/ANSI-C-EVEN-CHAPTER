#include<stdio.h>
#include<math.h>
int main()
{
    float d1,d2,d,r,area;
    d1=(5-2);
    d2=(6-2);
    d=sqrt((d1*d1)+(d2*d2));
    r=d/2;
    area=3.1416*r*r;
    printf("Area of circle=%.2f",area);
    return 0;

}