#include <stdio.h>
#include "Tasks.h"

void fcTask5(void)
{
    int minutes = 0;
    int seconds = 0;

    for(int i = 0; i < 3; i++) {
        int curr;
        scanf("%d", &curr);
        seconds += curr;
        while(seconds >= 60) {
            minutes++;
            seconds -= 60;
        }
    }

    if(seconds >= 10) {
        printf("%d:%d\n", minutes, seconds);
    } else {
        printf("%d:0%d\n", minutes, seconds);
    }
}
