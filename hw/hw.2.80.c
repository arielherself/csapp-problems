//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int mul3div4(int x) {
    int x3 = (x << 1) + x;
    int l2b = x3 & 0x03;
    int plus1 = (x3 >> 31) & 0x01 & !!l2b;
    return (x3 >> 2) + plus1;
}

int main() {
    printf("%d %d %d\n", mul3div4(1), mul3div4(-1), mul3div4(-2147483648));
    return 0;
}