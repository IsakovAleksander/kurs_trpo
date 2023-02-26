#ifndef CORE_H
#define CORE_H
typedef struct Tariff{
    int minutes;
    int messages;
    int internet;
    int cost;
} Tariff;

const int extra_minutes = 5;
const int extra_messages = 5;
const int extra_internet = 50;

int non_negative_diff(int a, int b);

int cheapest(Tariff* tariff, int size);

#endif //CORE_H
