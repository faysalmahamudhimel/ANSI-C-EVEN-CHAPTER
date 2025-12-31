#include<stdio.h>
int main()
{
    int i,count;
    float weight,height;
    count=0;
    printf("\nEnter some weight and height:");

    for(i=1;i<=10;i++)
    {   scanf("%f%f",&weight,&height);
        if(weight<50 && height>170)
            count=count+1;
    }
    printf("\nNumber of boys with weight<50kg");
    printf("\nand height >170cm=%d ",count);
    return 0;
}