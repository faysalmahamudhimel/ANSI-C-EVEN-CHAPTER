#include<stdio.h>
int main()
{
char ch = '\0';
printf("Enter what operation you want(+,-,*,/): ");
scanf("%c",&ch);
    float a,b,s;
    printf("\nEnter two number for those operation :");
    scanf("%f%f",&a,&b);

    switch(ch)
    {
    case '+':
        s=a+b;
        printf("equal is=%f",s);
        break;
    case '-':
        printf("minus=%f",s=a-b);
        break;
        case '*':
        printf("multi=%f",s=a*b);
        break;
        case '/':
            printf("devision=%f",s=a/b);
            break;
        default:
            printf("\nYou enter something wrong ");
            break;
    }
    return 0;
}