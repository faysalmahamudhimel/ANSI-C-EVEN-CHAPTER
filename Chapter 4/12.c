#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three number to find the biggest one:");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",(a>b && a>c)?a:(b>c?b:c));
    return 0;
}