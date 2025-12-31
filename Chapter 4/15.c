#include<stdio.h>
#include<math.h>
int main()
{
  int i;

  for(i=0;i<=100;i+=10)
  {
      printf("%d %.2f %d\n",i,sqrt(i),i*i);

  }

 return 0;
}