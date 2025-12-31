//list of 50 students with their annual examination marks
#include <stdio.h>

#define MAXVAL 50
#define COUNTER 11

int main()
{
    float value[MAXVAL];
    int i, low, high;
    int group[COUNTER] = {0};

    for (i = 0; i < MAXVAL; i++)
    {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &value[i]);

        if (value[i] < 0 || value[i] > 100)
        {
            printf("Invalid mark! Enter between 0 and 100\n");
            i--;   // re-enter same index
            continue;
        }

        int index = (int)value[i] / 10;
        group[index]++;
    }

    printf("\nGROUP   RANGE     FREQUENCY\n\n");

    for (i = 0; i < COUNTER; i++)
    {
        low = i * 10;

        if (i == 10)
            high = 100;
        else
            high = low + 9;

        printf("%2d     %3d - %3d       %d\n", i + 1, low, high, group[i]);
    }

    return 0;
}
