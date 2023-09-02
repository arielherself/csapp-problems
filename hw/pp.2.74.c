//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int tsub_ok(int x, int y) {
    return ((~((x & ~y & ~(x - y)) | (~x & y & (x - y)))) >> 31) & 1;
}

int main() {
    printf("%d %d %d\n", tsub_ok(-2147483648, 1), tsub_ok(1, 1), tsub_ok(2147483647, -1));
}