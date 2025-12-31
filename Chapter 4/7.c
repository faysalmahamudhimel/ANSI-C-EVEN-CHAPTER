#include<stdio.h>
int main()

{
    float n,i,sum=0;
    printf("Enter a number of n:");
    scanf("%f",&n);

    for(i=1;i<=n;++i)
    {
        sum=sum+1/(float)i;
        printf("%.0f Sum=%.4f\n",i,sum);

    }


    return 0;
}