#include<stdio.h>
int main()
{
    float speed,speed1,meter,second;
    printf("Give the distance in meter: ");
    scanf("%f",&meter);
     printf("\nGive the time in second: ");
      scanf("%f",&second);
     speed1=meter/second;
     speed=speed1*3.6;
     printf("\nspeed =%.2f km/h",speed);
     return 0;

}