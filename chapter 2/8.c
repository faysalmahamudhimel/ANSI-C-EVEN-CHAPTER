#include<stdio.h>
int main()
{
   float a,b,c,x;
    printf("Enter the given value a,b,c:");
    scanf("%f%f%f",&a,&b,&c);

   if(b-c!=0)
   {x=a/(b-c);
    printf("Result=%.2f",x);
   }
   else{

        printf("it's not possible because nothing can divided by zero");}
    return 0;
}