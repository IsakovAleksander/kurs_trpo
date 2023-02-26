#ifndef CORE_H
#define CORE_H

typedef struct Tariff {
    int minutes;
    int messages;
    int internet;
    int cost;
} Tariff;

int non_negative_diff(int a, int b);

int calc_cost(const Tariff tariff, const Tariff base);

int cheapest(Tariff* tariff, int size);

#endif //CORE_H
