//
// Created by user on 9/2/23.
//
#include "../include/common.h"

unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    int w = sizeof(int) << 3;
    return xsra & ((1 << (w - k)) - 1);
}

int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    int w = sizeof(int) << 3;
    return ((((unsigned) x >> 31) << k) - ((unsigned) x >> 31) << (w - k)) + xsrl;
}

int main() {
    show_unsigned_bits(-2147483648);
    show_unsigned_bits(sra(-2147483648, 10));
    show_unsigned_bits(srl(-2147483648, 10));
    show_unsigned_bits(-1);
    show_unsigned_bits(sra(-1, 10));
    show_unsigned_bits(srl(-1, 10));
    return 0;
}