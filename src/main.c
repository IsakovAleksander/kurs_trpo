#include "core.h"

#include <stdio.h>

int main() {
    int count;
    Packet extra_packet;
    Tariff tariff[4] = {};

    FILE* extra_packet_file;
    extra_packet_file = fopen("extra_packet_data.txt","r");
    fscanf(extra_packet_file, "%d%d%d", &extra_packet.minutes, &extra_packet.messages, &extra_packet.internet);
    fclose(extra_packet_file);

    FILE* tariff_data_file;
    tariff_data_file = fopen("tariff1_data.txt","r");
    fscanf(tariff_data_file, "%d%d%d%d", &tariff[1].packet.minutes, &tariff[1].packet.messages, &tariff[1].packet.internet, &tariff[1].cost);
    fclose(tariff_data_file);

    tariff_data_file = fopen("tariff2_data.txt","r");
    fscanf(tariff_data_file, "%d%d%d%d", &tariff[2].packet.minutes, &tariff[2].packet.messages, &tariff[2].packet.internet, &tariff[2].cost);
    fclose(tariff_data_file);

    tariff_data_file = fopen("tariff3_data.txt","r");
    fscanf(tariff_data_file, "%d%d%d%d", &tariff[3].packet.minutes, &tariff[3].packet.messages, &tariff[3].packet.internet, &tariff[3].cost);
    fclose(tariff_data_file);

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


