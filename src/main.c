#include "core.h"

#include <stdio.h>

int main() {
    int count;
    Packet extra_packet;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };

    FILE* extra_packet_file;
    extra_packet_file = fopen("extra_packet_data.txt","r");
    fscanf("%d%d%d", &extra_packet.minutes, &extra_packet.messages, &extra_packet.internet);
    fclose(extra_packet_file);

    printf("Enter number of minutes, messages and Gb\n");
    scanf("%d %d %d", &tariff[0].packet.minutes, &tariff[0].packet.messages, &tariff[0].packet.internet);
    count = cheapest(tariff, 4, extra_packet);
    switch(count) {
    case 1:
        printf("The first tariff is the best\n");
        break;
    case 2:
        printf("The second tariff is the best\n");
        break;
    case 3:
        printf("The third tariff is the best\n");
        break;
    }
    return 0;
}


