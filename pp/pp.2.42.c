//
// Created by user on 8/31/23.
//
#include <stdio.h>

int div16(int x) {
    return (x + ((x >> 31 & 1) << 4) - (x >> 31 & 1)) >> 4;
}

int main() {
    int a = -17, b = 33;
    printf("%d %d\n", a >> 4, b >> 4);
    printf("%d %d\n", div16(a), div16(b));
}