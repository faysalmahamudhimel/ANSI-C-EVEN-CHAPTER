#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d;
    printf("Enter variable a,b&c=");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0 && b==0)
        printf("No Soluation");
    else if(a==0)
    {
        x1=(-c/b);
        printf("There is only one root=%.2f",x1);
    }
    else if(d<0)

    {
        printf("There are no real root");
    }
    else
    {
        x1=-b+sqrt(d)/2*a;
         x1=-b-sqrt(d)/2*a;


         printf("\nx1=%.2f",x1);
         printf("\nx2=%.2f",x2);

    }

    return 0;



}