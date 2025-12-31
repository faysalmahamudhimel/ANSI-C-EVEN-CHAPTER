#include<stdio.h>
int main()
{
    int i,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,arr[50];

    for(i=0;i<=49;i++)
    {
        scanf("%d",&arr[i]);
        if(0>=i && i<=9)
        {
            c1++;
        }
        else if(10>=i && i<=19)
        {
            c2++;
        }
         else if(20>=i && i<=29)
        {
            c3++;
        }
         else if(30>=i && i<=39)
        {
            c4++;
        } else if(40>=i && i<=49)
        {
            c5++;
        } else if(50>=i && i<=59)
        {
            c6++;
        } else if(60>=i && i<=69)
        {
            c7++;
        } else if(70>=i && i<=79)
        {
            c8++;
        }
         else if(80>=i && i<=89)
        {
            c9++;
        }
         else if(90>=i && i<=99)
        {
            c10++;
        }

    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",c1,c2,c3,c4,c5,c6,c7,c8,c9);
}