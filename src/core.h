typedef struct Tariff{
    int minutes;
    int messages;
    int internet;
    int cost;
} Tariff;

int extraMinutes = 5;
int extraMessages = 5;
int extraInternet = 50;

int non_negative_diff(int a, int b);

int cheapest(Tariff* tariff, int size);
