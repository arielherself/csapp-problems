//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int pA(int x) {
    int w = sizeof(int) << 3;
    return ((unsigned) (~(~x & ~(-x))) >> (w - 1));
}

int pB(int x) {
    return pA(~x);
}

int pC(int x) {
    return pA(x & 0xFF);
}

int pD(int x) {
    int w = sizeof(int) << 3;
    return pA((~(x >> (w - 8)) & 0xFF));
}

int main() {
    printf("%d %d %d\n", pA(0), pA(1), pA(-2147483648));
    printf("%d %d %d\n", pB(-1), pB(1), pB(-2147483648));
    printf("%d %d %d\n", pC(256), pC(1), pC(-2147483648));
    printf("%d %d %d\n", pD(-16777216), pD(1), pD(-2147483648));
    return 0;
}