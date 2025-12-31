#include<stdio.h>
int main()
{
    int month,days;
    printf("Enter a number of days:");
    scanf("%d",&days);
    month=days/30;
    days=days%30;
    printf("Monts =%d Days=%d",month,days);





    return 0;
}