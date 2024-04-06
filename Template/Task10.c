#include <stdio.h>
#include "Tasks.h"

void fcTask10(void)
{
    int arr[9] = {12, 900, 600, 23, 235, 654, 890, 125, 543};

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    int size = sizeof(arr) / 4;

    for(int i = 0; i < size; i++) {
        if(arr[i] < 200) {
            count1++;
        }
        else if(arr[i] < 400) {
            count2++;
        }
        else if(arr[i] < 600) {
            count3++;
        }
        else if(arr[i] < 800) {
            count4++;
        } else {
            count5++;
        }
    }

    printf("Percent under 200: %2.f%%\n", (float)count1 / (float)size * 100);
    printf("Percent between 200 and 400: %2.f%%\n", (float)count2 / (float)size * 100);
    printf("Percent between 400 and 600: %2.f%%\n", (float)count3 / (float)size * 100);
    printf("Percent between 600 and 800: %2.f%%\n", (float)count4 / (float)size * 100);
    printf("Percent over 800: %2.f%%\n", (float)count5 / (float)size * 100);
}
