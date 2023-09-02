//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int operation(int x, int y) {
    return (x & 0xFF) + (((unsigned)0x00 - 0x100) & y);
}

int main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    show_int(x);
    show_int(y);
    show_int(operation(x, y));
    return 0;
}