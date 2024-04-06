#include <stdio.h>
#include "Tasks.h"

void fcTask12(void)
{
    int size;

    scanf("%d", &size);

    int width =  2 * size - 1;
    int height = 2 * (size - 2) + 1;
    int printType = 0;

    //upper
    for(int j = 0; j < size - 2; j++) {
        for(int i = 0; i < width / 2 - 1; i++) {
            if(printType % 2 == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\\ /");
        for(int i = 0; i < width / 2 - 1; i++) {
            if(printType % 2 == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printType++;
        printf("\n");
    }
    //middle
    for(int i = 0; i < width / 2; i++) {
        printf(" ");
    }
    printf("@\n");

    //lower
    printType = 0;
    for(int j = 0; j < size - 2; j++) {
        for(int i = 0; i < width / 2 - 1; i++) {
            if(printType % 2 == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("/ \\");
        for(int i = 0; i < width / 2 - 1; i++) {
            if(printType % 2 == 0) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printType++;
        printf("\n");
    }

    printf("\n");
}
