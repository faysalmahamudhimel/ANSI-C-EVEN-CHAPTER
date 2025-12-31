#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char month[12][20]={"january","february","march","april","may","june","july","august","september","october","november","december"};
    int i;


    printf("Enter month value:");
    scanf("%d",i);


    if(i<1 || i>12)
    {
       printf("Incorrect value!!\n\n press any key to terminate the program");
       getch();
       exit(0);
    }
    if(12!=0)
    {

        printf("\n%s follow by %s",month[i-1],month[i]);

    }
    else{
        printf("\n%s follow by %s",month[i-1],month[0]);
        getch();
    }

    return 0;
}