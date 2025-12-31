#include<stdio.h>
int main ()
{
  int call;
    float bill=250;
    scanf("%d",&call);

    if(call>100)
        bill=bill+(call-100)*1.25;
    else
        printf("\nNothing");
   printf("\nBill=%.2f",bill);
    return 0;
}