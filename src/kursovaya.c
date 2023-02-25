#include <stdio.h>
#include <stdlib.h>

typedef struct Tariff{
    int minutes;
    int messages;
    int internet;
    int cost;
}Tariff;

int cheapest(Tariff* tariff, int size){
    int count = 1;
    int extraMinutes = 5;
    int extraMessages = 5;
    int extraInternet = 50;
    int mincost = tariff[1].cost + tariff[2].cost + tariff[3].cost;
    Tariff buff;
    for(int i = 1; i < size; i++){
        buff.minutes = tariff[0].minutes - tariff[i].minutes;
        if(buff.minutes < 0){
            buff.minutes = 0;
        }
        buff.messages = tariff[0].messages - tariff[i].messages;
        if(buff.messages < 0){
            buff.messages = 0;
        }
        buff.internet = tariff[0].internet - tariff[i].internet;
        if(buff.internet < 0){
            buff.internet = 0;
        }
        buff.cost = tariff[i].cost + buff.minutes * extraMinutes + buff.messages * extraMessages + buff.internet * extraInternet;
        if(mincost > buff.cost){
            mincost = buff.cost;
            count = i;
        }
    }
    return count;
}

int main(){
    int count;
    Tariff tariff[4] = {
        {},
        {300, 300, 15, 300},
        {450, 450, 10, 450},
        {600, 600, 30, 750},
    };
    printf("Enter number of minutes, messages and Gb\n");
    scanf("%d %d %d", &tariff[0].minutes, &tariff[0].messages, &tariff[0].internet);
    count = cheapest(tariff, 4);
    switch(count){
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


