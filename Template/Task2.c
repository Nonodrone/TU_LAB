#include <stdio.h>
#include "Tasks.h"

void fcTask2(void)
{
    int hour;
    int minutes;
    scanf("%d %d", &hour, &minutes);

    if(minutes + 15 >= 60) {
        if(minutes + 15 - 60 >= 10) {
            printf("%d:%d\n", hour + 1, minutes + 15 - 60);
        } else {
            printf("%d:0%d\n", hour + 1, minutes + 15 - 60);
        }
    } else {
        printf("%d:%d\n", hour, minutes + 15);
    }

}
