//
// Created by user on 8/30/23.
//
#include "include/common.h"

int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m) {
    /* Truth table:
     * x m r
     * 0 0 0
     * 1 0 1
     * 0 1 0
     * 1 1 0
     */
    return (x ^ m) & x;
}

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_xor(int x, int y) {
    int result = bis(bic(x, y), bic(y, x));
    return result;
}

int main() {
    int a = 0x01101011, b = 0x10011100;
    show_bytes(&a, 4);
    show_bytes(&b, 4);
    int c = bool_or(a, b);
    show_bytes(&c, 4);
    c = bool_xor(a, b);
    show_bytes(&c, 4);
    return 0;
}
