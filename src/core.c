#include "core.h"

#include <stdio.h>
#include <stdlib.h>

int non_negative_diff(int a, int b) {
	int res = a - b;
	if (res < 0) {
		return 0;
	}
	return res;
}

int calc_cost(const Tariff tariff, const Tariff base, Packet extra_packet) {
	int minutes_diff = non_negative_diff(base.packet.minutes, tariff.packet.minutes);
	int messages_diff = non_negative_diff(base.packet.messages, tariff.packet.messages);
	int internet_diff = non_negative_diff(base.packet.internet, tariff.packet.internet);
	int minutes_cost = minutes_diff * extra_packet.minutes;
	int messages_cost = messages_diff * extra_packet.messages;
	int internet_cost = internet_diff * extra_packet.internet;
	int result_cost = tariff.cost + minutes_cost + messages_cost + internet_cost;
	return result_cost;
}

int cheapest(Tariff* tariff, int size, Packet extra_packet) {
    int count = 1;
    int mincost = (tariff[1].cost + tariff[2].cost + tariff[3].cost) * 10;
    for(int i = 1; i < size; i++) {
        tariff[0].cost = calc_cost(tariff[i], tariff[0], extra_packet);
        if(mincost > tariff[0].cost) {
            mincost = tariff[0].cost;
            count = i;
        }
    }
    return count;
}
