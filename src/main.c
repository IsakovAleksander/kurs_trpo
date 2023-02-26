#include <stdio.h>
#include <stdlib.h>
#include "core.h"
#include "core.c"

int main() {
    int count;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    printf("Enter number of minutes, messages and Gb\n");
    scanf("%d %d %d", &tariff[0].minutes, &tariff[0].messages, &tariff[0].internet);
    count = cheapest(tariff, 4);
    switch(count) {
    case 1:
        printf("The first tariff is the best\n");
        break;
    case 2:
        printf("The second tariff is the best\n");
        break;
    case 3:
        printf("The third tariff is the best\n");
        break;
    }
    return 0;
}


