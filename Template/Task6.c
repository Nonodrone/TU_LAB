#include <stdio.h>
#include "Tasks.h"

// raboti samo v sluchai che stranite sa usporedni na abcisata i ordinatata
void fcTask6(void)
{
    float x1, y1, x2, y2, x, y;

    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x, &y);

    while(x1 > x2 || y1 > y2) {
        printf("Incorrect input!");
        scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x, &y);
    }

    if((x > x1 && x < x2) && (y > y1 && y < y2)) {
        printf("Inside \n");
    } else {
        printf("Outside \n");
    }
}
