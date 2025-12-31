#include<stdio.h>
int main()
{
    float a,b,c,d,m,n,x1,x2,den;
    printf("Enter some number for a b c d m & n:");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);
    den=a*d-b*c;

    if(den==0)
    {
        printf("No unique solution");

    }
    else{

        x1=(m*d-b*n)/den;

        x2=(n*a-m*c)/den;
    }

    printf("x1=%.2f",x1);
    printf("\nx2=%.2f",x2);

    return 0;
}