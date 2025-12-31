#define N 100
#define A 2
#include<stdio.h>
int main()
{
  int a;
  a=A;
  while(a<N)
  {
      printf("%d\n",a);
      a=a*a;
  }
  return 0;
}