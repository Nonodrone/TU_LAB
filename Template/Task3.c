#include <stdio.h>
#include "Tasks.h"

void fcTask3(void)
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 == num2 && num2 == num3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
