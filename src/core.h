#ifndef CORE_H
#define CORE_H

typedef struct Packet {
    int minutes;
    int messages;
    int internet;
} Packet;

typedef struct Tariff {
    Packet packet;
    int cost;
} Tariff;

int non_negative_diff(int a, int b);

int calc_cost(const Tariff tariff, const Tariff base, Packet extra_packet);

int cheapest(Tariff* tariff, int size, Packet extra_packet);

#endif //CORE_H
