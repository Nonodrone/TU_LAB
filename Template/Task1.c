#include <stdio.h>
#include "Tasks.h"
#include <limits.h>

int evalHigh(int num1, int num2) {
    return num1 >= num2 ? num1 : num2;
}

int evalLow(int num1, int num2) {
    return num1 >= num2 ? num2 : num1;
}

void fcTask1(void) {
    int max = INT_MIN;
    int min = INT_MAX;

    while(1) {
        int current;
        scanf("%d", &current);
        if(current == 0) {
            break;
        }
        max = evalHigh(max, current);
        min = evalLow(min, current);
    }

    printf("Max: %d Min: %d \n", max, min);
}
