#include<stdio.h>
int main()
{
    int a,b,c,d;
    float ratio;
    printf("Enter four number to get the ratio:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(c-d!=0)
       {

       ratio=(float)(a-b)/(float)(c-d);
    printf("Ratio=%f",ratio);}
    else{

        printf("Nothing can devide by zero ");

    }

    return 0;

}