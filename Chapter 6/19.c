#include<stdio.h>
int main()
{
    char str[100];
    int i,cap=0,small=0;

    gets(str);
    for(i=0;str[i]!='\0';i++)
    {

     if(str[i]>='A' && str[i]<='Z')

        cap++;
        else if(str[i]>='a' && str[i]<='z')
        small++;
}
printf("Capital latter is =%d\n",cap);
printf("\nSmall latter is=%d",small);


return 0;
}