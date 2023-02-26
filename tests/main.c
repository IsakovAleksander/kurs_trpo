#include "../src/core.h"

#include <assert.h>
#include <stdio.h>

int main() {
    int count;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    tariff[0].minutes = 430;
    tariff[0].messages = 500;
    tariff[0].internet = 50;
    assert(non_negative_diff(1, 2) == 0);
    assert(calc_cost(tariff[1], tariff[0]) == 300);
    assert(calc_cost(tariff[2], tariff[0]) == 1650);
    assert(calc_cost(tariff[3], tariff[0]) == 10950);
    printf("tests done\n");
    return 0;
}


