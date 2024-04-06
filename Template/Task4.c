#include <stdio.h>
#include "Tasks.h"

void fcTask4(void)
{
    int num;
    scanf("%d", &num);

    float bonus = 0;

    if(num % 10 == 5) {
        bonus += 2;
    }
    if(num % 2 == 0) {
        bonus += 1;
    }
    if(num <= 100) {
        bonus +=5;
    }
    else if(num > 1000) {
        bonus += 0.1 * num;
    }
    else if(num > 100) {
        bonus += 0.2 * num;
    }

    printf("%f\n", bonus);
    printf("%f\n", num + bonus);
}
