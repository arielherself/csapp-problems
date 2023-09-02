//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int saturating_add(int x, int y) {
    int w = sizeof(int) << 3;
    const int TMin = 1 << (w - 1);
    const int TMax = (unsigned) TMin - 1;
    int raw_add = x + y;
    return (((~x & ~y & raw_add) >> 31) & TMax) |
           (((x & y & ~raw_add) >> 31) & TMin) |
           (((~(~x & ~y & raw_add) & ~(x & y & ~raw_add)) >> 31) & raw_add);
}

int main() {
    printf("%d %d %d\n", saturating_add(2147483647, 1), saturating_add(1, 2), saturating_add(-2147483648, -1));
    return 0;
}