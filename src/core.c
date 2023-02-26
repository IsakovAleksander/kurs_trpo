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
	const int minutes_diff = non_negative_diff(tariff.packet.minutes, base.packet.minutes);
	const int messages_diff = non_negative_diff(tariff.packet.minutes, base.packet.minutes);
	const int internet_diff = non_negative_diff(tariff.packet.minutes, base.packet.minutes);
	const int minutes_cost = minutes_diff * extra_packet.minutes;
	const int messages_cost = messages_diff * extra_packet.messages;
	const int internet_cost = internet_diff * extra_packet.internet;
	int result_cost = tariff.cost + minutes_cost + messages_cost + internet_cost;
	return result_cost;
}

int cheapest(Tariff* tariff, int size, Packet extra_packet) {
    int count = 1;
    int mincost = tariff[1].cost + tariff[2].cost + tariff[3].cost;
    Tariff buff;
    for(int i = 1; i < size; i++) {
        buff.cost = calc_cost(tariff[i], buff, extra_packet);
        if(mincost > buff.cost) {
            mincost = buff.cost;
            count = i;
        }
    }
    return count;
}
