#include <stdio.h>
#include <stdlib.h>

typedef struct Tariff{
    int minutes;
    int messages;
    int internet;
    int cost;
}Tariff;

int main(){
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    printf("Enter number of minutes, messages and Gb\n");
    scanf("%d %d %d", &tariff[0].minutes, &tariff[0].messages, &tariff[0].internet);
    return 0;
}


