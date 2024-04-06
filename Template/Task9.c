#include <stdio.h>
#include "Tasks.h"

void fcTask9(void)
{
    float quadrature;
    float quadratureToKg;
    float litresForSale;

    scanf("%f %f %f", &quadrature, &quadratureToKg, &litresForSale);

    float kgGrape = 0.4 * quadrature * quadratureToKg;
    float litreWine = kgGrape / 2.5;

    printf("Total possible litres: %f\n", litreWine);

    if(litreWine > litresForSale) {
        printf("Wine left for workers %f\n");
    }
    else if(litreWine < litresForSale) {
        printf("Missing %f litres of wine\n", litresForSale - litreWine);
    } else {
        printf("Wine will be just enough\n");
    }
}
