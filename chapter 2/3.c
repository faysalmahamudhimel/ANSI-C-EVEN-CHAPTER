#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d,r1,r2;
    printf("Enter some number to find the distance:");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    r1=(x2-x1);
    r2=(y2-y1);
    d=sqrt((r1*r1)+(r2*r2));
    printf("Distance between two point :%f",d);
    return 0;
}