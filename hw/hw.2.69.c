//
// Created by user on 9/2/23.
//
#include "../include/common.h"

unsigned rotate_left(unsigned x, int n) {
    int w = sizeof(unsigned) << 3;
    return (x << n) + (x >> (w - n));
}

int main() {
    unsigned a = 0x12345678;
    show_unsigned(a);
    show_unsigned(rotate_left(a, 4));
    show_unsigned(rotate_left(a, 20));
    return 0;
}