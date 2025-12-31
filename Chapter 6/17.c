#include<stdio.h>
int main()
{
    char name[20];
    int unite;
    float bill=0;
    scanf("%s",name);
    scanf("%d",&unite);

    if(unite<=200)
    {
        bill=unite*0.8;
    }
   else if(unite<=300)
    bill=unite*0.8+(unite-200)*0.9;

    else
        bill=unite*0.8+100*0.9+(unite-300);
    if(unite<100)
        bill=100;
    if(bill>400)
        bill=bill+bill*0.15;
    printf("Name:%s \nBill=%.2f",name,bill);
    return 0;
}