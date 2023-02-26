#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "core.h"
#include "core.c"

int main(){
    int count;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    srand(time(NULL));
    tariff[0].minutes = rand() % 501;
    tariff[0].messages = rand() % 501;
    tariff[0].internet = rand() % 51;
    assert(non_negative_diff(1, 2);
    assrt(calc_cost(tariff[1], tariff[0]));
    assrt(calc_cost(tariff[2], tariff[0]));
    assrt(calc_cost(tariff[3], tariff[0]));
    assrt(calc_cost(tariff, 4);
    return 0;
}


