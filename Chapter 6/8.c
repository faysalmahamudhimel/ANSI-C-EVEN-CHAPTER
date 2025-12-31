#include<stdio.h>
int main()
{
    int x;
    printf("Enter an number for cheek this number is even or odd: ");
    scanf("%d",&x);
    if(x%2==0)
        printf("the number is even");
    else
        printf("The number is odd");
    return 0;
}