#include "../src/core.h"

#include <assert.h>
#include <stdio.h>

int main() {
    int count;
    Packet extra_packet;
    extra_packet.minutes = 5;
    extra_packet.messages = 5;
    extra_packet.internet = 50;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    tariff[0].packet.minutes = 430;
    tariff[0].packet.messages = 500;
    tariff[0].packet.internet = 50;
    assert(non_negative_diff(1, 2) == 0);
    assert(calc_cost(tariff[1], tariff[0], extra_packet) == 3700);
    assert(calc_cost(tariff[2], tariff[0], extra_packet) == 2700);
    assert(calc_cost(tariff[3], tariff[0], extra_packet) == 1750);
    printf("tests done\n");
    return 0;
}


