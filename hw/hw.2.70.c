//
// Created by user on 9/2/23.
//
#include "../include/common.h"

int fits_bits(int x, int n) {
    int w = sizeof(int) << 3;
    int t = ((~x + 1) & (x >> 31)) | (x & ~(x >> 31));
    return (t & ((1 << (n - 1)) - 1)) == t;
}

int main() {
    printf("%d %d %d\n", fits_bits(16, 5), fits_bits(16, 6), fits_bits(-16, 5));
}