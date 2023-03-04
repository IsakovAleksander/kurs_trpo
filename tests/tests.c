#define CTEST_MAIN

#include "../src/core.h"

#include "ctest.h"

CTEST(arithmetic_suite, non_negative_diff) {
    // Given
    const int a = 1;
    const int b = 2;

    // When

    const int result = non_negative_diff(a, b);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, calc_cost1) {
    // Given
    Packet extra_packet;
    extra_packet.minutes = 5;
    extra_packet.messages = 5;
    extra_packet.internet = 50;
    Tariff tariff[2] = {
        {430, 500, 50, 0},
        {300, 300, 15, 300},
    };
    // When

    const int result = calc_cost(tariff[1], tariff[0], extra_packet);

    // Then
    const int expected = 3700;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, calc_cost2) {
    // Given
    Packet extra_packet;
    extra_packet.minutes = 5;
    extra_packet.messages = 5;
    extra_packet.internet = 50;
    Tariff tariff[2] = {
        {430, 500, 50, 0},
        {450, 450, 10, 450},
    };
    // When

    const int result = calc_cost(tariff[1], tariff[0], extra_packet);

    // Then
    const int expected = 2700;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, calc_cost3) {
    // Given
    Packet extra_packet;
    extra_packet.minutes = 5;
    extra_packet.messages = 5;
    extra_packet.internet = 50;
    Tariff tariff[2] = {
        {430, 500, 50, 0},
        {600, 600, 30, 750},
    };
    // When

    const int result = calc_cost(tariff[1], tariff[0], extra_packet);

    // Then
    const int expected = 1750;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
