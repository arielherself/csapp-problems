//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int any_odd_one(unsigned x) {
    return !!(x & ((0x55 << 24) + (0x55 << 16) + (0x55 << 8) + 0x55));
}

int main() {
    printf("%d %d %d\n", any_odd_one(1), any_odd_one(2), any_odd_one(4));
    return 0;
}