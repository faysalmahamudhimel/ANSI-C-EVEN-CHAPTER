#include<stdio.h>
int main()
{
    int units,custnum;
    float charges;
    printf("Enter COUSTOMER NO. and UNIT consumed:");
    scanf("%d%d",&custnum,&units);
    if(units<=200)
    {
        charges=0.5*units;
    }
    else if(units<=400)
    {
        charges=100+0.65*(units-200);
    }
    else if(units<=600)
    {
        charges=230+0.8*(units-400);
    }
    else
    {
        charges=390+1*(units-600);
    }
    printf("Customer No:%d: Charge=%.2f\n",custnum,charges);

    return 0;
}