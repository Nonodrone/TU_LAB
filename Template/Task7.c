#include <stdio.h>
#include "Tasks.h"

void fcTask7(void)
{
    float kilometers;
    float priceTaxi;
    float priceBus = 0;
    float priceTrain = 0;
    char time;

    scanf("%f %c", &kilometers, &time);


    printf("Cheapest is ");

    if(kilometers >= 100) {
        priceTrain = 0.06 * kilometers;
        printf("Train: %f\n", priceTrain);
    }
    else if(kilometers >= 20) {
        priceBus = kilometers * 0.09;
        printf("Bus: %f\n", priceBus);
    } else {
        if(time == 'D') {
            priceTaxi = 0.70 + 0.79 * kilometers;
            printf("Taxi: %f\n", priceTaxi);
        }
        else if(time == 'N') {
            priceTaxi = 0.70 + 0.79 * kilometers;
            printf("Taxi: %f\n", priceTaxi);
        } else {
            printf("Incorrect input! \n");
        }
    }
}
