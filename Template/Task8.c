#include <stdio.h>
#include "Tasks.h"

void fcTask8(void)
{
    int poolVolume;
    int hours;

    int tubeDebit1;
    int tubeDebit2;

    scanf("%d %d %d %d", &poolVolume, &hours, &tubeDebit1, &tubeDebit2);

    int waterVolume = tubeDebit1 * hours + tubeDebit2 * hours;

    if(waterVolume > poolVolume) {
        printf("The pool will overflow\n");
    }
    else if(waterVolume == poolVolume) {
        printf("The pool will be full\n");
    } else {
        printf("The pool is has %d litres of water out of available %d\n", waterVolume, poolVolume);
    }
}
