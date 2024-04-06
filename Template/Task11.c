#include <stdio.h>
#include "Tasks.h"

void fcTask11(void)
{
    int size;

    scanf("%d", &size);

    printf("/");
    for(int i = 0; i < size / 2; i++) {
        printf("^");
    }
    printf("\\");

    int sizeDiff = (size / 2 + 2) * 2;
    while(sizeDiff < size * 2) {
        printf("_");
        sizeDiff++;
    }

    printf("/");
    for(int i = 0; i < size / 2; i++) {
        printf("^");
    }
    printf("\\");

    printf("\n");

    for(int i = 0; i < size - 3; i++) {
        printf("|");
        for(int j = 0; j < 2 * size - 2; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    sizeDiff = (size / 2 + 2) * 2;
    printf("|");
    for(int j = 0; j < size - 1 - (size * 2 - sizeDiff) / 2; j++) {
        printf(" ");
    }

    while(sizeDiff < size * 2) {
        printf("_");
        sizeDiff++;
    }
    sizeDiff = (size / 2 + 2) * 2;
    for(int j = 0; j < size - 1 - (size * 2 - sizeDiff) / 2; j++) {
        printf(" ");
    }
    printf("|\n");

    printf("\\");
    for(int i = 0; i < size / 2; i++) {
        printf("_");
    }
    printf("/");

    sizeDiff = (size / 2 + 2) * 2;
    while(sizeDiff < size * 2) {
        printf(" ");
        sizeDiff++;
    }

    printf("\\");
    for(int i = 0; i < size / 2; i++) {
        printf("_");
    }
    printf("/\n");

}
