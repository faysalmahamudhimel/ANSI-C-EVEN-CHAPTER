#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter day month and year:");
    scanf("%d%d%d",&d,&m,&y);
    if(d>=1 && d<=31 && m>=1 && m<=12 && y>0)
    printf("Valide");
        else
        printf("Invalide");

    return 0;
}