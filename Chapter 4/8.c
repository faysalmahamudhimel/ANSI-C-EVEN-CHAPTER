#define BASE 1500
#define BONUS_RATE 200
#define COMMISSION 0.02
#include<stdio.h>
int main()
{
    float salary,quantity,price,bonus,commission;
    printf("Input number sold and price\n");
    scanf("%f %f",&quantity,&price);
    bonus=BONUS_RATE*quantity;
    commission=COMMISSION*quantity*price;
    salary=BASE+bonus+commission;
    printf("\n");
    printf("Bonus=%.2f\n",bonus);
    printf("Commission=%.2f\n",commission);
    printf("Salary=%.2f\n",salary);

    return 0;
}