#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
  float r,area,perimeter;
  r=sqrt(4*4+5*5);
  area= pi*r*r;
  perimeter= 2*pi*r;
  printf("\nRadius:%.2f",r);
  printf("\nGiven radius of circle for area:%.2f",area);
  printf("\nGiven radius of circle for perimeter:%.2f",perimeter);



    return 0;
}