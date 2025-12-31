#include<stdio.h>
int main()
{
    int p,c,m;
    printf("Enter your physics chemistry and mathematics obtain marks in Admission :");
    scanf("%d%d%d",&p,&c,&m);
    if(p>=50 && c>=40 && m>=60 && (p+c+m>=200) || (m+p>=150) )

        printf("Congrats you are eligible for admission  ");
    else
        printf("Sorry you are not eligible for admission  ");

    return 0;
}