//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int int_shifts_are_arithmetic() {
    int w = sizeof(int) << 3;
    return (((1 << (w - 1) >> (w - 1)) & (1 << (w - 1))) >> (w - 1)) & 1;
}

int main() {
    if (int_shifts_are_arithmetic()) {
        printf("Arithmetic shift detected.\n");
    } else {
        printf("Logical shift detected.\n");
    }
    return 0;
}